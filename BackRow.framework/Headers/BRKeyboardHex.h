/* Runtime dump - BRKeyboardHex
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRKeyboard.h>
@interface BRKeyboardHex : BRKeyboard

- (float)_mainKeysHorizontalSpacing;
- (float)_mainKeysVerticalSpacing;
- (float)_actionKeysContainerWidth;
- (float)_actionKeysContainerSpacing;
- (float)_verticalGapBetweenMainAndActionKeys;
- (NSObject *)_optionCharactersForKeyboardInput;
- (NSString *)_popupKeyboardDataFileName;
- (int)_numberOfMainKeyColumns;
- (NSString *)switchToThisKeyboardIdentifier;
- (int)mapVisualIndex:(int)arg0 toRow:(id)arg1;
- (NSString *)_keyboardDataFileName;
- (int)_numberOfMainKeyRows;
- (int)_numberOfMainKeysInLastRow;
- (int)_numberOfActionKeyRows;
- (int)_numberOfActionKeyColumns;
- (float)_preferredTextEntryControlWidth;
- (struct CGRect)keyboardControlFrame;
- (BRKeyboardHex *)init;
- (NSString *)name;

@end
