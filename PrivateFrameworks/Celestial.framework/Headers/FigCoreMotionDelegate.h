/* Runtime dump - FigCoreMotionDelegate
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCoreMotionDelegate : NSObject
{
    struct _opaque_pthread_mutex_t ringMutex;
    CMMotionManager * motionManager;
    char manageFusedMotion;
    char manageAccel;
    char manageGravity;
    int accelRingIndex;
    id accelRingX;
    id accelRingY;
    id accelRingZ;
    id accelRingTime;
    int fusedRingIndex;
    id fusedRingTime;
    id fusedRingDoingBiasEstimation;
    id fusedRingAccel;
    id fusedRingQuaternion;
    id fusedRingPosition;
    struct OpaqueFigSemaphore * dataSemaphore;
    double latestMotionDataTime;
    double latestGravityDataTime;
    char copyingAllData;
    double dLatestFusedMotionCopied;
    double dLatestTimestamp;
    double dGyroUpdateInterval;
    double timestampLatency;
    char gettingAttitudeChange;
    struct ? previousQuaternion;
    struct ? currentQuaternion;
    char computingPosition;
    struct ? position;
    struct ? velocity;
}

- (void)dealloc;
- (FigCoreMotionDelegate *)init;
- (long)getVectorX:(float *)arg0 y:(float *)arg1 z:(float *)arg2 forTimeStamp:(double)arg3;
- (FigCoreMotionDelegate *)initWithAccelerometer:(char)arg0 gravityZ:(char)arg1 fusedMotion:(char)arg2 accelUpdateInterval:(float)arg3 fusedMotionUpdateInterval:(float)arg4;
- (void)didUpdatePositionWithAcceleration:(struct ? *)arg0 forTimeStamp:(double)arg1;
- (void)didUpdateVelocityWithAcceleration:(struct ? *)arg0 forTimeStamp:(double)arg1;
- (void)didUpdatePositionWithTimeStamp:(double)arg0;
- (void)getCurrentDeltaQuaternion:(struct ? *)arg0;
- (void)updateDeviceCallback:(char)arg0 fusedMotionUpdateInterval:(float)arg1;
- (void)updateGyroInterval:(float)arg0;
- (void)didUpdateAcceleration:(struct ?)arg0 time:(double)arg1;
- (void)didUpdateGravity:(struct ?)arg0 time:(double)arg1;
- (long)getGravityX:(float *)arg0 y:(float *)arg1 z:(float *)arg2 forTimeStamp:(double)arg3;
- (long)getFusedVectorX:(float *)arg0 y:(float *)arg1 z:(float *)arg2 forTimeStamp:(double)arg3;
- (void)didUpdateFusedMotionWithDeviceMotion:(struct ?)arg0 time:(struct ?)arg1 ifsync:(struct ?)arg2;
- (NSData *)copyAllFusedMotionData;
- (NSData *)copyNewFusedMotionData;
- (NSData *)copyFusedMotionData:(double)arg0 endTime:(double)arg1 timeoutValue:(double)arg2 errOut:(int *)arg3;
- (long)updateCurrentQuaternionForTimeStamp:(double)arg0;
- (long)updateCurrentQuaternionForTimeStamps:(double)arg0 withEnd:(double)arg1;
- (void)getCurrentQuaternion:(struct ? *)arg0;
- (void)getCurrentAttitudeRoll:(double *)arg0 pitch:(double *)arg1 yaw:(double *)arg2;
- (void)getCurrentDeltaAttitudeRoll:(double *)arg0 pitch:(double *)arg1 yaw:(double *)arg2;
- (void)getPositionX:(float *)arg0 y:(float *)arg1 z:(float *)arg2 forTimeStamp:(double)arg3;
- (char)managingFusedMotion;
- (char)managingAccel;
- (char)managingGravity;
- (char)isCopyingAllData;

@end
