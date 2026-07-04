/* Runtime dump - KeychainSyncSecurityCodeCell
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface KeychainSyncSecurityCodeCell : PSEditableTableCell
{
    UILabel * _bulletTextLabel;
    int _securityCodeType;
    int _mode;
    NSString * _firstPasscodeEntry;
}

@property (nonatomic) int securityCodeType;
@property (nonatomic) int mode;
@property (retain, nonatomic) NSString * firstPasscodeEntry;

- (void)dealloc;
- (void)layoutSubviews;
- (char)textFieldShouldBeginEditing:(UITextField *)arg0;
- (char)textField:(UITextField *)arg0 shouldChangeCharactersInRange:(struct _NSRange)arg1 replacementString:(NSString *)arg2;
- (void)setMode:(int)arg0;
- (int)mode;
- (void)setBulletText:(NSString *)arg0;
- (int)securityCodeType;
- (void)setSecurityCodeType:(int)arg0;
- (NSString *)firstPasscodeEntry;
- (void)setFirstPasscodeEntry:(NSString *)arg0;

@end
