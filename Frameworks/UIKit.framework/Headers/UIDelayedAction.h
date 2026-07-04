/* Runtime dump - UIDelayedAction
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDelayedAction : NSObject
{
    id m_target;
    SEL m_action;
    id m_userInfo;
    double m_delay;
    NSTimer * m_timer;
    char m_canceled;
    NSString * m_runLoopMode;
}

- (void)cancel;
- (void)dealloc;
- (void)setTarget:(NSObject *)arg0;
- (double)delay;
- (NSObject *)target;
- (NSDictionary *)userInfo;
- (void)touchWithDelay:(double)arg0;
- (UIDelayedAction *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1 userInfo:(NSDictionary *)arg2 delay:(double)arg3 mode:(unsigned short)arg4;
- (void)timerFired:(id)arg0;
- (void)unschedule;
- (UIDelayedAction *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1 userInfo:(NSDictionary *)arg2 delay:(double)arg3;
- (void)touch;
- (char)scheduled;

@end
