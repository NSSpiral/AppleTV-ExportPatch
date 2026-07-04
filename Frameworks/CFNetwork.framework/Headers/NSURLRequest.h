/* Runtime dump - NSURLRequest
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLRequest : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
    NSURLRequestInternal * _internal;
}

@property (retain, nonatomic) GKFairPlaySAPSession * _gkSAPSession;
@property (readonly, copy) NSString * HTTPMethod;
@property (readonly, copy) NSDictionary * allHTTPHeaderFields;
@property (readonly, copy) NSData * HTTPBody;
@property (readonly, retain) NSInputStream * HTTPBodyStream;
@property (readonly) char HTTPShouldHandleCookies;
@property (readonly) char HTTPShouldUsePipelining;
@property (readonly, copy) NSURL * URL;
@property (readonly) unsigned int cachePolicy;
@property (readonly) double timeoutInterval;
@property (readonly, copy) NSURL * mainDocumentURL;
@property (readonly) unsigned int networkServiceType;
@property (readonly) char allowsCellularAccess;

+ (NSObject *)getObjectKeyWithIndex:(long)arg0;
+ (void)setDefaultTimeoutInterval:(double)arg0;
+ (double)defaultTimeoutInterval;
+ (void)setAllowsAnyHTTPSCertificate:(char)arg0 forHost:(NSString *)arg1;
+ (void)setAllowsSpecificHTTPSCertificate:(NSObject *)arg0 forHost:(NSString *)arg1;
+ (NSURL *)requestWithURL:(NSString *)arg0;
+ (char)supportsSecureCoding;
+ (NSURL *)requestWithURL:(NSString *)arg0 cachePolicy:(unsigned int)arg1 timeoutInterval:(double)arg2;
+ (NSString *)allowsSpecificHTTPSCertificateForHost:(NSString *)arg0;
+ (char)allowsAnyHTTPSCertificateForHost:(NSString *)arg0;

- (NSString *)_gkDictionaryKey;
- (GKFairPlaySAPSession *)_gkSAPSession;
- (void)_gkSetSAPSession:(NSObject *)arg0;
- (NSObject *)DARequestByApplyingStorageSession:(struct __CFURLStorageSession *)arg0;
- (id)_web_HTTPReferrer;
- (NSObject *)_web_HTTPContentType;
- (char)_web_isConditionalRequest;
- (NSDictionary *)copyXPCEncoding;
- (NSURLRequest *)initWithXPCEncoding:(NSString *)arg0;
- (NSInputStream *)HTTPBodyStream;
- (NSData *)HTTPBody;
- (id)valueForHTTPHeaderField:(id)arg0;
- (NSURL *)mainDocumentURL;
- (char)_URLHasScheme:(NSString *)arg0;
- (char)_isSafeRequestForBackgroundDownload;
- (void)_removePropertyForKey:(NSString *)arg0;
- (char)HTTPShouldHandleCookies;
- (double)_timeWindowDelay;
- (double)_timeWindowDuration;
- (NSURL *)_copyReplacingURLWithURL:(NSString *)arg0;
- (unsigned int)networkServiceType;
- (NSString *)boundInterfaceIdentifier;
- (NSObject *)HTTPContentType;
- (id)HTTPExtraCookies;
- (id)HTTPReferrer;
- (id)HTTPUserAgent;
- (char)HTTPShouldUsePipelining;
- (NSArray *)contentDispositionEncodingFallbackArray;
- (unsigned long long)expectedWorkload;
- (NSString *)_propertyForKey:(NSString *)arg0;
- (void)dealloc;
- (NSURLRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSURLRequest *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSURLRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSURLRequest *)initWithURL:(NSString *)arg0;
- (NSURL *)URL;
- (NSURLRequest *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (char)allowsCellularAccess;
- (NSDictionary *)allHTTPHeaderFields;
- (unsigned int)cachePolicy;
- (void)_setProperty:(NSObject *)arg0 forKey:(NSString *)arg1;
- (NSString *)HTTPMethod;
- (double)timeoutInterval;
- (NSURLRequest *)initWithURL:(NSString *)arg0 cachePolicy:(unsigned int)arg1 timeoutInterval:(double)arg2;
- (struct _CFURLRequest *)_CFURLRequest;
- (NSURLRequest *)_initWithCFURLRequest:(struct _CFURLRequest *)arg0;

@end
