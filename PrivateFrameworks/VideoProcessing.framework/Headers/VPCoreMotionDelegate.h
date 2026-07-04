/* Runtime dump - VPCoreMotionDelegate
 * Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VPCoreMotionDelegate : NSObject
{
    CMMotionManager * motionManager;
    NSOperationQueue * operationQueue;
    id quaternionBuffer;
    id timestampBuffer;
    int quaternionBufferIndex;
    struct _opaque_pthread_mutex_t ringMutex;
    struct ? lastReadQuaternion;
    VPCoreMotionDelegate * weakSelf;
    int accelRingIndex;
    id accelRingX;
    id accelRingY;
    id accelRingZ;
    id accelRingTime;
    struct __sFILE * gyroFile;
}

- (void)dealloc;
- (VPCoreMotionDelegate *)init;
- (void)stop;
- (void)start;
- (long)getVectorX:(float *)arg0 y:(float *)arg1 z:(float *)arg2 forTimeStamp:(double)arg3;
- (void)didUpdateAcceleration:(struct ?)arg0 time:(double)arg1;
- (void)processGyroData:(NSData *)arg0 withError:(NSError *)arg1;
- (struct ?)getQuaternionByTimestamp:(double)arg0;

@end
