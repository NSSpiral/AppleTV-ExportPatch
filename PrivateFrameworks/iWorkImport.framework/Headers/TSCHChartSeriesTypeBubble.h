/* Runtime dump - TSCHChartSeriesTypeBubble
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartSeriesTypeBubble : TSCHChartSeriesTypeScatter

- (NSObject *)elementBuilder;
- (unsigned int)valueDimensions;
- (id)axisTypesForValueLabels;
- (NSDictionary *)genericToSpecificPropertyMap;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg0;
- (char)supportsFillSetFill;
- (int)fillSetFillProperty;
- (NSArray *)legalChartLabelPositions;
- (int)legendBadgeType;
- (id)propertiesForReferenceColors;
- (char)supportsSeriesStroke;
- (char)supportsSymbolTypeEditing;
- (char)supportsLineConnectionStyle;
- (int)defaultSymbolType;
- (NSArray *)supportedValueLabelsAxisCombinations;
- (NSString *)inspectorLocalizedValueLabelsTabName;
- (NSString *)inspectorLocalizedValueLabelsDisclosureTitle;
- (id)g_genericToSpecificPropertyMapBubble;
- (TSCHChartSeriesTypeBubble *)init;

@end
