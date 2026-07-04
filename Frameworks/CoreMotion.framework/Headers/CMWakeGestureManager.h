/* Runtime dump - CMWakeGestureManager
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMWakeGestureManager : NSObject
{
    struct Dispatcher * fWakeDispatcher;
    int fCurrentState;
    double fLastNotificationTime;
    BOOL fEnableAudioAlert;
    NSObject<OS_dispatch_queue> * fPrivateQueue;
    struct unique_ptr<CMWakeGestureVisitor, std::__1::default_delete<CMWakeGestureVisitor> > fWakeGestureVisitor;
    int fScreenDimmingNotificationToken;
    <CMWakeGestureDelegate> * _delegate;
    int _wrist;
    int _crown;
}

@property (nonatomic) <CMWakeGestureDelegate> * delegate;
@property (nonatomic) int wrist;
@property (nonatomic) int crown;

+ (char)isWakeGestureAvailable;
+ (void)initialize;
+ (CMWakeGestureManager *)sharedManager;

- (void)stopWakeGestureUpdates;
- (void)updateWristAndCrown;
- (int)wrist;
- (int)crown;
- (void)onWakeUpdated:(struct CLGestureReport *)arg0;
- (void)playAlert;
- (void)setWrist:(int)arg0;
- (void)setCrown:(int)arg0;
- (void)startWakeGestureUpdates;
- (char)simulateGestureWithDelay:(double)arg0 Duration:(double)arg1;
- (void)dealloc;
- (void)setDelegate:(<CMWakeGestureDelegate> *)arg0;
- (CMWakeGestureManager *)init;
- (<CMWakeGestureDelegate> *)delegate;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
