/* Runtime dump - TSCHChartLogAxis
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartLogAxis : TSCHChartValueAxis

- (double)doubleModelToAxisValue:(double)arg0 forSeries:(CHDPieSeries *)arg1;
- (char)shouldAnalyzeAxisValue:(double)arg0;
- (void)updateGridValueTypeInterceptInAnalysis:(id)arg0;
- (double)doubleAxisToModelValue:(double)arg0;
- (void)adjustMinMaxForDataRangeInAnalysis:(id)arg0;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg0;
- (id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)arg0;
- (double)unitSpaceValueForDataSpaceValue:(double)arg0 min:(double)arg1 max:(double)arg2;
- (double)interceptForAxis:(id)arg0;
- (NSNumber *)userMin;
- (NSNumber *)userMax;
- (double)validateUserMinForDouble:(double)arg0;
- (double)validateUserMaxForDouble:(double)arg0;
- (id)p_orthogonalAxis;

@end
