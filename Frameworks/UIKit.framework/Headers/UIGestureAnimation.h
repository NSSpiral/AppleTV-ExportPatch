/* Runtime dump - UIGestureAnimation
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIGestureAnimation : UIAnimation
{
    SEL _progressSelector;
    int _gestureType;
}

- (void)setProgress:(float)arg0;
- (int)gestureType;
- (UIGestureAnimation *)initWithTarget:(NSObject *)arg0 progressSelector:(SEL)arg1 gestureType:(int)arg2;

@end
