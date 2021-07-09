//
//  Created by Marko Justinek on 9/7/21.
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

import XCTest

@testable import PactSwift

class OneOfTests: XCTestCase {

	func testMatcher_OneOf_InitsWithStringValue() throws {
		let testResult = try XCTUnwrap(Matcher.OneOf("enabled", "disabled", use: "enabled"))
		XCTAssertEqual(testResult.term, "enabled|disabled")
		XCTAssertEqual(testResult.value as? String, "enabled")
	}

	func testMatcher_OneOf_InitsWithIntValue() throws {
		let testResult = try XCTUnwrap(Matcher.OneOf(1, 2, 3, use: 1))
		XCTAssertEqual(testResult.term, "1|2|3")
		XCTAssertEqual(testResult.value as? Int, 1)
	}

	func testMatcher_OneOf_InitsWithDecimal() throws {
		let testResult = try XCTUnwrap(Matcher.OneOf(Decimal(100.15), Decimal(100.24), use: Decimal(100.24)))
		XCTAssertEqual(testResult.term, "100.15|100.24")
		XCTAssertEqual(testResult.value as? Decimal, Decimal(100.24))
	}

}
