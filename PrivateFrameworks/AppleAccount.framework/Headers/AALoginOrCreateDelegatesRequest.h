/* Runtime dump - AALoginOrCreateDelegatesRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AALoginOrCreateDelegatesRequest : AARequest
{
    ACAccount * _account;
    NSDictionary * _parameters;
    AASigningSession * _signingSession;
}

+ (Class)responseClass;

- (NSString *)urlString;
- (void).cxx_destruct;
- (AALoginOrCreateDelegatesRequest *)initWithAccount:(ACAccount *)arg0 parameters:(NSDictionary *)arg1 signingSession:(AASigningSession *)arg2;
- (NSURLRequest *)urlRequest;

@end
