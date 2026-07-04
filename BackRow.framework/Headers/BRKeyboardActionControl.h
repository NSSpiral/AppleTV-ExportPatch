/* Runtime dump - BRKeyboardActionControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface BRKeyboardActionControl : BRControl
{
    struct ? _characterControlSize;
}

- (void)layoutSubcontrols;
- (struct CGRect)focusCursorFrame;
- (NSArray *)accessibilityTraitsList;
- (id)wrappedControl;
- (void)setCharacterControlSize:(struct ?)arg0;
- (BRKeyboardActionControl *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;

@end
