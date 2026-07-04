/* Runtime dump - AARequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AARequest : NSObject <NSURLSessionDataDelegate>
{
    NSString * _initialURLString;
    char _flushCache;
    struct OpaqueCFHTTPCookieStorage * _cookieStorage;
    NSString * _oneTimePassword;
    NSString * _machineId;
    id _handler;
}

@property (readonly) NSURLRequest * urlRequest;
@property (nonatomic) char flushCache;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (Class)responseClass;
+ (NSString *)protocolVersion;

- (NSString *)urlString;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setFlushCache:(char)arg0;
- (NSArray *)redactedBodyStringWithPropertyList:(NSArray *)arg0;
- (void)_handleDataTaskCompletionWithData:(NSData *)arg0 response:(NSURLResponse *)arg1 error:(NSError *)arg2;
- (void)setDeviceProvisioningOneTimePassword:(NSString *)arg0;
- (void)setDeviceProvisioningMachineId:(NSObject *)arg0;
- (NSObject *)urlCredential;
- (NSDictionary *)_redactedHeadersFromHTTPHeaders:(NSDictionary *)arg0;
- (void)performRequestWithHandler:(id /* block */)arg0;
- (void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg0;
- (char)flushCache;
- (AARequest *)initWithURLString:(NSString *)arg0;
- (NSURLRequest *)urlRequest;
- (NSDictionary *)bodyDictionary;

@end
