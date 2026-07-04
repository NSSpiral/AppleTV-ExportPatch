/* Runtime dump - AASetupAssistantTermsFetchRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AASetupAssistantTermsFetchRequest : AARequest
{
    ACAccount * _account;
}

+ (Class)responseClass;

- (NSString *)urlString;
- (void).cxx_destruct;
- (AASetupAssistantTermsFetchRequest *)initWithAccount:(ACAccount *)arg0;
- (NSURLRequest *)urlRequest;

@end
