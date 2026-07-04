/* Runtime dump - PAExecutableAggregator
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAExecutableAggregator : PASampleAggregator

- (NSURLSessionTask *)newAggregatedTaskForIdentificationPurposesWithSampleTask:(NSObject *)arg0;
- (NSURLSessionTask *)newAggregatedTaskForSampleTask:(NSObject *)arg0 atTimestampIndex:(unsigned int)arg1;
- (void)filterToWallTimeRangeStart:(double)arg0 end:(double)arg1;

@end
