/* Runtime dump - AASetupAssistantCreateRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AASetupAssistantCreateRequest : AARequest
{
    NSDictionary * appleIDParameters;
    AASigningSession * signingSession;
    ACAccount * _account;
}

+ (Class)responseClass;

- (NSString *)urlString;
- (void).cxx_destruct;
- (AASetupAssistantCreateRequest *)initWithAccount:(ACAccount *)arg0 withAppleIDParameters:(NSDictionary *)arg1 signingSession:(AASigningSession *)arg2;
- (NSURLRequest *)urlRequest;
- (NSDictionary *)bodyDictionary;

@end
