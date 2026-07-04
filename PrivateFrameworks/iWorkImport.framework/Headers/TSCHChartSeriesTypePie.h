/* Runtime dump - TSCHChartSeriesTypePie
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartSeriesTypePie : TSCHChartSeriesType

- (NSObject *)elementBuilder;
- (unsigned int)valueDimensions;
- (id)axisTypesForValueLabels;
- (char)supportsValueLabelsSeriesName;
- (NSDictionary *)genericToSpecificPropertyMap;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg0;
- (NSArray *)legalChartLabelPositions;
- (NSObject *)userInterfaceNameForLabelPosition:(NSObject *)arg0;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg0 forSeries:(CHDPieSeries *)arg1;
- (int)legendBadgeType;
- (NSArray *)supportedValueLabelsAxisCombinations;
- (NSString *)inspectorLocalizedValueLabelsTabName;
- (NSString *)inspectorLocalizedValueLabelsDisclosureTitle;
- (id)g_genericToSpecificPropertyMapPie;
- (char)floatValueForLabelExplosion:(float *)arg0 series:(struct Transform * *)arg1;
- (TSCHChartSeriesTypePie *)init;

@end
