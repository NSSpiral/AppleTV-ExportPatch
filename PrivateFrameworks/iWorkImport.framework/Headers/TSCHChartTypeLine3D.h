/* Runtime dump - TSCHChartTypeLine3D
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartTypeLine3D : TSCH3DChartType

- (NSObject *)defaultSeriesType:(unsigned int)arg0;
- (NSString *)defaultDataFileName;
- (NSString *)userInterfaceName;
- (NSSet *)imageWithPreset:(NSSet *)arg0 target:(int)arg1 imageSize:(struct CGSize)arg2 imageScale:(float)arg3 swatchFrame:(struct CGRect)arg4 documentRoot:(struct CGSize)arg5 shouldCache:(char *)arg6;
- (char)supportsElementChunking;
- (struct TSCH3DChartRotationLimit)rotation3DLimit;
- (TSCHChartTypeLine3D *)init;

@end
