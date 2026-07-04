/* Runtime dump - BRKeyboardRomanSquare
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRKeyboard.h>

@class BRControl, BRWaitSpinnerControl;
@interface BRKeyboardRomanSquare : BRKeyboard
{
    BRWaitSpinnerControl * _spinner;
}

- (BRWaitSpinnerControl *)_spinner;
- (void)startSpinning;
- (void)stopSpinning;
- (char)canShowLanguageSwitchButton;
- (float)_mainKeysVerticalSpacing;
- (id)actionDictionaryForKeyControl:(BRControl *)arg0;
- (NSArray *)customizedTextEntryFieldControls;
- (void)customizedTextFieldControlsWereRemoved;
- (NSString *)attributesForTextFieldLabel;
- (NSString *)_keyboardDataFileName;
- (int)_numberOfMainKeyRows;
- (float)_preferredGlyphWidth:(id)arg0;
- (float)_preferredGlyphHeight:(id)arg0;
- (struct CGRect)textFieldFrame;
- (struct CGRect)tabControlFrame;
- (struct CGRect)spinnerFrame;
- (long)_startingIndexOfActionKeysInKeyRowData;
- (void)dealloc;

@end
