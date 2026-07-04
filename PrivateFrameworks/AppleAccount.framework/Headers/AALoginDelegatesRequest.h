/* Runtime dump - AALoginDelegatesRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AALoginDelegatesRequest : AARequest
{
    NSDictionary * _loginParameters;
    ACAccount * _account;
}

+ (Class)responseClass;

- (NSString *)urlString;
- (void).cxx_destruct;
- (AALoginDelegatesRequest *)initWithAccount:(ACAccount *)arg0 parameters:(NSDictionary *)arg1;
- (NSURLRequest *)urlRequest;

@end
