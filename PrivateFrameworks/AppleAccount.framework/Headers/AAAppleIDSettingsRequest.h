/* Runtime dump - AAAppleIDSettingsRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAAppleIDSettingsRequest : AARequest
{
    ACAccount * _appleAccount;
    ACAccount * _grandSlamAccount;
    ACAccountStore * _store;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (AAAppleIDSettingsRequest *)initWithAppleAccount:(ACAccount *)arg0 grandSlamAccount:(ACAccount *)arg1 accountStore:(ACAccountStore *)arg2;
- (NSURLRequest *)urlRequest;

@end
