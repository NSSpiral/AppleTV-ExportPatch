/* Runtime dump - PCPersistentTimer
 * Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCPersistentTimer : NSObject <PCLoggingDelegate, CUTPowerMonitorDelegate>
{
    double _fireTime;
    double _startTime;
    unsigned int _guidancePriority;
    double _minimumEarlyFireProportion;
    char _triggerOnGMTChange;
    char _disableSystemWaking;
    NSString * _serviceIdentifier;
    id _target;
    SEL _selector;
    id _userInfo;
    PCSimpleTimer * _simpleTimer;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) double minimumEarlyFireProportion;
@property (nonatomic) char disableSystemWaking;
@property (readonly, nonatomic) double fireTime;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSString * loggingIdentifier;

+ (NSDate *)lastSystemWakeDate;
+ (NSOperationQueue *)_backgroundUpdateQueue;
+ (void)_updateTime:(double)arg0 forGuidancePriority:(unsigned int)arg1;
+ (double)currentMachTimeInterval;
+ (double)_currentGuidanceTime;

- (PCPersistentTimer *)initWithFireDate:(NSDate *)arg0 serviceIdentifier:(NSString *)arg1 target:(NSObject *)arg2 selector:(SEL)arg3 userInfo:(NSDictionary *)arg4;
- (void)setMinimumEarlyFireProportion:(double)arg0;
- (double)fireTime;
- (PCPersistentTimer *)initWithTimeInterval:(double)arg0 serviceIdentifier:(NSString *)arg1 target:(NSObject *)arg2 selector:(SEL)arg3 userInfo:(NSDictionary *)arg4;
- (void)scheduleInQueue:(NSObject *)arg0;
- (void)dealloc;
- (NSString *)debugDescription;
- (void)invalidate;
- (char)isValid;
- (NSDictionary *)userInfo;
- (void)scheduleInRunLoop:(NSObject *)arg0;
- (NSString *)loggingIdentifier;
- (void)interfaceManagerInternetReachabilityChanged:(NSNotification *)arg0;
- (void)interfaceManagerWWANInterfaceChangedPowerState:(NSObject *)arg0;
- (void)interfaceManagerWWANInterfaceStatusChanged:(NSNotification *)arg0;
- (void)setDisableSystemWaking:(char)arg0;
- (PCPersistentTimer *)_initWithAbsoluteTime:(double)arg0 serviceIdentifier:(NSString *)arg1 guidancePriority:(unsigned int)arg2 target:(NSObject *)arg3 selector:(SEL)arg4 userInfo:(NSDictionary *)arg5 triggerOnGMTChange:(char)arg6;
- (void)_updateTimers;
- (void)scheduleInRunLoop:(NSObject *)arg0 inMode:(id)arg1;
- (void)_fireTimerFired;
- (char)firingIsImminent;
- (double)_nextForcedAlignmentAbsoluteTime;
- (double)_earlyFireTime;
- (void)cutPowerMonitorBatteryConnectedStateDidChange:(NSDictionary *)arg0;
- (PCPersistentTimer *)initWithTimeInterval:(double)arg0 serviceIdentifier:(NSString *)arg1 guidancePriority:(unsigned int)arg2 target:(NSObject *)arg3 selector:(SEL)arg4 userInfo:(NSDictionary *)arg5;
- (double)minimumEarlyFireProportion;
- (char)disableSystemWaking;

@end
