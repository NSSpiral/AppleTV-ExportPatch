/* Runtime dump - FigAccelerometerDelegate
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigAccelerometerDelegate : NSObject <SBSAccelerometerDelegate>
{
    SBSAccelerometer * sbsaccel;
    struct _opaque_pthread_mutex_t ringMutex;
    int ringIndex;
    id ringX;
    id ringY;
    id ringZ;
    id ringTime;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (FigAccelerometerDelegate *)init;
- (void)accelerometer:(BKSAccelerometer *)arg0 didAccelerateWithTimeStamp:(double)arg1 x:(float)arg2 y:(float)arg3 z:(float)arg4 eventType:(int)arg5;
- (void)deferOnRunloop_accelerometerEventsEnable;
- (void)getVectorX:(float *)arg0 y:(float *)arg1 z:(float *)arg2 forTimeStamp:(double)arg3;

@end
