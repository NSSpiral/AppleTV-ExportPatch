/* Runtime dump - BRKeyboardControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRSpacerControl, BRTextEntryControl, BRTextFieldControl;
@interface BRKeyboardControl : BRControl
{
    BRControl * _mainKeysContainer;
    BRSpacerControl * _verticalSpacer;
    BRControl * _actionKeysContainer;
}

+ (BRKeyboardControl *)keyboardControlWithMainKeysContainer:(BRControl *)arg0 actionKeysContainer:(BRControl *)arg1;

- (void)layoutSubcontrols;
- (void)setFocusToGlyphNamed:(id)arg0;
- (char)focusIsAtRightEdge;
- (void)setVerticalSpacing:(float)arg0;
- (id)defaultKeyControl;
- (void)setActionKeysContainer:(BRControl *)arg0;
- (BRControl *)actionKeysContainer;
- (BRControl *)mainKeysContainer;
- (char)setFocusedPoint:(struct CGPoint)arg0;
- (char)keyboardFocusIsAtEdge:(int)arg0;
- (struct CGPoint)focusedPoint;
- (BRControl *)focusedKeyControl;
- (void)setTargetTextField:(BRTextFieldControl *)arg0;
- (void)setTargetTextEntryControl:(BRTextEntryControl *)arg0;
- (void)setFocusedKeyControl:(BRControl *)arg0;
- (BRKeyboardControl *)initWithMainKeysContainer:(BRControl *)arg0 actionKeysContainer:(BRControl *)arg1;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;

@end
