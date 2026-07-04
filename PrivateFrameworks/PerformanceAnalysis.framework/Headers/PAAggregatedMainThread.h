/* Runtime dump - PAAggregatedMainThread
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAAggregatedMainThread : PAAggregatedThreadAndDispatchQueue

- (NSString *)debugDescription;
- (char)isMainThread;
- (PAAggregatedMainThread *)initWithAggregatedTask:(PAAggregatedProcessInstance *)arg0 andThreadId:(unsigned long long)arg1;
- (void)addStack:(TSTStrokeLayerMergedStack *)arg0;

@end
