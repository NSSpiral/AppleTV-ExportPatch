/* Runtime dump - FigIOHIDMotionDelegate
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigIOHIDMotionDelegate : NSObject
{
    struct _opaque_pthread_mutex_t ringMutex;
    char manageAccel;
    int accelRingIndex;
    id accelRingX;
    id accelRingY;
    id accelRingZ;
    id accelRingTime;
}

- (void)dealloc;
- (FigIOHIDMotionDelegate *)init;
- (void)getVectorX:(float *)arg0 y:(float *)arg1 z:(float *)arg2 forTimeStamp:(double)arg3;
- (char)managingAccel;
- (void)deferOnRunloop_initManagerUsingIOHID;
- (FigIOHIDMotionDelegate *)initWithOptions:(char)arg0 enableRotation:(char)arg1 enableAttitude:(char)arg2;
- (void)deferOnRunloop_stopEvents;
- (void)didUpdateAccelerationWithEventInfo:(struct ? *)arg0;

@end
