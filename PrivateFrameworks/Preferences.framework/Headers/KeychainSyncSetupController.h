/* Runtime dump - KeychainSyncSetupController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface KeychainSyncSetupController : PSSetupController
{
    PSKeychainSyncManager * _manager;
}

- (KeychainSyncSetupController *)initWithManager:(PSKeychainSyncManager *)arg0;
- (void)showController:(BRController *)arg0;
- (void)cancelPressed;

@end
