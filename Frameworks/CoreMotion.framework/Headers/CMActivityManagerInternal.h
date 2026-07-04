/* Runtime dump - CMActivityManagerInternal
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMActivityManagerInternal : NSObject
{
    struct CLConnectionClient * fLocationdConnection;
    id fActivityHandler;
    NSObject<OS_dispatch_source> * fWatchdogTimer;
    NSObject<OS_dispatch_queue> * fPrivateQueue;
    char fSubscribedToMotionState;
    NSObject<OS_dispatch_semaphore> * fSidebandOverrideSemaphore;
    NSObject<OS_dispatch_queue> * fSidebandOverrideQueue;
    char fSidebandOverrideWaiting;
    int fSidebandOverrideResult;
}

- (void)stopWatchdogCheckinsPrivate;
- (void)startWatchdogCheckinsPrivate;
- (void)startActivityUpdatesWithHandlerPrivate:(id)arg0;
- (void)stopActivityUpdatesPrivate;
- (void)overrideOscarSideband:(char)arg0 withState:(int)arg1;
- (void)dealloc;
- (CMActivityManagerInternal *)init;
- (void)connect;
- (void)disconnect;

@end
