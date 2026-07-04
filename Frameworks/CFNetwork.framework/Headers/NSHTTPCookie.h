/* Runtime dump - NSHTTPCookie
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSHTTPCookie : NSObject
{
    NSHTTPCookieInternal * _cookiePrivate;
}

@property (readonly, copy) NSDictionary * properties;
@property (readonly) unsigned int version;
@property (readonly, copy) NSString * name;
@property (readonly, copy) NSString * value;
@property (readonly, copy) NSDate * expiresDate;
@property (readonly) char sessionOnly;
@property (readonly, copy) NSString * domain;
@property (readonly, copy) NSString * path;
@property (readonly) char secure;
@property (readonly) char HTTPOnly;
@property (readonly, copy) NSString * comment;
@property (readonly, copy) NSURL * commentURL;
@property (readonly, copy) NSArray * portList;

+ (NSArray *)cookiesWithResponseHeaderFields:(NSDictionary *)arg0 forURL:(NSURL *)arg1;
+ (NSHTTPCookie *)requestHeaderFieldsWithCookies:(NSArray *)arg0;
+ (NSHTTPCookie *)cookieWithCFHTTPCookie:(struct OpaqueCFHTTPCookie *)arg0;
+ (struct __CFArray *)_ns2cfCookies:(id)arg0;
+ (NSHTTPCookie *)_cf2nsCookies:(struct __CFArray *)arg0;
+ (NSArray *)_parsedCookiesWithResponseHeaderFields:(NSDictionary *)arg0 forURL:(NSURL *)arg1;
+ (NSDictionary *)cookieWithProperties:(NSDictionary *)arg0;

- (NSCoder *)replacementObjectForPortCoder:(NSCoder *)arg0;
- (NSHTTPCookie *)initWithCFHTTPCookie:(struct OpaqueCFHTTPCookie *)arg0;
- (char)isSessionOnly;
- (NSDate *)expiresDate;
- (NSURL *)commentURL;
- (NSArray *)portList;
- (struct OpaqueCFHTTPCookie *)_GetInternalCFHTTPCookie;
- (struct OpaqueCFHTTPCookie *)_CFHTTPCookie;
- (char)isHTTPOnly;
- (NSString *)Name;
- (id)Value;
- (NSString *)Domain;
- (NSString *)Path;
- (id)Expires;
- (id)Comment;
- (NSURL *)CommentURL;
- (NSURL *)OriginURL;
- (NSString *)Version;
- (id)Secure;
- (id)Discard;
- (NSObject *)Port;
- (id)MaxAge;
- (int)_compareForHeaderOrder:(id)arg0;
- (char)_isExpired;
- (void)dealloc;
- (NSHTTPCookie *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSHTTPCookie *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)name;
- (NSString *)domain;
- (NSString *)path;
- (NSString *)value;
- (char)isSecure;
- (unsigned int)version;
- (NSHTTPCookie *)initWithProperties:(NSDictionary *)arg0;
- (NSDictionary *)properties;
- (NSString *)_key;
- (NSString *)comment;
- (void)finalize;

@end
