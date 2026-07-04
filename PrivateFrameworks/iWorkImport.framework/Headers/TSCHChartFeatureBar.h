/* Runtime dump - TSCHChartFeatureBar
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartFeatureBar : TSCHChartFeatureCategory

- (<TSCH3DAxisLabelPositioner> *)valueLabelPositioner;
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
- (int)representativeGridValueAxisType;
- (int)labelOrientation;
- (char)supportsColumnShape;
- (NSString *)columnShapeUIName;
- (NSDictionary *)initialSceneWithChartInfo:(NSDictionary *)arg0 layoutSettings:(struct ?)arg1;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;
- (void)p_initializeAxisIDs;
- (char)isHorizontal;

@end
