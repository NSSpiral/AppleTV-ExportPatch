/* Runtime dump - WebCoreMotionManager
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreMotionManager : NSObject
{
    CMMotionManager * m_motionManager;
    CLLocationManager * m_locationManager;
    struct HashSet<WebCore::DeviceMotionClientIOS *, WTF::PtrHash<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *> > m_deviceMotionClients;
    struct HashSet<WebCore::DeviceOrientationClientIOS *, WTF::PtrHash<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *> > m_deviceOrientationClients;
    NSTimer * m_updateTimer;
    char m_gyroAvailable;
    char m_headingAvailable;
}

+ (WebCoreMotionManager *)sharedManager;

- (void)dealloc;
- (WebCoreMotionManager *)init;
- (void)update;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)addMotionClient:(struct DeviceMotionClientIOS *)arg0;
- (void)removeMotionClient:(struct DeviceMotionClientIOS *)arg0;
- (char)gyroAvailable;
- (void)addOrientationClient:(struct DeviceOrientationClientIOS *)arg0;
- (void)removeOrientationClient:(struct DeviceOrientationClientIOS *)arg0;
- (void)initializeOnMainThread;
- (void)checkClientStatus;
- (char)headingAvailable;
- (void)sendMotionData:(NSData *)arg0 withHeading:(CLHeading *)arg1;
- (void)sendAccelerometerData:(NSData *)arg0;

@end
