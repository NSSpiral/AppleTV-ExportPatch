/* Runtime dump - TSCHChartSeriesTypeStackedBar
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartSeriesTypeStackedBar : TSCHChartSeriesTypeBar

- (NSObject *)elementBuilder;
- (NSDictionary *)genericToSpecificPropertyMap;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg0;
- (char)supportsBarGap;
- (NSArray *)legalChartLabelPositions;
- (NSObject *)userInterfaceNameForLabelPosition:(NSObject *)arg0;
- (unsigned int)adjustLabelPosition:(unsigned int)arg0 forAxisValue:(double)arg1 intercept:(double)arg2;
- (double)beginValueForSeries:(unsigned int)arg0 index:(unsigned int)arg1 unitSpaceIntercept:(double)arg2 relativelyPositive:(char)arg3 valueAxis:(TSCHChartValueAxis *)arg4;
- (double)beginDataValueForSeries:(id)arg0 groupIndex:(unsigned int)arg1 valueAxisID:(NSObject *)arg2;
- (unsigned int)seriesIndexForDrawing:(id)arg0;
- (unsigned int)numberOfSeriesForCalculatingBarWidth:(unsigned int)arg0;
- (id)g_genericToSpecificPropertyMapStackedBar;
- (TSCHChartSeriesTypeStackedBar *)init;

@end
