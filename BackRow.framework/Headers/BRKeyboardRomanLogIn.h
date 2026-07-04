/* Runtime dump - BRKeyboardRomanLogIn
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRKeyboard.h>

@class BRControl;
@interface BRKeyboardRomanLogIn : BRKeyboard
{
    BRControl * _sixthRow;
}

- (float)_mainKeysHorizontalSpacing;
- (float)_mainKeysVerticalSpacing;
- (float)_actionKeysContainerWidth;
- (float)_actionKeysContainerSpacing;
- (float)_verticalGapBetweenMainAndActionKeys;
- (NSString *)_popupKeyboardDataFileName;
- (int)_numberOfMainKeyColumns;
- (NSString *)switchToThisKeyboardIdentifier;
- (int)numberOfKeyboardsForCurrentKeyboardType;
- (NSString *)_keyboardDataFileName;
- (int)_numberOfMainKeyRows;
- (float)_preferredTextEntryControlWidth;
- (float)layoutGapBelowKeyboardControl;
- (float)layoutGapBelowTabControl;
- (struct CGRect)keyboardControlFrame;
- (struct CGRect)tabControlFrame;
- (void)dealloc;
- (BRKeyboardRomanLogIn *)init;
- (NSString *)name;
- (NSString *)accessibilityLabel;

@end
