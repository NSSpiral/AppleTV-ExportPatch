/* Runtime dump - PSKeychainSyncViewController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSKeychainSyncViewController : PSListController <KeychainSyncViewController>
{
    KeychainSyncHeaderView * _headerView;
    PSSpecifier * _groupSpecifier;
    <KeychainSyncViewControllerDelegate> * _delegate;
}

@property (nonatomic) <KeychainSyncViewControllerDelegate> * delegate;

- (void)dealloc;
- (void)setDelegate:(<KeychainSyncViewControllerDelegate> *)arg0;
- (void)setTitle:(NSString *)arg0;
- (<KeychainSyncViewControllerDelegate> *)delegate;
- (float)heightForHeaderInTableView:(NSObject *)arg0;
- (NSObject *)viewForHeaderInTableView:(NSObject *)arg0;
- (KeychainSyncHeaderView *)headerView;
- (NSArray *)specifiers;
- (PSSpecifier *)groupSpecifier;

@end
