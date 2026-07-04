/* Runtime dump - PINView
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PINView : UIView <PINEntryView>
{
    UILabel * _titleLabel;
    UILabel * _errorTitleLabel;
    FailureBarView * _failureView;
    UILabel * _pinPolicyLabel;
    char _error;
    <PSPINEntryViewDelegate> * _delegate;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<PSPINEntryViewDelegate> *)arg0;
- (char)becomeFirstResponder;
- (void)appendString:(NSString *)arg0;
- (NSString *)stringValue;
- (void)setStringValue:(NSString *)arg0;
- (void)deleteLastCharacter;
- (void)setBlocked:(char)arg0;
- (void)showFailedAttempts:(long)arg0;
- (void)hideFailedAttempts;
- (void)hideError;
- (void)setPINPolicyString:(NSString *)arg0 visible:(char)arg1;
- (void)setTextFieldKeyboardType:(int)arg0;
- (void)setTextFieldKeyboardAppearance:(int)arg0;
- (void)showError:(NSError *)arg0 animate:(char)arg1;
- (void)setTitle:(NSString *)arg0 font:(UIFont *)arg1;
- (void)hidePasscodeField:(char)arg0;
- (void)notifyDelegatePINChanged;
- (void)notifyDelegatePINEntered;

@end
