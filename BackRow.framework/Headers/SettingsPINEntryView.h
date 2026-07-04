/* Runtime dump - SettingsPINEntryView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BREvent, BRHeaderControl, BRPasscodeEntryControl, BRTextControl;
@interface SettingsPINEntryView : BRControl
{
    BRHeaderControl * _header;
    BRPasscodeEntryControl * _editor;
    char _userEditable;
    BRTextControl * _prompt;
    NSString * _initialPINCode;
    <SettingsPINEntryViewDelegate> * _delegate;
}

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)textDidEndEditing:(id /* <BRTextField> */)arg0;
- (SettingsPINEntryView *)initWithNumDigits:(unsigned int)arg0 userEditable:(char)arg1 hideDigits:(char)arg2 prompt:(BRTextControl *)arg3;
- (void)setInitialPINCode:(NSString *)arg0;
- (void)pinFailedTryAgainWithTitle:(NSString *)arg0 prompt:(BRTextControl *)arg1;
- (void)dealloc;
- (void)setDelegate:(<SettingsPINEntryViewDelegate> *)arg0;
- (SettingsPINEntryView *)init;
- (void)setTitle:(NSString *)arg0;
- (<SettingsPINEntryViewDelegate> *)delegate;
- (NSString *)title;
- (NSString *)accessibilityLabel;
- (BRTextControl *)prompt;
- (void)setPrompt:(BRTextControl *)arg0;
- (void)textDidChange:(id /* <BRTextField> */)arg0;
- (char)isAccessibilityElement;
- (void).cxx_destruct;

@end
