/* Runtime dump - TSCH3DChartStackedColumnSceneObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartStackedColumnSceneObject : TSCH3DChartColumnSceneObject

+ (NSObject *)chartSeriesType;
+ (char)isHorizontalChart;
+ (char)isStacked;

- (void)sortElements:(struct vector<TSCH3D::RenderElementInfo, std::__1::allocator<TSCH3D::RenderElementInfo> > *)arg0 pipeline:(struct RenderElementInfo *)arg1;

@end
