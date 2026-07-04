/* Runtime dump - CMDeviceOrientationManagerInternal
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMDeviceOrientationManagerInternal : NSObject
{
    int fSampleLock;
    struct Dispatcher * fDeviceOrientationDispatcher;
    id fDeviceOrientationHandler;
    NSOperationQueue * fDeviceOrientationQueue;
    NSObject<OS_dispatch_semaphore> * fDeviceOrientationSemaphore;
    char fDidSignalSemaphore;
    int fOrientationCallbackMode;
    BOOL fEnableOrientationNotification;
    struct Sample fLatestDeviceOrientationSample;
    struct Sample fLastSignificantOrientationSample;
}

- (void)dealloc;
- (CMDeviceOrientationManagerInternal *)init;
- (void).cxx_construct;

@end
