/* Runtime dump - HMEventTrigger
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMEventTrigger : HMTrigger <NSSecureCoding>
{
    NSPredicate * _predicate;
    HMThreadSafeMutableArrayCollection * _currentEvents;
}

@property (readonly, copy, nonatomic) NSArray * events;
@property (copy, nonatomic) NSPredicate * predicate;
@property (retain, nonatomic) HMThreadSafeMutableArrayCollection * currentEvents;

+ (NSDictionary *)createWithDictionary:(NSDictionary *)arg0 home:(id)arg1;
+ (char)_validatePredicate:(NSPredicate *)arg0;
+ (HMEventTrigger *)_rewritePredicateForDaemon:(id)arg0 characteristicIsInvalid:(char *)arg1;
+ (HMEventTrigger *)predicateForEvaluatingTriggerWithCharacteristic:(id)arg0 relatedBy:(unsigned int)arg1 toValue:(NSValue *)arg2;
+ (HMEventTrigger *)_predicateForEvaluatingTriggerWithCharacteristic:(id)arg0 value:(NSObject *)arg1 valueFormatString:(NSString *)arg2;
+ (NSObject *)_rewritePredicateForClient:(NSObject *)arg0 home:(id)arg1;
+ (NSObject *)predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(NSObject *)arg0 applyingOffset:(NSSet *)arg1;
+ (NSObject *)predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(NSObject *)arg0 applyingOffset:(NSSet *)arg1;
+ (NSArray *)predicateForEvaluatingTriggerOccurringBeforeDateWithComponents:(NSArray *)arg0;
+ (NSArray *)predicateForEvaluatingTriggerOccurringOnDateWithComponents:(NSArray *)arg0;
+ (NSArray *)predicateForEvaluatingTriggerOccurringAfterDateWithComponents:(NSArray *)arg0;
+ (HMEventTrigger *)predicateForEvaluatingTriggerWithCharacteristic:(id)arg0 matchingValue:(id)arg1;
+ (char)supportsSecureCoding;

- (void)_updateRegion:(NSObject *)arg0 forLocationEvent:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
- (void)_retrieveLocationEvent:(NSObject *)arg0;
- (id)_serializeForAdd;
- (void)_updateTriggerValue:(id)arg0 forCharacteristicEvent:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
- (void)_registerNotificationHandlers;
- (void)_configure:(id)arg0 uuid:(NSUUID *)arg1 messageDispatcher:(HMDIDSMessageDispatcher *)arg2 clientQueue:(NSObject<OS_dispatch_queue> *)arg3 delegateCaller:(HMDelegateCaller *)arg4;
- (HMThreadSafeMutableArrayCollection *)currentEvents;
- (void)_addEvent:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (NSObject *)_serializeEvent:(NSObject *)arg0;
- (void)_removeEvent:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)_updatePredicate:(NSPredicate *)arg0 completionHandler:(id /* block */)arg1;
- (id)_rewritePredicateForMerge:(id)arg0 existingHome:(id)arg1 characteristicIsInvalid:(char *)arg2;
- (HMEventTrigger *)initWithName:(NSString *)arg0 events:(NSArray *)arg1 predicate:(NSPredicate *)arg2;
- (void)_handleEventTriggerConditionNotification:(NSNotification *)arg0;
- (void)handleEventAddedNotification:(NSNotification *)arg0;
- (void)handleEventsRemovedNotification:(NSNotification *)arg0;
- (void)handleEventUpdatedNotification:(NSNotification *)arg0;
- (NSObject *)_rewritePredicateForClient:(NSObject *)arg0;
- (char)_updateCharacterisiticReferenceInNewEvent:(NSObject *)arg0;
- (void)addEvent:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)removeEvent:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)updatePredicate:(NSPredicate *)arg0 completionHandler:(id /* block */)arg1;
- (char)_isPredicateValid;
- (void)setCurrentEvents:(HMThreadSafeMutableArrayCollection *)arg0;
- (NSArray *)events;
- (HMEventTrigger *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setPredicate:(NSPredicate *)arg0;
- (NSPredicate *)predicate;
- (void).cxx_destruct;
- (char)_mergeWithNewObject:(char)arg0 operations:(HMObjectMergeOperations *)arg1;

@end
