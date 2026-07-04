/* Runtime dump - NSURLResponse
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLResponse : NSObject <NSSecureCoding, NSCopying>
{
    NSURLResponseInternal * _internal;
}

@property (readonly) char tsu_isHTTPSuccess;
@property (readonly, nonatomic) char ssv_isExpiredResponse;
@property (readonly, copy) NSURL * URL;
@property (readonly, copy) NSString * MIMEType;
@property (readonly) long long expectedContentLength;
@property (readonly, copy) NSString * textEncodingName;
@property (readonly, copy) NSString * suggestedFilename;

+ (NSObject *)getObjectKeyWithIndex:(long)arg0;
+ (char)supportsSecureCoding;
+ (NSURLResponse *)_responseWithCFURLResponse:(struct _CFURLResponse *)arg0;

- (char)tsu_isHTTPSuccess;
- (NSNumber *)_cacheTime;
- (int)statusCode;
- (NSDictionary *)allHeaderFields;
- (long long)maxExpectedContentLength;
- (NSDictionary *)copyXPCEncoding;
- (NSURLResponse *)initWithXPCEncoding:(NSString *)arg0;
- (char)ssv_isExpiredResponse;
- (NSURLResponse *)_initWithCFURLResponse:(struct _CFURLResponse *)arg0;
- (NSString *)textEncodingName;
- (NSString *)suggestedFilename;
- (void)_setExpectedContentLength:(long long)arg0;
- (void)_setMIMEType:(NSObject *)arg0;
- (NSDate *)_lastModifiedDate;
- (char)_mustRevalidate;
- (double)_freshnessLifetime;
- (double)_calculatedExpiration;
- (id)_peerCertificateChain;
- (void)dealloc;
- (NSURLResponse *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSURLResponse *)init;
- (NSString *)description;
- (NSURLResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSURL *)URL;
- (NSString *)MIMEType;
- (long long)expectedContentLength;
- (struct _CFURLResponse *)_CFURLResponse;
- (NSURLResponse *)initWithURL:(NSString *)arg0 MIMEType:(NSString *)arg1 expectedContentLength:(int)arg2 textEncodingName:(NSString *)arg3;

@end
