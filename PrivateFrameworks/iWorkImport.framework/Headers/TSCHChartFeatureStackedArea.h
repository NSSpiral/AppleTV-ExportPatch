/* Runtime dump - TSCHChartFeatureStackedArea
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartFeatureStackedArea : TSCHChartFeatureArea

- (NSArray *)supportedAxisScales;
- (Class)valueAxisClassForID:(NSObject *)arg0 scale:(int)arg1;
- (NSString *)defaultDataFileName;
- (float)sageMaxDepthRatio;
- (float)maxDepthRatio;
- (NSDictionary *)genericToSpecificPropertyMap;
- (NSString *)userInterfaceName;
- (int)stackingSignRule;
- (Class)presetImagerClass;
- (char)reverseSingleColumnLegendOrder;
- (char)drawValueLabelsForZero;
- (char)supportsTrendLines;
- (char)supportsSymbolOverhang;
- (char)supportsInterSetDepthGap;

@end
