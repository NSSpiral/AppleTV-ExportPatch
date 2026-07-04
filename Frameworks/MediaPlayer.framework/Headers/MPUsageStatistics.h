/* Runtime dump - MPUsageStatistics
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPUsageStatistics : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _domain;
    NSString * _lastAggregateStatisticsDisplayCountKey;
    double _lastAggregateStatisticsDisplayCountTime;
}

+ (MPUsageStatistics *)sharedStatistics;

- (void)incrementViewDisplayCountForViewController:(BRController *)arg0;
- (void)incrementViewDisplayCountForKey:(NSString *)arg0;
- (void)setAggregateStatisticsDomain:(NSString *)arg0;
- (MPUsageStatistics *)init;
- (NSString *)domain;
- (void).cxx_destruct;

@end
