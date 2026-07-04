/* Runtime dump - TSCHChartTypePie3D
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartTypePie3D : TSCH3DChartType

- (<TSCH3DAxisLabelPositioner> *)valueLabelPositioner;
- (<TSCH3DAxisLabelPositioner> *)categoryLabelPositioner;
- (NSObject *)defaultSeriesType:(unsigned int)arg0;
- (NSString *)userInterfaceName;
- (NSSet *)imageWithPreset:(NSSet *)arg0 target:(int)arg1 imageSize:(struct CGSize)arg2 imageScale:(float)arg3 swatchFrame:(struct CGRect)arg4 documentRoot:(struct CGSize)arg5 shouldCache:(char *)arg6;
- (char)supportsGroupedShadows;
- (char)supportsBevels;
- (char)approximatesTitleAccommodationUsingLegendSize;
- (NSDictionary *)titlePositionerWithInfo:(NSDictionary *)arg0 scene:(NSObject *)arg1;
- (struct TSCH3DChartRotationLimit)rotation3DLimit;
- (TSCHChartTypePie3D *)init;

@end
