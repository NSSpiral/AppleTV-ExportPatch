/* Runtime dump - ATVPowerManager
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVPowerManager : NSObject
{
    char _userIdle;
    char _deviceAsleep;
    char _idleSleepTimeSet;
    char _needsDisplayWakeOnPowerOn;
    int _userEventIdleTimeoutInMinutes;
    int _sleepTimeoutInMinutes;
    NSTimer * _powerAssertionTimer;
    unsigned int _pmNoIdleSleepAssertionID;
    unsigned int _pmSystemActivityAssertionID;
    unsigned int _ioNotifier;
    unsigned int _ioConnection;
}

@property (nonatomic) int userEventIdleTimeoutInMinutes;
@property (nonatomic) int sleepTimeoutInMinutes;
@property (nonatomic) char userIdle;
@property (nonatomic) char deviceAsleep;
@property (retain, nonatomic) NSTimer * powerAssertionTimer;
@property (nonatomic) char idleSleepTimeSet;
@property (nonatomic) char needsDisplayWakeOnPowerOn;
@property (nonatomic) unsigned int pmNoIdleSleepAssertionID;
@property (nonatomic) unsigned int pmSystemActivityAssertionID;
@property (nonatomic) unsigned int ioNotifier;
@property (nonatomic) unsigned int ioConnection;

+ (ATVPowerManager *)sharedInstance;
+ (void)checkInWithBackboardServices;
+ (void)setupPowerManagement;
+ (char)automaticallyNotifiesObserversOfUserIdle;
+ (char)automaticallyNotifiesObserversOfDeviceAsleep;

- (ATVPowerManager *)init;
- (void).cxx_destruct;
- (void)_registerForPowerNotifications;
- (void)_registerForThermalNotifications;
- (void)_enableIdleSleepAndWatchdog;
- (void)_registerForBackBoardNotifications;
- (void)_setMachineToLowPowerMode;
- (void)_setMachineToNormalPowerMode;
- (void)_handleSleepTimeoutInvalidationNotification:(NSNotification *)arg0;
- (char)isDeviceAsleep;
- (void)setUserIdle:(char)arg0;
- (void)invalidateSleepTimeoutWithReason:(NSString *)arg0;
- (void)_handleThermalNotification;
- (int)userEventIdleTimeoutInMinutes;
- (int)sleepTimeoutInMinutes;
- (char)isUserIdle;
- (char)_shouldApplySleepTimeout;
- (void)_setAllowIdleSleep:(char)arg0;
- (void)setDeviceAsleep:(char)arg0;
- (void)setNeedsDisplayWakeOnPowerOn:(char)arg0;
- (void)_dropPowerAssertions:(id)arg0;
- (void)_releaseSystemActivityAssertion;
- (char)needsDisplayWakeOnPowerOn;
- (void)sleepDevice;
- (void)wakeDevice;
- (void)setSleepTimeoutInMinutes:(int)arg0;
- (void)setUserEventIdleTimeoutInMinutes:(int)arg0;
- (void)registerSleepTimeoutInvalidationWithNotificationName:(NSString *)arg0;
- (void)_handleUserEventDidOccur;
- (void)_handleUserEventsDidIdle;
- (void)_handleUserEventsDidUnIdle;
- (void)_handleIOPMCallbackMessage:(unsigned int)arg0 argument:(void *)arg1;
- (NSTimer *)powerAssertionTimer;
- (void)setPowerAssertionTimer:(NSTimer *)arg0;
- (char)isIdleSleepTimeSet;
- (void)setIdleSleepTimeSet:(char)arg0;
- (unsigned int)pmNoIdleSleepAssertionID;
- (void)setPmNoIdleSleepAssertionID:(unsigned int)arg0;
- (unsigned int)pmSystemActivityAssertionID;
- (void)setPmSystemActivityAssertionID:(unsigned int)arg0;
- (unsigned int)ioNotifier;
- (void)setIoNotifier:(unsigned int)arg0;
- (unsigned int)ioConnection;
- (void)setIoConnection:(unsigned int)arg0;
- (void)_updateIdleTimer;

@end
