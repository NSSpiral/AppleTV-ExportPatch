/* Runtime dump - PLAggregateDictionaryService
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLAggregateDictionaryService : PLService
{
    double remainderUnpluggedEnergy;
    double remainderUnpluggedTime;
    NSMutableArray * _registeredNotifications;
    PLNSTimerOperatorComposition * _dailyTaskTimer;
    struct AggState _last_state;
}

@property (retain) NSMutableArray * registeredNotifications;
@property (retain) PLNSTimerOperatorComposition * dailyTaskTimer;
@property struct AggState last_state;

+ (void)load;

- (PLAggregateDictionaryService *)init;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (void)registerForBatteryNotifications;
- (NSMutableArray *)registeredNotifications;
- (void)setRegisteredNotifications:(NSMutableArray *)arg0;
- (void)dailyTasks;
- (void)registerForAudioNotifications;
- (void)registerForCameraNotifications;
- (void)registerForBluetoothNotifications;
- (void)registerForUIKitNotifications;
- (void)registerForSpringboardNotifications;
- (void)registerForVideoNotifications;
- (void)registerForMailNotifications;
- (void)registerForStoreNotifications;
- (void)registerForCalendarNotifications;
- (void)registerForCoreMediaNotifications;
- (void)registerForApplicationNotifications;
- (void)registerForLocationNotifications;
- (void)registerForSCDynamicStoreNotifications;
- (void)registerForSafariNotifications;
- (void)setDailyTaskTimer:(PLNSTimerOperatorComposition *)arg0;
- (void)blmAggregate;
- (void)addToDurationScalarKey:(NSString *)arg0 withDuration:(double)arg1;
- (void)logDuration:(double)arg0 asDistribution:(id)arg1;
- (void)logAggregateUIKitKeyboardActivityKey:(NSString *)arg0 withInfo:(NSDictionary *)arg1 AggDKey:(NSString *)arg2;
- (void)logAggregateUIKitActivityKey:(NSString *)arg0 withInfo:(NSDictionary *)arg1 AggDKey:(NSString *)arg2;
- (void)updateAggregateStateWithEntry:(struct archive_entry *)arg0;
- (struct AggState)last_state;
- (void)setLast_state:(struct AggState)arg0;
- (void)registerForAssertionNotifications;
- (PLNSTimerOperatorComposition *)dailyTaskTimer;

@end
