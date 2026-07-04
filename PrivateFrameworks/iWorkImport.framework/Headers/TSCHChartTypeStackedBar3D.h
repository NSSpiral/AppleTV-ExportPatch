/* Runtime dump - TSCHChartTypeStackedBar3D
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartTypeStackedBar3D : TSCH3DChartType

- (NSObject *)defaultSeriesType:(unsigned int)arg0;
- (NSString *)userInterfaceName;
- (NSSet *)imageWithPreset:(NSSet *)arg0 target:(int)arg1 imageSize:(struct CGSize)arg2 imageScale:(float)arg3 swatchFrame:(struct CGRect)arg4 documentRoot:(struct CGSize)arg5 shouldCache:(char *)arg6;
- (char)supportsBevels;
- (NSDictionary *)titlePositionerWithInfo:(NSDictionary *)arg0 scene:(NSObject *)arg1;
- (float)valueAxisTitleRotation;
- (float)categoryAxisTitleRotation;
- (struct TSCH3DChartRotationLimit)rotation3DLimit;
- (TSCHChartTypeStackedBar3D *)init;

@end
