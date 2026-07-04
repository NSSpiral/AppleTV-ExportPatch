/* Runtime dump - AASetupAssistantSetupDelegatesRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AASetupAssistantSetupDelegatesRequest : AARequest
{
    NSDictionary * setupParameters;
    AASigningSession * signingSession;
    ACAccount * _account;
}

+ (Class)responseClass;

- (NSString *)urlString;
- (void).cxx_destruct;
- (AASetupAssistantSetupDelegatesRequest *)initWithAccount:(ACAccount *)arg0 withSetupParameters:(NSDictionary *)arg1 signingSession:(AASigningSession *)arg2;
- (NSURLRequest *)urlRequest;

@end
