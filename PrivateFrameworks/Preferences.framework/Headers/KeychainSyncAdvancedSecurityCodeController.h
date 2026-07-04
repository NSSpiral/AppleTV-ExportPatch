/* Runtime dump - KeychainSyncAdvancedSecurityCodeController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface KeychainSyncAdvancedSecurityCodeController : PSKeychainSyncViewController <UIAlertViewDelegate>
{
    float _cellTextWidth;
    UIFont * _cellFont;
    UIAlertView * _disableRecoveryConfirmationAlert;
    char _showsDisableRecoveryOption;
}

@property (nonatomic) char showsDisableRecoveryOption;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)alertView:(UIAlertView *)arg0 didDismissWithButtonIndex:(int)arg1;
- (char)tableView:(UITableView *)arg0 shouldDrawTopSeparatorForSection:(int)arg1;
- (void)viewDidLoad;
- (NSArray *)specifiers;
- (void)nextPressed;
- (void)setShowsDisableRecoveryOption:(char)arg0;
- (void)_finishedWithSpecifier:(id)arg0;
- (char)showsDisableRecoveryOption;

@end
