/* Runtime dump - PLTimeReferenceDynamic
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLTimeReferenceDynamic : PLTimeReference
{
    NSMutableDictionary * _timeChangeBlocks;
    NSDate * _lastQueryTime;
    NSMutableArray * _offsetHistory;
    double _tooFarInFutureDistance;
    double _tooFarInPastDistance;
    double _accumulatedError;
}

@property (retain) NSMutableDictionary * timeChangeBlocks;
@property double tooFarInFutureDistance;
@property double tooFarInPastDistance;
@property (retain) NSDate * lastQueryTime;
@property double accumulatedError;
@property (retain) NSMutableArray * offsetHistory;

+ (double)nearestDistanceFromDate:(NSDate *)arg0 toRegionWithStartDate:(NSDate *)arg1 andEndDate:(NSDate *)arg2;

- (void)setOffset:(double)arg0;
- (void).cxx_destruct;
- (PLTimeReferenceDynamic *)initWithTimeManager:(<PLTimeReferenceManager> *)arg0 entryDefinitionKey:(NSString *)arg1 timeReferenceType:(int)arg2;
- (void)setTooFarInFutureDistance:(double)arg0;
- (void)setTooFarInPastDistance:(double)arg0;
- (void)setLastQueryTime:(NSDate *)arg0;
- (void)checkForTimeChangeWithCurrentTime:(id)arg0;
- (void)registerForTimeChangedNotification;
- (void)registerForTimeChangedCallbackWithIdentifier:(NSString *)arg0 usingBlock:(id /* block */)arg1;
- (void)initializeOffsetWithEntry:(struct archive_entry *)arg0;
- (id)removeTimeOffsetFromReferenceTime:(id)arg0;
- (void)unregisterForTimeChangedCallbackWithIdentifier:(NSString *)arg0;
- (NSMutableDictionary *)timeChangeBlocks;
- (NSMutableArray *)offsetHistory;
- (id)newOffsetEntry;
- (double)accumulatedError;
- (void)setAccumulatedError:(double)arg0;
- (void)cleanupOffsetHistory;
- (void)notifyTimeChange:(double)arg0;
- (void)setOffsetHistory:(NSMutableArray *)arg0;
- (double)tooFarInFutureDistance;
- (double)tooFarInPastDistance;
- (char)shouldQueryCurrentTime;
- (NSDate *)lastQueryTime;
- (void)setTimeChangeBlocks:(NSMutableDictionary *)arg0;

@end
