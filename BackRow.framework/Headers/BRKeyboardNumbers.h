/* Runtime dump - BRKeyboardNumbers
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRKeyboard.h>

@class BRControl, BRKeyboardControl;
@interface BRKeyboardNumbers : BRKeyboard
{
    BRControl * _thirdRow;
}

- (float)_mainKeysHorizontalSpacing;
- (float)_mainKeysVerticalSpacing;
- (float)_actionKeysContainerSpacing;
- (float)_verticalGapBetweenMainAndActionKeys;
- (NSObject *)_optionCharactersForKeyboardInput;
- (NSString *)_popupKeyboardDataFileName;
- (int)_numberOfMainKeyColumns;
- (NSString *)switchToThisKeyboardIdentifier;
- (BRKeyboardControl *)keyboardControl;
- (int)mapVisualIndex:(int)arg0 toRow:(id)arg1;
- (NSString *)_keyboardDataFileName;
- (int)_numberOfMainKeyRows;
- (float)_preferredTextEntryControlWidth;
- (struct CGRect)keyboardControlFrame;
- (void)dealloc;
- (BRKeyboardNumbers *)init;
- (NSString *)name;

@end
