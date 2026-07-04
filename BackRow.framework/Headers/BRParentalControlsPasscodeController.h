/* Runtime dump - BRParentalControlsPasscodeController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@protocol BRTextFieldDelegate;

@class BRController, BRHeaderControl, BRPasscodeEntryControl, BRTextControl;
@interface BRParentalControlsPasscodeController : BRController <BRTextFieldDelegate>
{
    BRController * _guardedController;
    BRPasscodeEntryControl * _editor;
    BRHeaderControl * _header;
    BRTextControl * _prompt;
    NSString * _passcodeToConfirm;
    int _mode;
    NSDictionary * _userInfo;
    char _succeeded;
}

+ (BRParentalControlsPasscodeController *)passcodeEntryControllerGuarding:(id)arg0 hideDigits:(char)arg1;

- (void)wasPopped;
- (void)textDidEndEditing:(id /* <BRTextField> */)arg0;
- (BRParentalControlsPasscodeController *)initWithTitle:(NSString *)arg0 prompt:(BRTextControl *)arg1 mode:(int)arg2 guarding:(id)arg3 hideDigits:(char)arg4;
- (void)setIcon:(UIImage *)arg0 horizontalOffset:(float)arg1 kerningFactor:(float)arg2;
- (void)setIconScaleFactor:(float)arg0;
- (struct CGRect)_promptTextFrame:(NSObject *)arg0;
- (void)_passcodeEnteredForEntry:(id)arg0;
- (void)_passcodeEnteredForSet:(NSSet *)arg0;
- (void)_passcodeEnteredForConfirm:(id)arg0;
- (void)setPasscodeToConfirm:(NSString *)arg0;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (void)setUserInfo:(NSDictionary *)arg0;
- (NSDictionary *)userInfo;
- (NSString *)accessibilityLabel;
- (void)textDidChange:(id /* <BRTextField> */)arg0;

@end
