/* Runtime dump - UIEvent
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIEvent : NSObject
{
    double _timestamp;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int subtype;
@property (readonly, nonatomic) double timestamp;

- (UIScreen *)_screen;
- (double)timestamp;
- (UIEvent *)_init;
- (id)_allPhysicalButtons;
- (int)type;
- (NSObject *)touchesForGestureRecognizer:(NSObject *)arg0;
- (NSArray *)allTouches;
- (struct __GSEvent *)_gsEvent;
- (NSArray *)_windows;
- (char)_isKeyDown;
- (struct __IOHIDEvent *)_hidEvent;
- (int)subtype;
- (_UIPhysicalButton *)_triggeringPhysicalButton;
- (unsigned int)_focusHeading;
- (int)_moveDirection;
- (struct CGPoint)_digitizerLocation;
- (void)_sendEventToResponder:(NSObject *)arg0;
- (float)_wheelVelocity;
- (int)_modifierFlags;
- (NSString *)_modifiedInput;
- (NSString *)_unmodifiedInput;
- (UIWindow *)touchesForWindow:(NSObject *)arg0;
- (NSObject *)touchesForView:(NSObject *)arg0;
- (NSObject *)_initWithEvent:(struct __GSEvent *)arg0 touches:(NSArray *)arg1;
- (NSObject *)_touchesForGestureRecognizer:(NSObject *)arg0;
- (int)_shakeState;
- (UIWindow *)_physicalButtonsForWindow:(NSObject *)arg0;
- (NSObject *)_physicalButtonsForResponder:(NSObject *)arg0;
- (NSObject *)_physicalButtonsForGestureRecognizer:(NSObject *)arg0;
- (void)_setTimestamp:(double)arg0;
- (char)isKeyDown;

@end
