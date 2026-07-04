/* Runtime dump - BRKeyboardRomanSearch
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRKeyboardRomanLogIn.h>

@class BRWaitSpinnerControl;
@interface BRKeyboardRomanSearch : BRKeyboardRomanLogIn
{
    BRWaitSpinnerControl * _spinner;
}

- (void)startSpinning;
- (void)stopSpinning;
- (float)_mainKeysHorizontalSpacing;
- (float)_mainKeysVerticalSpacing;
- (float)_verticalGapBetweenMainAndActionKeys;
- (NSArray *)customizedTextEntryFieldControls;
- (void)customizedTextFieldControlsWereRemoved;
- (NSString *)attributesForTextFieldLabel;
- (char)requiresTextFieldLabel;
- (int)_numberOfMainKeyRows;
- (float)_preferredTextEntryControlWidth;
- (struct CGRect)keyboardControlFrame;
- (struct CGRect)textFieldLabelFrame;
- (struct CGRect)textFieldBackgroundFrame;
- (struct CGRect)textFieldFrame;
- (struct CGRect)tabControlFrame;
- (struct CGRect)spinnerFrame;
- (void)dealloc;
- (NSString *)name;

@end
