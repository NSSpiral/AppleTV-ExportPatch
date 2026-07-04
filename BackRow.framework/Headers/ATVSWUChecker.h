/* Runtime dump - ATVSWUChecker
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVSWUpdateCheckTask;
@interface ATVSWUChecker : NSObject
{
    PCSimpleTimer * _darkWakeTimer;
    ATVSWUpdateCheckTask * _initialCheckTask;
    ATVSWUpdateCheckTask * _normalCheckTask;
    ATVSWUpdateCheckTask * _postponedCheckTask;
    NSTimer * _vendorBagTimeoutTimer;
}

@property (retain, nonatomic) PCSimpleTimer * darkWakeTimer;
@property (retain, nonatomic) ATVSWUpdateCheckTask * initialCheckTask;
@property (retain, nonatomic) ATVSWUpdateCheckTask * normalCheckTask;
@property (retain, nonatomic) ATVSWUpdateCheckTask * postponedCheckTask;
@property (weak, nonatomic) NSTimer * vendorBagTimeoutTimer;

+ (void)scheduleInitialCheck;
+ (void)scheduleNormalPeriodicCheck;
+ (void)emitConfiguration;
+ (double)normalPeriodicCheckInterval;
+ (double)postponedRecheckDelay;
+ (double)sleepCheckDelay;
+ (void)schedulePostponedRecheck;
+ (void)scheduleOnSleepCheck;
+ (void)checkTaskCompleted:(id)arg0;
+ (void)setNormalPeriodicCheckInterval:(double)arg0;
+ (void)setPostponedRecheckDelay:(double)arg0;
+ (void)setSleepCheckDelay:(double)arg0;
+ (ATVSWUChecker *)_sharedInstance;

- (void)_scheduleInitialCheckTask;
- (void)_scheduleNormalPeriodicCheck;
- (void)_schedulePostponedRecheck;
- (void)_scheduleOnSleepCheck;
- (ATVSWUpdateCheckTask *)initialCheckTask;
- (ATVSWUpdateCheckTask *)normalCheckTask;
- (ATVSWUpdateCheckTask *)postponedCheckTask;
- (PCSimpleTimer *)darkWakeTimer;
- (void)setInitialCheckTask:(ATVSWUpdateCheckTask *)arg0;
- (void)setPostponedCheckTask:(ATVSWUpdateCheckTask *)arg0;
- (void)_relatedPrefChanged:(NSNotification *)arg0;
- (NSTimer *)vendorBagTimeoutTimer;
- (void)setVendorBagTimeoutTimer:(NSTimer *)arg0;
- (void)setDarkWakeTimer:(PCSimpleTimer *)arg0;
- (void)setNormalCheckTask:(ATVSWUpdateCheckTask *)arg0;
- (void)_cancelInitialCheckTask;
- (void)_cancelNormalCheckTask;
- (void)_scheduleTimerForNextDarkWake;
- (void)_cancelPostponedCheckTask;
- (void)_cancelDarkWakeTimer;
- (NSDate *)_lastCheckDate;
- (void)_scheduleCheckAt:(id)arg0;
- (void)_reloadVendorBag;
- (void)_postVendorBagReloadContinueAutoApply;
- (void)_timerFired:(id)arg0;
- (void)dealloc;
- (ATVSWUChecker *)init;
- (void).cxx_destruct;

@end
