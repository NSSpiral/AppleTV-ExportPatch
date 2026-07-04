/* Runtime dump - BRPopupKeyboardWithDeleteButton
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRKeyboard.h>

@class BRKeyboardControl, BRPopupKeyboardControl;
@interface BRPopupKeyboardWithDeleteButton : BRKeyboard
{
    BRPopupKeyboardControl * _popupKeyboardControl;
}

- (int)_numberOfMainKeyColumns;
- (BRKeyboardControl *)keyboardControl;
- (char)popupKeyboardShouldRemainDisplayedAfterCharacterSelection;
- (char)isLastCharacterSelected;
- (NSString *)_keyboardDataFileName;
- (NSData *)_filterRawKeyboardData:(NSData *)arg0;
- (int)_numberOfMainKeyRows;
- (int)_numberOfActionKeyRows;
- (int)_numberOfActionKeyColumns;
- (void)dealloc;

@end
