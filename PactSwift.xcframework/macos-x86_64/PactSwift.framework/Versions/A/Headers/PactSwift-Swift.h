// Generated by Apple Swift version 5.3.2 (swiftlang-1200.0.45 clang-1200.0.32.28)
#ifndef PACTSWIFT_SWIFT_H
#define PACTSWIFT_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PactSwift",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



/// Defines the interaction between consumer and provider
SWIFT_CLASS("_TtC9PactSwift11Interaction")
@interface Interaction : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



@class ProviderState;
enum PactHTTPMethod : NSInteger;

@interface Interaction (SWIFT_EXTENSION(PactSwift))
/// Defines the provider state for the given interaction
/// It is important to provide a meaningful description with
/// values that help prepare provider Pact tests.
/// Example:
/// <code>users exist</code>
/// \param providerState Description of the state.
///
- (Interaction * _Nonnull)givenProviderState:(NSString * _Nonnull)providerState;
/// Defines the provider states with parameters for the given interaction
- (Interaction * _Nonnull)givenProviderStates:(NSArray<ProviderState *> * _Nonnull)providerStates;
- (Interaction * _Nonnull)withRequestHTTPMethod:(enum PactHTTPMethod)method path:(NSString * _Nonnull)path query:(NSDictionary<NSString *, NSArray *> * _Nullable)query headers:(NSDictionary<NSString *, id> * _Nullable)headers body:(id _Nullable)body;
/// Defines the expected response for the interaction. It defines the
/// values <code>MockService</code> will respond with when it receives the expected
/// request as defined in this interaction.
/// At a minimum the <code>status</code> is required to test an API response.
/// By not providing a value for <code>headers</code> or <code>body</code> it is understood
/// that the presence of those values in the response is <em>not required</em>
/// but they can be present.
/// \param status The response status code
///
/// \param headers The response headers
///
/// \param body The response body
///
- (Interaction * _Nonnull)willRespondWithStatus:(NSInteger)status headers:(NSDictionary<NSString *, id> * _Nullable)headers body:(id _Nullable)body;
@end

enum TransferProtocol : NSInteger;

/// Initializes a <code>MockService</code> object that handles Pact interaction testing.
/// When initializing with <code>.secure</code> scheme, the SSL certificate on Mock Server
/// is a self-signed certificate.
SWIFT_CLASS("_TtC9PactSwift11MockService")
@interface MockService : NSObject
/// The url of <code>MockService</code>
@property (nonatomic, readonly, copy) NSString * _Nonnull baseUrl;
/// Initializes a <code>MockService</code> object that handles Pact interaction testing.
/// When initializing with <code>.secure</code> scheme, the SSL certificate on Mock Server
/// is a self-signed certificate
/// \param consumer Name of the API consumer (eg: “mobile-app”)
///
/// \param provider Name of the API provider (eg: “auth-service”)
///
/// \param scheme HTTP scheme
///
- (nonnull instancetype)initWithConsumer:(NSString * _Nonnull)consumer provider:(NSString * _Nonnull)provider transferProtocol:(enum TransferProtocol)scheme;
/// Initializes a <code>MockService</code> object that handles Pact interaction testing.
/// When initializing with <code>.secure</code> scheme, the SSL certificate on Mock Server
/// is a self-signed certificate
/// \param consumer Name of the API consumer (eg: “mobile-app”)
///
/// \param provider Name of the API provider (eg: “auth-service”)
///
/// \param scheme HTTP scheme
///
/// \param port The port number to run the MockServer on (greater than 1200)
///
- (nonnull instancetype)initWithConsumer:(NSString * _Nonnull)consumer provider:(NSString * _Nonnull)provider transferProtocol:(enum TransferProtocol)scheme port:(NSInteger)port;
/// Describes the <code>Interaction</code> between the consumer and provider.
/// It is important that the <code>description</code> and provider state
/// combination is unique per consumer-provider contract.
/// \param description A description of the API interaction
///
- (Interaction * _Nonnull)uponReceiving:(NSString * _Nonnull)description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, TransferProtocol, open) {
  TransferProtocolStandard = 0,
  TransferProtocolSecure = 1,
};



@interface MockService (SWIFT_EXTENSION(PactSwift))
/// Runs the Pact test with default timeout
- (void)run:(void (^ _Nonnull)(void (^ _Nonnull)(void)))testFunction;
/// Runs the Pact test with provided timeout
- (void)run:(void (^ _Nonnull)(void (^ _Nonnull)(void)))testFunction withTimeout:(NSTimeInterval)timeout;
@end



