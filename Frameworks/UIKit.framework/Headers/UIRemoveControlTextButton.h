/* Runtime dump - UIRemoveControlTextButton
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRemoveControlTextButton : UIControl
{
    NSString * _label;
}

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)sizeToFit;
- (char)_alwaysHandleScrollerMouseEvent;
- (NSDictionary *)_scriptingInfo;
- (void)_controlTouchBegan:(UIControl *)arg0 withEvent:(Event *)arg1;
- (void)_controlTouchMoved:(UIControl *)arg0 withEvent:(Event *)arg1;
- (void)_controlTouchEnded:(UIControl *)arg0 withEvent:(Event *)arg1;
- (float)buttonWidth;
- (UIRemoveControlTextButton *)initWithRemoveControl:(NSIndexSet *)arg0 withTarget:(NSObject *)arg1 withLabel:(NSString *)arg2;

@end
