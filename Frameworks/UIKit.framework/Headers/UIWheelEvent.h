/* Runtime dump - UIWheelEvent
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWheelEvent : UIInternalEvent
{
    int _recentScrollDistance;
    NSMutableArray * _recentScrollEvents;
    int lastSubtype;
}

- (void)dealloc;
- (int)type;
- (int)subtype;
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg0;
- (void)_sendEventToResponder:(NSObject *)arg0;
- (float)_wheelVelocity;
- (char)_canHaveVelocity;

@end
