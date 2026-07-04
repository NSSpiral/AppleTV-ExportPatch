/* Runtime dump - TSCHChartSeriesTypeBar
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartSeriesTypeBar : TSCHChartSeriesType

- (NSObject *)elementBuilder;
- (char)useInBarGapCalculations;
- (unsigned int)valueDimensions;
- (id)axisTypesForValueLabels;
- (NSDictionary *)genericToSpecificPropertyMap;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg0;
- (char)supportsSetGap;
- (char)supportsBarGap;
- (NSArray *)legalChartLabelPositions;
- (NSObject *)userInterfaceNameForLabelPosition:(NSObject *)arg0;
- (unsigned int)adjustLabelPosition:(unsigned int)arg0 forAxisValue:(double)arg1 intercept:(double)arg2;
- (char)chunkedBuildsIncludeInterceptValues;
- (NSArray *)supportedValueLabelsAxisCombinations;
- (id)g_genericToSpecificPropertyMapBar;
- (TSCHChartSeriesTypeBar *)init;
- (char)isVertical;

@end
