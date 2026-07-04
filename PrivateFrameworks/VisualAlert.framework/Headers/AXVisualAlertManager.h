/* Runtime dump - AXVisualAlertManager
 * Image: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

@interface AXVisualAlertManager : NSObject
{
    unsigned int _alertTypes;
    <AXCameraTorchManager> * _cameraTorchManager;
    AXTimer * _timer;
    AXTimer * _torchForceShutdownTimer;
    NSDictionary * _patterns;
    NSDictionary * _activePattern;
    unsigned int _activePatternCursor;
    char _shouldRepeatPattern;
    NSDictionary * _patternToUseForVisualAlertAfterCaptureSessionStopsRunning;
    NSArray * _notificationHandlers;
    AXNotificationHandler * _deviceLockStateChangedNotificationHandler;
    AXNotificationHandler * _torchInControlCenterWasEnabledNotificationHandler;
    char _torchDeviceOpen;
    char _torchDeviceOn;
    char _isDeviceLocked;
    char _isQuietModeEnabled;
    char _isTorchEnabledInControlCenter;
    char _captureSessionRunning;
    char _videoConferenceCallRinging;
    char _skipAutomaticStopOnUserInteraction;
    NSMutableArray * _bulletins;
    unsigned int _typeToUseForVisualAlertAfterCaptureSessionStopsRunning;
}

@property (readonly, retain, nonatomic) NSDictionary * _patterns;
@property (retain, nonatomic) NSDictionary * _activePattern;
@property (nonatomic) unsigned int _typeToUseForVisualAlertAfterCaptureSessionStopsRunning;
@property (nonatomic) char _torchDeviceOpen;
@property (nonatomic) char _torchDeviceOn;

+ (void)initialize;
+ (AXVisualAlertManager *)sharedVisualAlertManager;

- (void)dealloc;
- (AXVisualAlertManager *)init;
- (NSString *)description;
- (void)stop;
- (void)_stop;
- (void)startForAlertTypes:(unsigned int)arg0 cameraTorchManager:(<AXCameraTorchManager> *)arg1;
- (void)addBulletin:(BBBulletin *)arg0;
- (void)_handleEndVisualAlertForAlarm;
- (id)existingBulletinForBulletin:(id)arg0;
- (void)removeBulletin:(BBBulletin *)arg0;
- (void)_handleVisualAlertForIncomingMessage;
- (void)_handleBeginVisualAlertForAlarmWithSound:(char)arg0;
- (void)_handleVisualAlertForRegularNotification;
- (void)_insertCustomLogicForSystemWideServer;
- (void)_handleBeginVisualAlertForIncomingCall;
- (void)_handleBeginVisualAlertForIncomingVideoConferenceCall;
- (void)_handleEndVisualAlertForIncomingCall;
- (void)_handleEndVisualAlertForIncomingVideoConferenceCall;
- (void)_handleVisualAlertForExternalApplication;
- (void)_handleLockButtonPressed;
- (void)_handleVolumeChanged;
- (void)_handleDeviceWasLocked;
- (void)_handleDeviceWasUnlocked;
- (void)_handleQuietModeWasEnabled;
- (void)_handleQuietModeWasDisabled;
- (void)_handleTorchInControlCenterWasEnabled;
- (void)_handleTorchInControlCenterWasDisabled;
- (void)_handleCaptureSessionDidStartRunning;
- (void)_handleCaptureSessionDidStopRunning;
- (void)_handleSecondaryVisualAlertManagerDidStart;
- (char)_hasVideoConferenceCameraTorchManager;
- (void)_handleVideoConferenceCallRinging;
- (void)_endVisualAlert;
- (void)_startForAlertTypes:(unsigned int)arg0 cameraTorchManager:(<AXCameraTorchManager> *)arg1;
- (void)_beginVisualAlertForType:(unsigned int)arg0 repeat:(char)arg1 skipAutomaticStopOnUserInteraction:(char)arg2;
- (void)_setTypeToUseForVisualAlertAfterCaptureSessionStopsRunning:(unsigned int)arg0;
- (NSDictionary *)_patterns;
- (char)_isTorchDeviceOpen;
- (char)_isTorchDeviceOn;
- (NSObject *)_normalizedStrobePatternForOriginalPattern:(NSObject *)arg0;
- (void)_setActivePattern:(NSObject *)arg0;
- (void)_setTorchDeviceOpen:(char)arg0;
- (void)_processNextVisualAlertComponent;
- (void)_setTorchDeviceOn:(char)arg0;
- (NSDictionary *)_activePattern;
- (void)_beginVisualAlertForType:(unsigned int)arg0 repeat:(char)arg1;
- (char)_shouldHandleVisualAlertsForVideoConferenceCallsInConferenceFramework;
- (unsigned int)_typeToUseForVisualAlertAfterCaptureSessionStopsRunning;
- (char)_supportsVisualAlertsForVideoConferenceCalls;
- (char)_isTorchEnabledInControlCenter;

@end
