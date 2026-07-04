/* Runtime dump - BRPopupKeyboardVariableWidthKeyRowPlane
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl;
@interface BRPopupKeyboardVariableWidthKeyRowPlane : BRControl
{
    BRControl * _baseKeyControl;
}

- (void)layoutSubcontrols;
- (BRPopupKeyboardVariableWidthKeyRowPlane *)initWithBaseKeyControl:(BRControl *)arg0;
- (struct CGSize)performActionWithSubcontrols:(int)arg0;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;

@end
