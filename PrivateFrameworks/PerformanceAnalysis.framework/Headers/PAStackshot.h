/* Runtime dump - PAStackshot
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAStackshot : NSObject
{
    NSData * _traceBufData;
    double _machTimestamp;
    double _wallTimestamp;
    PAMicrostackshotData * _microstackshotData;
}

@property (readonly) double machTimestamp;
@property (readonly) double wallTimestamp;
@property (readonly) PAMicrostackshotData * microstackshotData;
@property (readonly) char isMicrostackshot;

- (void)dealloc;
- (PAStackshot *)initWithPid:(int)arg0;
- (PAMicrostackshotData *)microstackshotData;
- (char)isMicrostackshot;
- (PAStackshot *)initWithTraceData:(NSMutableArray *)arg0 machTimestamp:(double)arg1 wallTimestamp:(double)arg2;
- (void)iterateTasks:(id)arg0;
- (PAStackshot *)initWithGlobalTrace;
- (double)machTimestamp;
- (double)wallTimestamp;

@end
