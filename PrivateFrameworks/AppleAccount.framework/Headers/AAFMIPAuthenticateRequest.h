/* Runtime dump - AAFMIPAuthenticateRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAFMIPAuthenticateRequest : AARequest
{
    ACAccount * _account;
}

+ (Class)responseClass;

- (NSString *)urlString;
- (void).cxx_destruct;
- (AAFMIPAuthenticateRequest *)initWithAccount:(ACAccount *)arg0;
- (NSURLRequest *)urlRequest;

@end
