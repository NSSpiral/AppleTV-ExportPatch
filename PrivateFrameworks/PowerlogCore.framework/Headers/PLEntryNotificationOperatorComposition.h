/* Runtime dump - PLEntryNotificationOperatorComposition
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLEntryNotificationOperatorComposition : PLNSNotificationOperatorComposition

+ (PLEntryNotificationOperatorComposition *)significantBatteryChangeNotificationWithOperator:(id)arg0 withBlock:(id /* block */)arg1;
+ (PLEntryNotificationOperatorComposition *)wakeEntryNotificationWithOperator:(id)arg0 withBlock:(id /* block */)arg1;
+ (PLEntryNotificationOperatorComposition *)canSleepEntryNotificationWithOperator:(id)arg0 withBlock:(id /* block */)arg1;
+ (PLEntryNotificationOperatorComposition *)displayOffNotificationWithOperator:(id)arg0 withBlock:(id /* block */)arg1;
+ (PLEntryNotificationOperatorComposition *)sleepEntryNotificationWithOperator:(id)arg0 withBlock:(id /* block */)arg1;
+ (NSString *)requestEntryForEntryKey:(NSString *)arg0 forOperator:(_NSItemProviderExtensionVendorLoadOperator *)arg1 withTimeout:(double)arg2 error:(id *)arg3;

- (PLEntryNotificationOperatorComposition *)initWithOperator:(PLOperator *)arg0 forEntryKey:(NSString *)arg1 forUpdateOrInsert:(short)arg2 withFilter:(NSObject *)arg3 withBlock:(id /* block */)arg4;
- (PLEntryNotificationOperatorComposition *)initWithOperator:(PLOperator *)arg0 forEntryKey:(NSString *)arg1 withFilter:(NSObject *)arg2 withBlock:(id /* block */)arg3;
- (PLEntryNotificationOperatorComposition *)initWithOperator:(PLOperator *)arg0 forEntryKey:(NSString *)arg1 withBlock:(id /* block */)arg2;
- (void)requestEntry;
- (PLEntryNotificationOperatorComposition *)initWithOperator:(PLOperator *)arg0 forEntryKey:(NSString *)arg1 forUpdateOrInsert:(short)arg2 withBlock:(id /* block */)arg3;

@end
