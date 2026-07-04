/* Runtime dump - PLNSTimerOperatorComposition
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLNSTimerOperatorComposition : NSObject
{
    char _repeats;
    id _operatorBlock;
    NSDate * _fireDate;
    PLOperator * _operator;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSTimer * _timer;
    id _userInfo;
    double _interval;
    double _tolerance;
}

@property (copy, nonatomic) id operatorBlock;
@property (nonatomic) char timerActive;
@property (retain, nonatomic) NSDate * fireDate;
@property (weak) PLOperator * operator;
@property (retain) NSObject<OS_dispatch_queue> * workQueue;
@property (retain) NSTimer * timer;
@property double interval;
@property double tolerance;
@property char repeats;
@property (retain) id userInfo;

- (double)tolerance;
- (void)setTolerance:(double)arg0;
- (void)dealloc;
- (void)setUserInfo:(NSDictionary *)arg0;
- (void)setFireDate:(NSDate *)arg0;
- (NSDictionary *)userInfo;
- (void).cxx_destruct;
- (NSDate *)fireDate;
- (void)setInterval:(double)arg0;
- (double)interval;
- (void)setTimer:(NSTimer *)arg0;
- (NSTimer *)timer;
- (char)repeats;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (PLOperator *)operator;
- (id /* block */)operatorBlock;
- (void)setOperatorBlock:(id /* block */)arg0;
- (void)handleTimerFire;
- (void)fireTimerEarly;
- (void)setRepeats:(char)arg0;
- (PLNSTimerOperatorComposition *)initWithOperator:(PLOperator *)arg0 withFireDate:(NSDate *)arg1 withInterval:(double)arg2 withTolerance:(double)arg3 repeats:(char)arg4 withUserInfo:(NSDictionary *)arg5 withBlock:(id /* block */)arg6;
- (void)setTimerActive:(char)arg0;
- (PLNSTimerOperatorComposition *)initWithWorkQueue:(NSObject<OS_dispatch_queue> *)arg0 withFireDate:(NSDate *)arg1 withInterval:(double)arg2 withTolerance:(double)arg3 repeats:(char)arg4 withUserInfo:(NSDictionary *)arg5 withBlock:(id /* block */)arg6;
- (void)setOperator:(PLOperator *)arg0;
- (char)timerActive;

@end
