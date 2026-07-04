/* Runtime dump - AASetupAssistantUpgradeStatusRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AASetupAssistantUpgradeStatusRequest : AARequest
{
    ACAccount * _account;
}

+ (Class)responseClass;

- (NSString *)urlString;
- (void).cxx_destruct;
- (AASetupAssistantUpgradeStatusRequest *)initWithAccount:(ACAccount *)arg0;
- (NSURLRequest *)urlRequest;

@end
