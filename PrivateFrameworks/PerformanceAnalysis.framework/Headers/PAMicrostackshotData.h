/* Runtime dump - PAMicrostackshotData
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAMicrostackshotData : NSObject
{
    unsigned int _cpuNumber;
    unsigned long long _timeInUsUnix;
    unsigned char _microSnapshotFlags;
    unsigned short _systemStatsFlags;
}

@property (readonly) unsigned int cpuNumber;
@property (readonly) unsigned long long timestampInUsUnix;
@property (readonly) unsigned char microSnapshotFlags;
@property (readonly) char didInterruptUserMode;
@property (readonly) char isInterruptRecord;
@property (readonly) char isTimerArmingRecord;
@property (readonly) unsigned short systemStatsFlags;
@property (readonly) char isUserIdle;
@property (readonly) char isOnBattery;
@property (readonly) char hasValidOnBatteryAndUserIdleFlags;
@property (readonly) char didInterruptKernelMode;

- (char)isUserIdle;
- (unsigned int)powerstatsFlags;
- (unsigned long)bytesUsedInBuffer;
- (char)isOnBattery;
- (char)didInterruptKernelMode;
- (char)hasValidOnBatteryAndUserIdleFlags;
- (char)didInterruptUserMode;
- (char)isInterruptRecord;
- (char)isTimerArmingRecord;
- (PAMicrostackshotData *)initWithMicrosnapshot:(struct micro_snapshot *)arg0 withRemainingBytes:(struct micro_snapshot)arg1;
- (unsigned int)cpuNumber;
- (unsigned long long)timestampInUsUnix;
- (unsigned char)microSnapshotFlags;
- (unsigned short)systemStatsFlags;

@end
