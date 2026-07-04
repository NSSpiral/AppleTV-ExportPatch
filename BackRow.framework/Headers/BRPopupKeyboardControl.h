/* Runtime dump - BRPopupKeyboardControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRKeyboardControl.h>

@class BRControl, BREvent, BRTextEntryControl, BRTextFieldControl;
@interface BRPopupKeyboardControl : BRKeyboardControl
{
    BRTextFieldControl * _targetTextField;
    BRTextEntryControl * _targetTextEntryControl;
}

- (char)brEventAction:(BREvent *)arg0;
- (id)defaultKeyControl;
- (char)setFocusedPoint:(struct CGPoint)arg0;
- (struct CGPoint)focusedPoint;
- (BRControl *)focusedKeyControl;
- (void)setTargetTextField:(BRTextFieldControl *)arg0;
- (void)setTargetTextEntryControl:(BRTextEntryControl *)arg0;
- (void)setFocusedKeyControl:(BRControl *)arg0;
- (BRPopupKeyboardControl *)initWithMainKeysContainer:(BRControl *)arg0 actionKeysContainer:(BRControl *)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;

@end
