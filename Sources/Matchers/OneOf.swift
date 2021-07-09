//
//  Created by Marko Justinek on 11/4/20.
//  Copyright © 2020 Marko Justinek. All rights reserved.
//
//  Permission to use, copy, modify, and/or distribute this software for any
//  purpose with or without fee is hereby granted, provided that the above
//  copyright notice and this permission notice appear in all copies.
//
//  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
//  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
//  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
//  SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
//  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
//  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR
//  IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
//

import Foundation
@_implementationOnly import PactSwiftToolbox

/// Defines a Pact matcher that validates against one of the provided values.
///
/// - parameter values: Possible values
/// - parameter use: The value `MockService` will return
///
public extension Matcher {

	struct OneOf: MatchingRuleExpressible {
		internal let value: Any
		internal let term: String

		internal var rules: [[String: AnyEncodable]] {
			[
				[
					"match": AnyEncodable("regex"),
					"regex": AnyEncodable(term),
				],
			]
		}

		private let message = "Matcher.OneOf(_:return:) must contain at least one value, and `use` must equal one of the provided values!"

		// MARK: - Initializer

		/// Defines a Pact matcher that validates against one of the provided values.
		///
		/// - parameter values: Possible values
		/// - parameter use: The value `MockService` will return
		///
		init(_ values: String..., use: String) {
			self.init(values: values, use: use)
		}

		/// Defines a Pact matcher that validates against one of the provided values.
		///
		/// - parameter values: Possible values
		/// - parameter use: The value `MockService` will return
		///
		init(_ values: Int..., use: Int) {
			self.init(values: values, use: use)
		}

		/// Defines a Pact matcher that validates against one of the provided values.
		///
		/// - parameter values: Possible values
		/// - parameter use: The value `MockService` will return
		///
		init(values: [String], use: String) {
			self.value = use
			self.term = values.joined(separator: "|")
		}

		/// Defines a Pact matcher that validates against one of the provided values.
		///
		/// - parameter values: Possible values
		/// - parameter use: The value `MockService` will return
		///
		init(values: [Int], use: Int) {
			self.value = use
			self.term = values.map { String($0) }.joined(separator: "|")
		}
	}

}

// MARK: - Objective-C

@objc(PFMatcherOneOf)
public class ObjcOneOf: NSObject, ObjcMatcher {

	let type: MatchingRuleExpressible

	/// Defines a Pact matcher that validates against one of the provided values.
	///
	/// - parameter values: Possible values
	/// - parameter use: The value `MockService` will return
	///
	@objc(values: use:)
	public init(values: [String], use: String) {
		type = Matcher.OneOf(values: values, use: use)
	}

}