SWIFT_CLASS_NAMED("ObjCProviderState")
@interface ProviderState : NSObject
- (nonnull instancetype)initWithDescription:(NSString * _Nonnull)description params:(NSDictionary<NSString *, NSString *> * _Nonnull)params OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Defines a Pact matcher that expects a <code>Decimal</code> value.
/// Use this matcher when you care about the type being a <code>Decimal</code>
/// but the value itself does not matter.
/// \code
/// @{@"foo": [Matcher DecimalLike(1234)] }
///
/// \endcode\param value The value MockService should expect or respond with
///
SWIFT_CLASS_NAMED("ObjcDecimalLike")
@interface PFMatcherDecimalLike : NSObject
/// Defines a Pact matcher that expects a <code>Decimal</code> value.
/// \param value The value MockService should expect or respond with
///
- (nonnull instancetype)value:(NSDecimal)value OBJC_DESIGNATED_INITIALIZER SWIFT_METHOD_FAMILY(init);
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("ObjcEachLike")
@interface PFMatcherEachLike : NSObject
/// Defines a Pact matcher describing a set
/// <ul>
///   <li>
///     Parameters
///     <ul>
///       <li>
///         value: Template to base the comparison on
///       </li>
///       <li>
///         count: Number of examples to generate, defaults to <code>1</code>
///       </li>
///     </ul>
///   </li>
/// </ul>
- (nonnull instancetype)value:(id _Nonnull)value count:(NSInteger)count OBJC_DESIGNATED_INITIALIZER SWIFT_METHOD_FAMILY(init);
/// Defines a Pact matcher describing a set
/// precondition:
/// <code>min</code> and <code>max</code> must each be a positive value. Lesser of the two values will be considered as <code>min</code> and greater of the two will be considered as <code>max</code>
/// precondition:
/// <code>count</code> must be a value between <code>min</code> and <code>max</code>, else either <code>min</code> or <code>max</code> is used to generate the number of examples
/// \param value Template to base the comparison on
///
/// \param min Minimum expected number of occurances of provided <code>value</code>
///
/// \param max Maximum expected number of occurances of provided <code>value</code>
///
/// \param count Number of examples to generate, defaults to <code>1</code>
///
- (nonnull instancetype)value:(id _Nonnull)value min:(NSInteger)min max:(NSInteger)max count:(NSInteger)count OBJC_DESIGNATED_INITIALIZER SWIFT_METHOD_FAMILY(init);
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("ObjcEqualTo")
@interface PFMatcherEqualTo : NSObject
/// Defines a Pact matcher that explicitly expects the provided value
/// \param value The value to be returned by MockService
///
- (nonnull instancetype)value:(id _Nonnull)value OBJC_DESIGNATED_INITIALIZER SWIFT_METHOD_FAMILY(init);
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("ObjcIncludesLike")
@interface PFMatcherIncludesLike : NSObject
- (nonnull instancetype)includesAll:(NSArray<NSString *> * _Nonnull)includesAll generate:(NSString * _Nullable)generate OBJC_DESIGNATED_INITIALIZER SWIFT_METHOD_FAMILY(init);
- (nonnull instancetype)includesAny:(NSArray<NSString *> * _Nonnull)includesAny generate:(NSString * _Nullable)generate OBJC_DESIGNATED_INITIALIZER SWIFT_METHOD_FAMILY(init);
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("ObjcIntegerLike")
@interface PFMatcherIntegerLike : NSObject
- (nonnull instancetype)value:(NSInteger)value OBJC_DESIGNATED_INITIALIZER SWIFT_METHOD_FAMILY(init);
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("ObjcMatchNull")
@interface PFMatcherNull : NSObject
/// Defines a Pact matcher that expects <code>null</code>
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("ObjcRandomBool")
@interface PFGeneratorRandomBool : NSObject
/// Generates a random boolean value
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("ObjcRandomDate")
@interface PFGeneratorRandomDate : NSObject
/// Generates a <code>Date</code> value from the current date either in ISO format or using the provided format string
/// \param format The format of generated date
///
- (nonnull instancetype)format:(NSString * _Nullable)format OBJC_DESIGNATED_INITIALIZER SWIFT_METHOD_FAMILY(init);
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("ObjcRandomDateTime")
@interface PFGeneratorRandomDateTime : NSObject
/// Generates a Date and Time (timestamp) value from the current date and time either in ISO format or using the provided format string
/// \param format The format of generated timestamp
///
- (nonnull instancetype)format:(NSString * _Nullable)format OBJC_DESIGNATED_INITIALIZER SWIFT_METHOD_FAMILY(init);
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("ObjcRandomDecimal")
@interface PFGeneratorRandomDecimal : NSObject
/// Generates a random decimal value (BigDecimal) with the provided number of digits
/// precondition:
/// <code>digits</code> is a positive value
/// \param digits Number of digits of the generated <code>Decimal</code> value
///
- (nonnull instancetype)digits:(NSInteger)digits OBJC_DESIGNATED_INITIALIZER SWIFT_METHOD_FAMILY(init);
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("ObjcRandomHexadecimal")
@interface PFGeneratorRandomHexadecimal : NSObject
/// Generates a random hexadecimal value (String) with the provided number of digits
/// precondition:
/// <code>digits</code> is a positive value
/// \param digits The length of generated hexadecimal string
///
- (nonnull instancetype)digits:(NSInteger)digits OBJC_DESIGNATED_INITIALIZER SWIFT_METHOD_FAMILY(init);
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("ObjcRandomInt")
@interface PFGeneratorRandomInt : NSObject
/// Generates a random integer value between provided <code>min</code> and <code>max</code> values
/// precondition:
/// <code>min</code> is a positive value
/// \param min Minimum possible value
///
/// \param max Maximum possible value
///
- (nonnull instancetype)min:(NSInteger)min max:(NSInteger)max OBJC_DESIGNATED_INITIALIZER SWIFT_METHOD_FAMILY(init);
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("ObjcRandomString")
@interface PFGeneratorRandomString : NSObject
/// Generates a random string value of the provided size characters
/// precondition:
/// <code>size</code> is a positive value
/// \param size The size of generated <code>String</code>
///
- (nonnull instancetype)size:(NSInteger)size OBJC_DESIGNATED_INITIALIZER SWIFT_METHOD_FAMILY(init);
/// Generates a random string value from the provided regular expression
/// Use a raw <code>String</code> (eg: <code>#"\d{2}/\d{2,4}"#</code>) to avoid interpreting special characters.
/// Feature provided by<code>kennytm/rand_regex</code> library (https://github.com/kennytm/rand_regex).
/// \param regex The regular expression that defines the generated <code>String</code>
///
- (nonnull instancetype)regex:(NSString * _Nonnull)regex OBJC_DESIGNATED_INITIALIZER SWIFT_METHOD_FAMILY(init);
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("ObjcRandomTime")
@interface PFGeneratorRandomTime : NSObject
/// Generates a Time value from the current time either in ISO format or using the provided format string
/// \param format The format of generated time
///
- (nonnull instancetype)format:(NSString * _Nullable)format OBJC_DESIGNATED_INITIALIZER SWIFT_METHOD_FAMILY(init);
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("ObjcRandomUUID")
@interface PFGeneratorRandomUUID : NSObject
/// Generates a random UUID value
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("ObjcRegexLike")
@interface PFMatcherRegexLike : NSObject
- (nonnull instancetype)value:(NSString * _Nonnull)value term:(NSString * _Nonnull)term OBJC_DESIGNATED_INITIALIZER SWIFT_METHOD_FAMILY(init);
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("ObjcSomethingLike")
@interface PFMatcherSomethingLike : NSObject
/// Defines a Pact matcher that expects a specific <code>Type</code>
/// \param value Value of expected type
///
- (nonnull instancetype)value:(id _Nonnull)value OBJC_DESIGNATED_INITIALIZER SWIFT_METHOD_FAMILY(init);
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// The HTTP method expected in the interaction
typedef SWIFT_ENUM(NSInteger, PactHTTPMethod, open) {
  PactHTTPMethodGET = 0,
  PactHTTPMethodHEAD = 1,
  PactHTTPMethodPOST = 2,
  PactHTTPMethodPUT = 3,
  PactHTTPMethodPATCH = 4,
  PactHTTPMethodDELETE = 5,
  PactHTTPMethodTRACE = 6,
  PactHTTPMethodCONNECT = 7,
  PactHTTPMethodOPTIONS = 8,
};

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
