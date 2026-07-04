/* Runtime dump - FBProcessCPUStatistics
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBProcessCPUStatistics : NSObject
{
    BSMachSendRight * _taskNamePort;
    struct FBProcessTimes _times;
}

@property (readonly, nonatomic) double totalElapsedTime;
@property (readonly, nonatomic) double totalElapsedUserTime;
@property (readonly, nonatomic) double totalElapsedSystemTime;
@property (readonly, nonatomic) double totalElapsedIdleTime;

- (void)dealloc;
- (void)update;
- (double)totalElapsedTime;
- (FBProcessCPUStatistics *)initWithTaskNamePort:(BSMachSendRight *)arg0;
- (id)descriptionForCrashReport;
- (double)_elapsedCPUTime;
- (void)_getApplicationCPUTimesForUser:(double *)arg0 system:(double *)arg1 idle:(double *)arg2;
- (void)_hostwideUserElapsedCPUTime:(double *)arg0 systemElapsedCPUTime:(double *)arg1 idleElapsedCPUTime:(double *)arg2;
- (double)totalElapsedUserTime;
- (double)totalElapsedSystemTime;
- (double)totalElapsedIdleTime;

@end
