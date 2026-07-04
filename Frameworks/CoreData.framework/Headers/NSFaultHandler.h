/* Runtime dump - NSFaultHandler
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSFaultHandler : NSObject

+ (char)accessInstanceVariablesDirectly;
+ (void)initialize;

- (NSObject *)retainedFulfillAggregateFaultForObject:(NSObject *)arg0 andRelationship:(id)arg1 withContext:(NSObject *)arg2;
- (NSFaultHandler *)initWithPersistenceStore:(unsigned int)arg0;
- (id)fulfillFault:(id)arg0 withContext:(NSObject *)arg1 forIndex:(unsigned int)arg2;
- (id)fulfillFault:(id)arg0 withContext:(NSObject *)arg1 error:(id *)arg2;
- (void)fulfillFault:(id)arg0 withContext:(NSObject *)arg1;
- (NSObject *)retainedOrderedFaultInformationForAggregateFaultForObject:(NSObject *)arg0 andRelationship:(id)arg1 withContext:(NSObject *)arg2 error:(id *)arg3;
- (void)turnObject:(NSObject *)arg0 intoFaultWithContext:(NSObject *)arg1;
- (void)_fireFirstAndSecondLevelFaultsForObject:(NSObject *)arg0 withContext:(NSObject *)arg1;

@end
