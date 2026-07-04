/* Runtime dump - PLAWDAuxMetrics
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLAWDAuxMetrics : NSObject
{
    PLOperator * _operator;
    NSMutableSet * _runningMetrics;
}

@property (weak) PLOperator * operator;
@property (retain, nonatomic) NSMutableSet * runningMetrics;

+ (NSArray *)entryEventPointDefinitions;
+ (PLAWDAuxMetrics *)getSharedObjWithOperator:(PLOperator *)arg0;
+ (NSArray *)entryAggregateDefinitions;

- (void).cxx_destruct;
- (PLOperator *)operator;
- (PLAWDAuxMetrics *)initWithOperator:(PLOperator *)arg0;
- (NSMutableSet *)runningMetrics;
- (void)resetTableWithEntryKey:(NSString *)arg0;
- (void)startMetricCollection:(id)arg0;
- (void)stopMetricCollection:(id)arg0;
- (char)submitDataToAWDServer:(NSObject *)arg0 withAwdConn:(id)arg1;
- (void)handleChargerChangeWithState:(char)arg0 withDate:(NSDate *)arg1;
- (void)setOperator:(PLOperator *)arg0;
- (void)setRunningMetrics:(NSMutableSet *)arg0;
- (char)doesInterfereWithChargerWithStartDate:(NSDate *)arg0 withEndDate:(NSDate *)arg1;
- (double)getRailEnergyWithEntry:(struct archive_entry *)arg0 withFilter:(NSObject *)arg1 isRailForward:(char)arg2;
- (char)dropFirstEntryReceived:(id)arg0 usingFilter:(NSObject *)arg1 andStartTime:(id)arg2;

@end
