/* Runtime dump - NSHTTPURLResponse
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSHTTPURLResponse : NSURLResponse
{
    NSHTTPURLResponseInternal * _httpInternal;
}

@property (readonly) char tsu_isSuccess;
@property (readonly) int statusCode;
@property (readonly, copy) NSDictionary * allHeaderFields;

+ (char)isErrorStatusCode:(int)arg0;
+ (char)supportsSecureCoding;
+ (NSHTTPURLResponse *)localizedStringForStatusCode:(int)arg0;

- (char)tsu_isSuccess;
- (NSObject *)getSAPSignature;
- (double)_maxAge;
- (NSData *)radio_decompressedDataWithBodyData:(NSData *)arg0;
- (NSDate *)expirationDate;
- (long long)maxExpectedContentLength;
- (NSString *)_iTunesStore_valueForHTTPHeader:(NSString *)arg0;
- (double)expirationInterval;
- (char)_getCacheControlMaxAge:(double *)arg0;
- (NSDate *)_dateFromExpires;
- (NSURLResponse *)_initWithCFURLResponse:(struct _CFURLResponse *)arg0;
- (id)_peerCertificateChain;
- (NSHTTPURLResponse *)initWithURL:(NSString *)arg0 statusCode:(int)arg1 headerFields:(NSDictionary *)arg2 requestTime:(double)arg3;
- (id)_clientCertificateChain;
- (NSObject *)_clientCertificateState;
- (void)_setPeerTrust:(struct __SecTrust *)arg0;
- (struct __SecTrust *)_peerTrust;
- (void)dealloc;
- (NSHTTPURLResponse *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (int)statusCode;
- (NSDictionary *)allHeaderFields;
- (NSHTTPURLResponse *)initWithURL:(NSString *)arg0 statusCode:(int)arg1 HTTPVersion:(NSString *)arg2 headerFields:(NSDictionary *)arg3;

@end
