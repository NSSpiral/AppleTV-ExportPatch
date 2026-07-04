/* Runtime dump - CMMotionManagerInternal
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMMotionManagerInternal : NSObject
{
    int fSampleLock;
    struct Dispatcher * fAccelerometerDispatcher;
    double fAccelerometerUpdateInterval;
    id fAccelerometerHandler;
    NSOperationQueue * fAccelerometerQueue;
    double fLastAccelerometerNotificationTimestamp;
    struct Sample fLatestAccelerometerSample;
    struct Dispatcher * fAmbientPressureDispatcher;
    double fAmbientPressureUpdateInterval;
    id fAmbientPressureHandler;
    NSOperationQueue * fAmbientPressureQueue;
    double fLastAmbientPressureNotificationTimestamp;
    struct Sample fLatestAmbientPressureSample;
    struct Dispatcher * fGyroDispatcher;
    double fGyroUpdateInterval;
    id fGyroHandler;
    NSOperationQueue * fGyroQueue;
    double fLastGyroNotificationTimestamp;
    struct Sample fLatestGyroSample;
    struct Dispatcher * fDeviceMotionDispatcher;
    double fDeviceMotionUpdateInterval;
    id fDeviceMotionHandler;
    NSOperationQueue * fDeviceMotionQueue;
    double fLastDeviceMotionNotificationTimestamp;
    struct Sample fLatestDeviceMotionSample;
    unsigned int fAttitudeReferenceFrame;
    BOOL fCompassCalibrationHud;
    BOOL fShowCompassCalibrationHudOnResume;
    BOOL fHaveSentDeviceRequiresMovementError;
    struct unique_ptr<CLGeomagneticModelProvider_Type::Client, std::__1::default_delete<CLGeomagneticModelProvider_Type::Client> > fGeomagneticModelProviderClient;
    struct ? fGeomagneticModel;
    BOOL fHaveSentTrueNorthUnavailableError;
    double fDeviceMotionStartTimestamp;
    struct Dispatcher * fMagnetometerDispatcher;
    double fMagnetometerUpdateInterval;
    id fMagnetometerHandler;
    NSOperationQueue * fMagnetometerQueue;
    double fLastMagnetometerNotificationTimestamp;
    struct Sample fLatestMagnetometerSample;
    BOOL fShowsDeviceMovementDisplay;
    struct Dispatcher * fPrivateAccelerometerDataDispatcher;
    /* block */ id * fPrivateAccelerometerDataCallback;
    void * fPrivateAccelerometerDataCallbackInfo;
    struct Dispatcher * fPrivateGyroDataDispatcher;
    /* block */ id * fPrivateGyroDataCallback;
    void * fPrivateGyroDataCallbackInfo;
    struct Dispatcher * fPrivateMagnetometerDataDispatcher;
    /* block */ id * fPrivateMagnetometerDataCallback;
    void * fPrivateMagnetometerDataCallbackInfo;
    struct Dispatcher * fPrivateDeviceMotionDispatcher;
    /* block */ id * fPrivateDeviceMotionCallback;
    void * fPrivateDeviceMotionCallbackInfo;
    BOOL fPrivateDeviceMotionUse9Axis;
    BOOL fPrivateUseAccelerometer;
    struct CLConnectionClient * fConnection;
    NSObject<OS_dispatch_queue> * fConnectionQueue;
    struct __CFRunLoopTimer * fWatchdogTimer;
    BOOL fSidebandSensorFusionEnabled;
    BOOL fSidebandSensorFusionLatency;
    BOOL fSidebandSensorFusionSnoop;
    struct unique_ptr<CLIspDataVisitor, std::__1::default_delete<CLIspDataVisitor> > fSidebandVisitor;
    BOOL fPrivateWantsPowerConservativeDeviceMotion;
    /* block */ id * fPrivateNotificationCallback;
    void * fPrivateNotificationCallbackInfo;
    struct Dispatcher * fPrivateDeviceMotionSensorStatusDispatcher;
    struct Dispatcher * fPrivateDeviceMotionAlgorithmDidResetDispatcher;
    /* block */ id * fPrivateGyroBiasAndVarianceCallback;
    void * fPrivateGyroBiasAndVarianceCallbackInfo;
    struct Dispatcher * fPrivateGyroBiasAndVarianceDispatcher;
    /* block */ id * fPrivateDeviceMotionCompassDataCallback;
    void * fPrivateDeviceMotionCompassDataCallbackInfo;
    struct Dispatcher * fPrivateDeviceMotionCompassDataDispatcher;
    /* block */ id * fPrivateDeviceMotionCompassAlignmentCallback;
    void * fPrivateDeviceMotionCompassAlignmentCallbackInfo;
    struct Dispatcher * fPrivateDeviceMotionCompassAlignmentDispatcher;
    BOOL fInactive;
}

- (void)teardownPrivate;
- (void)dealloc;
- (CMMotionManagerInternal *)init;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
