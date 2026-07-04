/* Runtime dump - TSCHChartStackedValueAxis
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartStackedValueAxis : TSCHChartValueAxis

- (double)doubleModelToAxisValue:(double)arg0 forSeries:(CHDPieSeries *)arg1;
- (char)supportsReferenceLines;
- (void)updateGridValueTypeInterceptInAnalysis:(id)arg0;
- (void)updateMultiDataModelAxisAnalysis:(id)arg0;
- (double)doubleAxisToModelValue:(double)arg0;
- (void)updateModelAxisAnalysis:(id)arg0;
- (double)unitSpaceValueForSeries:(id)arg0 index:(unsigned int)arg1 min:(double)arg2 max:(double)arg3;
- (double *)unitSpaceValuesForSeries:(id)arg0 indexes:(struct _NSRange)arg1 min:(double)arg2 max:(double)arg3;
- (double)interceptForAxis:(id)arg0;
- (id)p_orthogonalAxisForSeries:(id)arg0;

@end
