/* Runtime dump - PLMomentAnalyzerQueue
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentAnalyzerQueue : NSObject
{
    double _firstPingSinceReset;
    double _lastPingSinceReset;
    NSMutableSet * _momentListIdsToProcess;
    double _minimumInterval;
    double _maximumInterval;
}

@property (nonatomic) double minimumInterval;
@property (nonatomic) double maximumInterval;
@property (readonly, nonatomic) char hasWork;
@property (readonly, nonatomic) char shouldProcessWork;

- (void)dealloc;
- (PLMomentAnalyzerQueue *)init;
- (char)hasWork;
- (void)enqueueMomentListIds:(id)arg0;
- (char)shouldProcessWork;
- (id)dequeueMomentListIdsForProcessing;
- (void)setMinimumInterval:(double)arg0;
- (void)setMaximumInterval:(double)arg0;
- (double)minimumInterval;
- (double)maximumInterval;

@end
