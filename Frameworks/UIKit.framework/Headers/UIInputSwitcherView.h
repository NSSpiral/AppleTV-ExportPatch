/* Runtime dump - UIInputSwitcherView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputSwitcherView : UIKeyboardMenuView
{
    int m_currentInputModeIndex;
    char m_keyboardSettingsFromSwitcher;
    NSMutableArray * m_inputModes;
    UISwitch * m_predictiveSwitch;
}

@property (retain, nonatomic) NSArray * inputModes;
@property (nonatomic) char keyboardSettingsFromSwitcher;

+ (UIInputSwitcherView *)sharedInstance;
+ (UIInputSwitcherView *)activeInstance;

- (void)show;
- (UIInputSwitcherView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setInputMode:(UITextInputMode *)arg0;
- (int)numberOfItems;
- (id)selectedInputMode;
- (id)previousInputMode;
- (NSArray *)inputModes;
- (id)nextInputMode;
- (void)selectInputMode:(id)arg0;
- (struct CGSize)preferredSize;
- (int)defaultSelectedIndex;
- (id)predictiveSwitch;
- (void)toggleKeyboardPredictionPreference;
- (void)didSelectItemAtIndex:(int)arg0;
- (NSObject *)localizedTitleForItemAtIndex:(int)arg0;
- (NSObject *)fontForItemAtIndex:(int)arg0;
- (NSObject *)subtitleForItemAtIndex:(int)arg0;
- (NSObject *)subtitleFontForItemAtIndex:(int)arg0;
- (NSObject *)titleForItemAtIndex:(int)arg0;
- (void)setKeyboardSettingsFromSwitcher:(char)arg0;
- (void)setInputModes:(NSArray *)arg0;
- (char)keyboardSettingsFromSwitcher;
- (void)switchAction;
- (void)selectRowForInputMode:(id)arg0;
- (void)selectNextInputMode;
- (void)selectPreviousInputMode;

@end
