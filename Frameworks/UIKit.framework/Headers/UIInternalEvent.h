/* Runtime dump - UIInternalEvent
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInternalEvent : UIEvent
{
    struct __GSEvent * _gsEvent;
    struct __IOHIDEvent * _hidEvent;
}

- (void)dealloc;
- (UIScreen *)_screen;
- (struct __GSEvent *)_gsEvent;
- (struct __IOHIDEvent *)_hidEvent;
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg0;
- (void)_setGSEvent:(struct __GSEvent *)arg0;

@end
