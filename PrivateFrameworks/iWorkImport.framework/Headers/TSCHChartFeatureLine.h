/* Runtime dump - TSCHChartFeatureLine
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartFeatureLine : TSCHChartFeatureCategory

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
- (char)supportsSymbolOverhang;
- (char)supportsElementChunking;
- (char)supportsConnectingLines;
- (int)labelOrientation;
- (char)supportsInterSetDepthGap;
- (int)deprecated3DShadowSpecificProperty;

@end
