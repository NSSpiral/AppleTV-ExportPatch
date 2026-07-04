/* Runtime dump - SBUIBiometricEventMonitor
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIBiometricEventMonitor : NSObject <BiometricKitDelegate>
{
    BiometricKit * _biometricKit;
    <SBUIBiometricEventMonitorDelegate> * _delegate;
    NSHashTable * _observers;
    unsigned int _lastEvent;
    NSCountedSet * _matchingDisabledRequesters;
    NSCountedSet * _fingerDetectRequesters;
    NSCountedSet * _activePasscodeViews;
    char _matchingEnabled;
    char _fingerDetectionEnabled;
    char _screenIsOff;
    char _deviceLocked;
    char _lockScreenTopmost;
    char _shouldSendFingerOffNotification;
}

@property (nonatomic) <SBUIBiometricEventMonitorDelegate> * delegate;
@property (readonly, nonatomic) char matchingEnabled;
@property (readonly, nonatomic) unsigned int lockoutState;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SBUIBiometricEventMonitor *)sharedInstance;

- (void)dealloc;
- (void)setDelegate:(<SBUIBiometricEventMonitorDelegate> *)arg0;
- (SBUIBiometricEventMonitor *)init;
- (<SBUIBiometricEventMonitorDelegate> *)delegate;
- (void)removeObserver:(NSObject *)arg0;
- (void)addObserver:(NSObject *)arg0;
- (void)enableMatchingForPasscodeView:(NSObject *)arg0;
- (void)disableMatchingForPasscodeView:(NSObject *)arg0;
- (unsigned int)lockoutState;
- (char)isMatchingEnabled;
- (char)hasEnrolledIdentities;
- (void)_setMatchingEnabled:(char)arg0;
- (void)_profileSettingsChanged:(NSNotification *)arg0;
- (void)_reevaluateMatching;
- (void)_startFingerDetection;
- (void)_stopFingerDetection;
- (void)_startMatching;
- (void)_stopMatching;
- (void)_updateHandlersForEvent:(unsigned int)arg0;
- (void)matchResult:(NSObject *)arg0 withDetails:(GEOPlaceActionDetails *)arg1;
- (void)statusMessage:(unsigned int)arg0;
- (NSObject *)stringForEvent:(unsigned int)arg0;
- (void)setMatchingDisabled:(char)arg0 requester:(GEORequester *)arg1;
- (void)setFingerDetectEnabled:(char)arg0 requester:(GEORequester *)arg1;
- (void)setLockScreenTopmost:(char)arg0;
- (void)_setDeviceLocked:(char)arg0;
- (void)noteScreenWillTurnOff;
- (void)noteScreenDidTurnOff;
- (void)noteScreenWillTurnOn;
- (void)_deviceWillWake;

@end
