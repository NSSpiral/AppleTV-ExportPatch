/* Runtime dump - AAGrandSlamSigner
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAGrandSlamSigner : NSObject
{
    ACAccount * _appleAccount;
    ACAccount * _grandSlamAccount;
    ACAccountStore * _store;
    NSString * _appTokenID;
}

@property (readonly, nonatomic) ACAccount * appleAccount;
@property (readonly, nonatomic) ACAccount * grandSlamAccount;
@property (readonly, nonatomic) ACAccountStore * accountStore;

- (void).cxx_destruct;
- (ACAccount *)appleAccount;
- (char)signURLRequest:(NSURLRequest *)arg0 isUserInitiated:(char)arg1;
- (char)signURLRequest:(NSURLRequest *)arg0;
- (ACAccount *)grandSlamAccount;
- (AAGrandSlamSigner *)initWithAppleAccount:(ACAccount *)arg0 grandSlamAccount:(ACAccount *)arg1 accountStore:(ACAccountStore *)arg2 appTokenID:(NSString *)arg3;
- (ACAccountStore *)accountStore;

@end
