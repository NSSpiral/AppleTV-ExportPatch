/* Runtime dump - SSVAppleAccountStore
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVAppleAccountStore : NSObject
{
    ACAccountStore * _accountStore;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    ACAccount * _primaryAppleAccount;
}

@property (readonly) ACAccount * primaryAppleAccount;

+ (SSVAppleAccountStore *)sharedAccountStore;

- (SSVAppleAccountStore *)init;
- (void).cxx_destruct;
- (ACAccount *)primaryAppleAccount;
- (void)_accountStoreDidChangeNotification:(NSNotification *)arg0;

@end
