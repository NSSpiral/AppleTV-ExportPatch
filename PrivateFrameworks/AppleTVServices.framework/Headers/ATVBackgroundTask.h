/* Runtime dump - ATVBackgroundTask
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVBackgroundTask : NSObject
{
    NSTimer * _initialDelayTimer;
    NSTimer * _reenableTimer;
    NSTimer * _intervalTimer;
    char _enabled;
    char _firedWhileDisabled;
    char _async;
    int _type;
    id _performBlock;
    id _stopBlock;
    double _interval;
    double _delay;
}

@property (nonatomic) int type;
@property (nonatomic) double interval;
@property (nonatomic) double delay;
@property (nonatomic) char async;
@property (readonly, nonatomic) char enabled;
@property (copy, nonatomic) id performBlock;
@property (copy, nonatomic) id stopBlock;

+ (void)performFinishedForTask:(NSObject *)arg0;

- (void)setDelay:(double)arg0;
- (void)setType:(int)arg0;
- (int)type;
- (double)delay;
- (void)stop;
- (char)isEnabled;
- (char)perform;
- (void)enable;
- (void)_setEnabled:(char)arg0;
- (void).cxx_destruct;
- (void)setInterval:(double)arg0;
- (double)interval;
- (void)_stop;
- (ATVBackgroundTask *)initWithType:(int)arg0 interval:(double)arg1 delay:(double)arg2 async:(char)arg3;
- (void)setPerformBlock:(id /* block */)arg0;
- (void)setupTimers;
- (void)cancelTimers;
- (void)updateTimersForTimeChange;
- (void)_delayedPerform:(id)arg0;
- (void)_intervalPerform:(id)arg0;
- (id /* block */)performBlock;
- (id /* block */)stopBlock;
- (char)_perform;
- (void)setStopBlock:(id /* block */)arg0;
- (void)disable;
- (char)async;
- (void)setAsync:(char)arg0;

@end
