/* Runtime dump - TSCHChartFeatureArea
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartFeatureArea : TSCHChartFeatureCategory

- (<TSCH3DAxisLabelPositioner> *)categoryLabelPositioner;
- (NSArray *)supportedAxisScales;
- (Class)stageClass;
- (Class)valueAxisClassForID:(NSObject *)arg0 scale:(int)arg1;
- (NSString *)defaultDataFileName;
- (float)sageMaxDepthRatio;
- (float)maxDepthRatio;
- (NSDictionary *)genericToSpecificPropertyMap;
- (NSString *)userInterfaceName;
- (Class)presetImagerClass;
- (int)labelOrientation;
- (char)supportsInterSetDepthGap;
- (int)deprecated3DShadowSpecificProperty;

@end
