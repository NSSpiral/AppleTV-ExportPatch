/* Runtime dump - TSCHChartSeriesTypeScatter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartSeriesTypeScatter : TSCHChartSeriesType

- (NSObject *)elementBuilder;
- (unsigned int)valueDimensions;
- (char)supportsValueLabelsAxisOption;
- (id)axisTypesForValueLabels;
- (char)supportsValueLabelsSeriesName;
- (NSDictionary *)genericToSpecificPropertyMap;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg0;
- (char)supportsSeriesFill;
- (char)supportsFillSetFill;
- (char)supportsSymbolDrawing;
- (id)p_supportedSymbolsIfSymbolsSupported;
- (int)legendBadgeType;
- (id)propertiesForReferenceColors;
- (char)supportsSymbolFillForSymbolType:(int)arg0;
- (char)supportsLineTypeNone;
- (char)supportsLineConnectionStyle;
- (NSArray *)supportedValueLabelsAxisCombinations;
- (id)g_genericToSpecificPropertyMapScatter;
- (TSCHChartSeriesTypeScatter *)init;

@end
