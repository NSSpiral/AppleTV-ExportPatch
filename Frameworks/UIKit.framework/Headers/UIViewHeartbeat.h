/* Runtime dump - UIViewHeartbeat
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewHeartbeat : NSObject
{
    UIView * _view;
    SEL _selector;
    CADisplayLink * _heartbeat;
}

+ (void)startHeartbeatWithView:(UIView *)arg0 selector:(SEL)arg1 inRunLoopMode:(id)arg2;
+ (void)stopHeartbeatWithView:(UIView *)arg0 selector:(SEL)arg1;

- (void)dealloc;
- (void)_updateDisplayLink:(id)arg0;

@end
