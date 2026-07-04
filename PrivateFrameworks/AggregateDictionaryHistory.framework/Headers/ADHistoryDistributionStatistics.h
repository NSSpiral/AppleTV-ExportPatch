/* Runtime dump - ADHistoryDistributionStatistics
 * Image: /System/Library/PrivateFrameworks/AggregateDictionaryHistory.framework/AggregateDictionaryHistory
 */

@interface ADHistoryDistributionStatistics : NSObject
{
    unsigned int * _histCounts;
    double _min;
    double _max;
    double _avg;
    double _rss;
    int _count;
    NSArray * _intervals;
}

@property (readonly, nonatomic) NSArray * intervals;

- (void)dealloc;
- (unsigned int)_determineHistBucketForValue:(double)arg0;
- (NSArray *)intervals;
- (ADHistoryDistributionStatistics *)initWithIntervals:(NSArray *)arg0;
- (void)calculateSummaryStatisticsWithEnumerator:(NSEnumerator *)arg0;
- (NSArray *)distributionArray;
- (id)histogramDict;

@end
