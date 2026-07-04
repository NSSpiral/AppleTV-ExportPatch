/* Runtime dump - PLRail
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLRail : PLOperator
{
    char _isNegativePowerSupported;
    char _logRail;
    char _cacheOn;
    short _railDirection;
    NSString * _railName;
    NSArray * _cacheResults;
    PLEntry * _lastSnapshot;
    double _selfAdjustedSafeTimeForModeling;
    struct _PLTimeIntervalRange _cacheTimeRange;
}

@property (readonly, retain) NSString * railName;
@property (readonly) short railDirection;
@property (readonly) double selfAdjustedSafeTimeForModeling;
@property (readonly) char isNegativePowerSupported;
@property char logRail;
@property char cacheOn;
@property (retain) NSArray * cacheResults;
@property struct _PLTimeIntervalRange cacheTimeRange;
@property (retain, nonatomic) PLEntry * lastSnapshot;

+ (PLRail *)entryEventNoneDefinitionRail;
+ (char)isSnapRail:(id)arg0;
+ (NSString *)getSnappedRailName:(NSString *)arg0;
+ (double)getEnergyInRail:(id)arg0 inTimeRange:(struct _PLTimeIntervalRange)arg1;
+ (NSString *)railFromRailName:(NSString *)arg0;
+ (NSArray *)entryEventNoneDefinitions;
+ (NSString *)snapRailFromRailName:(NSString *)arg0;
+ (void)safeGuardAllRails;

- (void)setLastSnapshot:(PLEntry *)arg0;
- (PLEntry *)lastSnapshot;
- (void).cxx_destruct;
- (void)clearCache;
- (double)timeOfLastSnapshot;
- (short)railDirection;
- (char)logRail;
- (id)trimBatchSnapShots:(id)arg0;
- (char)isRailPowerEqual:(double)arg0 withOtherPower:(double)arg1;
- (char)isNegativePowerSupported;
- (id)generateSnapshotEntry:(id)arg0 withPower:(double)arg1;
- (char)useCachedDataForTimeInterval:(struct _PLTimeIntervalRange)arg0;
- (NSArray *)cacheResults;
- (NSObject *)getSnapshotsInRange:(struct _PLTimeIntervalRange)arg0;
- (char)cacheOn;
- (struct _PLTimeIntervalRange)cacheTimeRange;
- (void)logCacheStats:(id)arg0;
- (void)setCacheResults:(NSArray *)arg0;
- (void)setCacheTimeRange:(struct _PLTimeIntervalRange)arg0;
- (void)setCacheOn:(char)arg0;
- (PLRail *)initWithName:(NSString *)arg0 withRailDirection:(short)arg1 withNegativePowerSupport:(char)arg2 isLoggingOnByDefault:(char)arg3;
- (void)batchAddSnapshots:(id)arg0;
- (NSObject *)getSnapshotTimeInRange:(struct _PLTimeIntervalRange)arg0;
- (void)cacheRailDataForTimeInterval:(struct _PLTimeIntervalRange)arg0;
- (double)selfAdjustedSafeTimeForModeling;
- (void)setLogRail:(char)arg0;
- (void)addSnapshot:(NSObject *)arg0 withPower:(double)arg1;
- (void)initOperatorDependancies;
- (NSDate *)trimmingConditionsForRolloverAtDate:(NSDate *)arg0;
- (NSString *)railName;
- (double)safeTimeForModeling;
- (double)getEnergyInRange:(struct _PLTimeIntervalRange)arg0;

@end
