/* Runtime dump - CMGestureManagerInternal
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMGestureManagerInternal : NSObject
{
    int fPriority;
    struct CLConnectionClient * fLocationdConnection;
    id fGestureHandler;
    NSObject<OS_dispatch_source> * fWatchDogTimer;
    NSObject<OS_dispatch_queue> * fPrivateQueue;
}

- (void)stopWatchdogCheckinsPrivate;
- (void)startWatchdogCheckinsPrivate;
- (void)startGestureUpdatesWithHandlerPrivate:(id)arg0;
- (void)stopGestureUpdatesPrivate;
- (void)dealloc;
- (CMGestureManagerInternal *)initWithPriority:(int)arg0;

@end
