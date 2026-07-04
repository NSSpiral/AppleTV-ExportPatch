/* Runtime dump - PLQLAccountingUtilities
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLQLAccountingUtilities : NSObject

+ (PLQLAccountingUtilities *)createAccountingBucketsForAccountingEvents:(id)arg0 inRange:(struct _PLTimeIntervalRange)arg1;
+ (char)GPSOnInRange:(struct _PLTimeIntervalRange)arg0;
+ (char)isAudioOnInRange:(struct _PLTimeIntervalRange)arg0;
+ (char)isScreenOnInRange:(struct _PLTimeIntervalRange)arg0;
+ (PLQLAccountingUtilities *)generateSnapRangesForRails:(id)arg0 inTimeRange:(struct _PLTimeIntervalRange)arg1 withBoundaries:(id)arg2;
+ (void)batchAndFlushSnapshotsForAllRailAdditions:(id)arg0;
+ (void)printRangeArray:(NSArray *)arg0;
+ (NSArray *)fuzzSnapRanges:(NSArray *)arg0;
+ (PLQLAccountingUtilities *)safeTimeForAccounting:(id)arg0;
+ (PLQLAccountingUtilities *)fuzzSnapRangesTake2:(id)arg0;
+ (char)wasAppInBackgroundInRange:(struct _PLTimeIntervalRange)arg0 bundleID:(NSString *)arg1;
+ (char)isAirplayMirroringInRange:(struct _PLTimeIntervalRange)arg0;
+ (double)sumOfAllRails:(id)arg0 inRange:(struct _PLTimeIntervalRange)arg1 withSnap:(char)arg2;
+ (PLQLAccountingUtilities *)genericAccountingQuerySetup:(id)arg0 withAGName:(NSString *)arg1 withRails:(PLCoreRail *)arg2 withAggKey:(NSString *)arg3 withQueryType:(short)arg4;
+ (PLQLAccountingUtilities *)genericAccountingQuerySetup:(id)arg0 withAGName:(NSString *)arg1 withRailsToBeAdded:(id)arg2 withRailsToBeSubtracted:(id)arg3 withAggKey:(NSString *)arg4 withQueryType:(short)arg5;
+ (PLQLAccountingUtilities *)genericPostAccountingQuerySetup:(id)arg0 withAGName:(NSString *)arg1 withRails:(PLCoreRail *)arg2 withAggKey:(NSString *)arg3 withQueryType:(short)arg4;
+ (PLQLAccountingUtilities *)genericPostAccountingQueryEventPointSetup:(id)arg0 withAGName:(NSString *)arg1 withRails:(PLCoreRail *)arg2 withAggKey:(NSString *)arg3 withQueryType:(short)arg4;
+ (PLQLAccountingUtilities *)safeTimeForModelingForRails:(id)arg0 withSnap:(char)arg1 withGasGauge:(char)arg2;
+ (void)generateSnappedRails:(id)arg0 withRails:(PLCoreRail *)arg1 inTimeRange:(struct _PLTimeIntervalRange)arg2 withBoundaries:(id)arg3 withLoggingArray:(NSArray *)arg4;
+ (double)totalEnergyInAccountedBuckets:(id)arg0;
+ (short)BBConditionInRange:(struct _PLTimeIntervalRange)arg0;
+ (char)isAirdropInRange:(struct _PLTimeIntervalRange)arg0;
+ (NSObject *)appsInForegroundInRange:(struct _PLTimeIntervalRange)arg0;
+ (NSObject *)appsInAirplayInRange:(struct _PLTimeIntervalRange)arg0;

@end
