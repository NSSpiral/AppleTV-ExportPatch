/* Runtime dump - PCSimpleTimer
 * Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCSimpleTimer : NSObject <PCLoggingDelegate>
{
    double _fireTime;
    double _startTime;
    double _lastUpdateTime;
    char _triggerOnGMTChange;
    char _disableSystemWaking;
    NSDate * _scheduledWakeDate;
    NSString * _serviceIdentifier;
    id _target;
    SEL _selector;
    id _userInfo;
    PCDispatchTimer * _preventSleepTimer;
    PCDispatchTimer * _fireTimer;
    char _sleepIsImminent;
    unsigned int _powerAssertionID;
    id _timeChangeSource;
    NSRunLoop * _timerRunLoop;
    NSString * _timerMode;
    int _significantTimeChangeToken;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) char disableSystemWaking;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSString * loggingIdentifier;

+ (NSDate *)lastSystemWakeDate;
+ (double)currentMachTimeInterval;

- (PCSimpleTimer *)initWithFireDate:(NSDate *)arg0 serviceIdentifier:(NSString *)arg1 target:(NSObject *)arg2 selector:(SEL)arg3 userInfo:(NSDictionary *)arg4;
- (PCSimpleTimer *)initWithTimeInterval:(double)arg0 serviceIdentifier:(NSString *)arg1 target:(NSObject *)arg2 selector:(SEL)arg3 userInfo:(NSDictionary *)arg4;
- (void)scheduleInQueue:(NSObject *)arg0;
- (void)dealloc;
- (NSString *)debugDescription;
- (void)invalidate;
- (char)isValid;
- (NSDictionary *)userInfo;
- (void)scheduleInRunLoop:(NSObject *)arg0;
- (NSString *)loggingIdentifier;
- (void)setDisableSystemWaking:(char)arg0;
- (void)_updateTimers;
- (void)scheduleInRunLoop:(NSObject *)arg0 inMode:(id)arg1;
- (void)_fireTimerFired;
- (PCSimpleTimer *)initWithAbsoluteTime:(double)arg0 serviceIdentifier:(NSString *)arg1 target:(NSObject *)arg2 selector:(SEL)arg3 userInfo:(NSDictionary *)arg4 triggerOnGMTChange:(char)arg5;
- (char)firingIsImminent;
- (void)updateFireTime:(double)arg0 triggerOnGMTChange:(char)arg1;
- (char)disableSystemWaking;
- (void)_scheduleTimer;
- (void)_preventSleepFired;
- (void)_setPowerMonitoringEnabled:(char)arg0;
- (void)_setSignificantTimeChangeMonitoringEnabled:(char)arg0;
- (void)_significantTimeChange;
- (NSObject *)_getTimerRunLoop;
- (id)_getTimerMode;
- (void)_performBlockOnQueue:(NSObject *)arg0;
- (void)_powerNotificationSleepIsNotImminent;
- (void)_powerNotificationSleepIsImminent;

@end
