/* Runtime dump - AARegisterRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AARegisterRequest : AAAuthenticateRequest
{
    NSMutableDictionary * _additionalCookieHeaders;
}

+ (Class)responseClass;

- (NSString *)urlString;
- (void).cxx_destruct;
- (AARegisterRequest *)initWithURLString:(NSString *)arg0 username:(NSString *)arg1 password:(NSString *)arg2;
- (void)addCookieHeaders:(NSDictionary *)arg0;
- (NSURLRequest *)urlRequest;

@end
