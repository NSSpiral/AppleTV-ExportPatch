/* Runtime dump - SBKStoreAuthenticationController
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKStoreAuthenticationController : NSObject
{
    char _shouldAuthenticate;
    SSAccount * _storeAccount;
}

@property (readonly) SSAccount * storeAccount;
@property char shouldAuthenticate;

+ (NSString *)lastSyncedAccountIdentifier;
+ (NSString *)lastSyncedAccountName;
+ (void)clearLastSyncnedAccount;
+ (NSString *)lastFailedSyncAccountIdentifier;
+ (NSString *)lastFailedSyncAccountName;

- (void).cxx_destruct;
- (SBKStoreAuthenticationController *)initWithStoreAccount:(SSAccount *)arg0;
- (char)shouldAuthenticate;
- (void)setShouldAuthenticate:(char)arg0;
- (char)isAuthenticationValidForTransaction:(NSObject *)arg0 error:(id *)arg1;
- (void)saveAccountToLastSyncedDefaults;
- (void)saveAccountToLastFailedSyncDefaults;
- (SSAccount *)storeAccount;
- (char)shouldForceAuthenticationForTransaction:(NSObject *)arg0;
- (NSObject *)authenticationErrorsForTransaction:(NSObject *)arg0;

@end
