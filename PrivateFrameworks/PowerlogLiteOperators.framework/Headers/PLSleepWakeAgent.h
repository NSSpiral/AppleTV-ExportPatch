/* Runtime dump - PLSleepWakeAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLSleepWakeAgent : PLAgent
{
    unsigned int _rootDomainConnect;
    unsigned int _pmNotifier;
    struct IONotificationPort * _systemPowerPortRef;
    PLSemaphore * _canSleepSemaphore;
}

@property unsigned int rootDomainConnect;
@property unsigned int pmNotifier;
@property struct IONotificationPort * systemPowerPortRef;
@property (retain) PLSemaphore * canSleepSemaphore;

+ (void)load;
+ (NSArray *)railDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSObject *)entryEventForwardDefinitionPowerState;

- (PLSleepWakeAgent *)init;
- (void)log;
- (void).cxx_destruct;
- (void)fakeSleep;
- (void)fakeWake;
- (id)wakeReasons;
- (void)systemPoweredOn;
- (unsigned int)rootDomainConnect;
- (void)setRootDomainConnect:(unsigned int)arg0;
- (unsigned int)pmNotifier;
- (void)setPmNotifier:(unsigned int)arg0;
- (struct IONotificationPort *)systemPowerPortRef;
- (void)setSystemPowerPortRef:(struct IONotificationPort *)arg0;
- (PLSemaphore *)canSleepSemaphore;
- (void)setCanSleepSemaphore:(PLSemaphore *)arg0;

@end
