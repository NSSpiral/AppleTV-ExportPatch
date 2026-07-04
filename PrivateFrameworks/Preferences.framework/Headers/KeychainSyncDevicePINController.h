/* Runtime dump - KeychainSyncDevicePINController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface KeychainSyncDevicePINController : KeychainSyncTextEntryController
{
    DevicePINController * _devicePINController;
    char _showingBlockedMessage;
    NSString * _enterPasscodeTitle;
    NSString * _enterPasscodeReason;
    UIKeyboard * _disabledKeyboard;
}

@property (retain, nonatomic) NSString * enterPasscodeTitle;
@property (retain, nonatomic) NSString * enterPasscodeReason;
@property (retain, nonatomic) UIKeyboard * disabledKeyboard;

- (void)dealloc;
- (KeychainSyncDevicePINController *)init;
- (int)tableView:(UITableView *)arg0 titleAlignmentForFooterInSection:(int)arg1;
- (void)viewWillAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (NSArray *)specifiers;
- (void)didFinishEnteringText:(NSString *)arg0;
- (void)setEnterPasscodeTitle:(NSString *)arg0;
- (void)setEnterPasscodeReason:(NSString *)arg0;
- (void)updateBlockedState:(NSObject *)arg0;
- (void)setDisabledKeyboard:(UIKeyboard *)arg0;
- (NSString *)enterPasscodeTitle;
- (NSString *)enterPasscodeReason;
- (UIKeyboard *)disabledKeyboard;

@end
