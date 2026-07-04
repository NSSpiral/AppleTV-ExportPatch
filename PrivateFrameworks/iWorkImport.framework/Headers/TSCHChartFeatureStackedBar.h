/* Runtime dump - TSCHChartFeatureStackedBar
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartFeatureStackedBar : TSCHChartFeatureBar

- (char)supportsSeriesLabels;
- (NSArray *)supportedAxisScales;
- (Class)valueAxisClassForID:(NSObject *)arg0 scale:(int)arg1;
- (NSString *)defaultDataFileName;
- (float)sageMaxDepthRatio;
- (float)maxDepthRatio;
- (NSDictionary *)genericToSpecificPropertyMap;
- (NSString *)userInterfaceName;
- (int)stackingSignRule;
- (Class)presetImagerClass;
- (char)drawValueLabelsForZero;
- (char)supportsTrendLines;
- (char)supportsCategoryAxisSeriesNames;

@end
