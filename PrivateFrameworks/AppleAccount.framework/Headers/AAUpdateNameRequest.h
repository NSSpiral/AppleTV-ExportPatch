/* Runtime dump - AAUpdateNameRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAUpdateNameRequest : AAAppleIDSettingsRequest
{
    NSString * _newFirstName;
    NSString * _newLastName;
}

+ (Class)responseClass;

- (NSString *)urlString;
- (void).cxx_destruct;
- (AAUpdateNameRequest *)initWithAppleAccount:(NSObject *)arg0 grandSlamAccount:(ACAccount *)arg1 accountStore:(ACAccountStore *)arg2 firstName:(NSString *)arg3 lastName:(NSString *)arg4;
- (NSURLRequest *)urlRequest;

@end
