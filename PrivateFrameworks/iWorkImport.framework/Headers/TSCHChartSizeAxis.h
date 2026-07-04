/* Runtime dump - TSCHChartSizeAxis
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartSizeAxis : TSCHChartAxis

- (double)doubleModelToAxisValue:(double)arg0 forSeries:(CHDPieSeries *)arg1;
- (void)updateGridValueTypeInterceptInAnalysis:(id)arg0;
- (void)adjustMinMaxForDataRangeInAnalysis:(id)arg0;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg0;
- (id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)arg0;
- (NSNumber *)userMin;
- (NSNumber *)userMax;

@end
