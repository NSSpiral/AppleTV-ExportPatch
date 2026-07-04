/* Runtime dump - HMDEventTrigger
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDEventTrigger : HMDTrigger <HMDLocationDelegate>
{
    NSMutableArray * _characteristicEvents;
    NSMutableArray * _locationEvents;
    NSPredicate * _evaluationCondition;
}

@property (retain, nonatomic) NSMutableArray * characteristicEvents;
@property (retain, nonatomic) NSMutableArray * locationEvents;
@property (readonly, nonatomic) NSPredicate * evaluationCondition;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;

- (HMDEventTrigger *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)activate:(char)arg0 completionHandler:(id /* block */)arg1;
- (void)sendTriggerFiredNotification:(NSNotification *)arg0;
- (void)_registerForMessages;
- (char)shouldEncodeLastFireDate:(NSDate *)arg0;
- (void)removeAccessory:(HMAccessory *)arg0;
- (void)configure:(id)arg0 messageDispatcher:(HMDIDSMessageDispatcher *)arg1 queue:(NSObject *)arg2;
- (HMDEventTrigger *)initWithName:(NSString *)arg0 events:(AWDCoreRoutineModelLearnedNonGeocodeableEvents *)arg1 evaluationCondition:(NSPredicate *)arg2;
- (void)_sortEvents:(id)arg0;
- (void)setCharacteristicEvents:(NSMutableArray *)arg0;
- (void)setLocationEvents:(NSMutableArray *)arg0;
- (NSMutableArray *)characteristicEvents;
- (NSMutableArray *)locationEvents;
- (void)_activate:(char)arg0 characteristicEvents:(NSMutableArray *)arg1 completionHandler:(id /* block */)arg2;
- (void)_activateLocationEvents:(char)arg0 completionHandler:(id /* block */)arg1;
- (NSPredicate *)evaluationCondition;
- (void)_reevaluateIfRelaunchRequired:(char)arg0;
- (void)_handleLocationAuthorization:(int)arg0;
- (void)_handleAccessoryCharacteristicsChangedNotification:(NSNotification *)arg0;
- (void)_handleLocationAuthorizationMessage:(NSString *)arg0;
- (void)_handleUpdateEventTriggerCondition:(id)arg0;
- (void)_handleAddEventToEventTrigger:(id)arg0;
- (void)_handleRemoveEventsFromEventTrigger:(id)arg0;
- (void)_handleUpdateEventForEventTrigger:(id)arg0;
- (void)_handleRetrieveLocationEventForEventTrigger:(id)arg0;
- (NSPredicate *)_updatePredicate:(NSPredicate *)arg0 currentCharacteristicInPredicate:(id *)arg1 conditionModified:(char *)arg2 removedAccessory:(id)arg3;
- (void)_checkForNoEvents;
- (char)_compareEventValue:(id)arg0 withCharacteristic:(HMCharacteristic *)arg1;
- (void)_evaluateFiringTrigger;
- (id)compareValueOfCharacteristic:(id)arg0 againstValue:(id)arg1 operatorType:(unsigned int)arg2;
- (void)_saveChanges:(id)arg0;
- (NSPredicate *)_rewritePredicate:(NSPredicate *)arg0 currentCharacteristicInPredicate:(id *)arg1 characteristicsToRead:(id)arg2;
- (NSString *)sunrise;
- (NSSet *)sunset;
- (void)executeTriggerAfterEvaluatingCondition:(id)arg0;
- (void)didDetermineState:(int)arg0 forRegion:(CLRegion *)arg1;
- (id)addDeltaToNow:(id)arg0;
- (NSArray *)dateTodayMatchingComponents:(NSArray *)arg0;

@end
