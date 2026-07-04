/* Runtime dump - PAAggregatedDispatchQueue
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAAggregatedDispatchQueue : PAAggregatedThreadAndDispatchQueue

- (void)addStack:(TSTStrokeLayerMergedStack *)arg0;
- (PAAggregatedDispatchQueue *)initWithAggregatedTask:(PAAggregatedProcessInstance *)arg0 andDispatchQueueId:(unsigned long long)arg1;
- (NSObject *)copyStringForMissingSamplesBeforeContiguousThreadArrayIndex:(unsigned int)arg0;

@end
