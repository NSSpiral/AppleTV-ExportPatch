/* Runtime dump - TSCHChartFeatureColumn
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartFeatureColumn : TSCHChartFeatureCategory

- (<TSCH3DAxisLabelPositioner> *)categoryLabelPositioner;
- (char)supportsSeriesLabels;
- (NSArray *)supportedAxisScales;
- (Class)stageClass;
- (Class)valueAxisClassForID:(NSObject *)arg0 scale:(int)arg1;
- (NSString *)defaultDataFileName;
- (float)sageMaxDepthRatio;
- (float)maxDepthRatio;
- (NSDictionary *)genericToSpecificPropertyMap;
- (NSString *)userInterfaceName;
- (Class)presetImagerClass;
- (char)supportsGroupedShadows;
- (char)supportsElementChunking;
- (char)supportsCategoryAxisSeriesNames;
- (int)labelOrientation;
- (char)supportsColumnShape;
- (NSString *)columnShapeUIName;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;

@end
