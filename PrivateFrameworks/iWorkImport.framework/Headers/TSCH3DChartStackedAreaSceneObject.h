/* Runtime dump - TSCH3DChartStackedAreaSceneObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartStackedAreaSceneObject : TSCH3DChartAreaSceneObject

+ (NSObject *)chartSeriesType;
+ (float)depthLimitFactorForSeriesCount:(int)arg0 maxLimitingSeries:(int)arg1;
+ (float)chartSeriesDepth;
+ (char)supportsChartSeriesDepthOffset;
+ (float)chartSeriesPolygonOffset;

- (float)depthForScene:(NSObject *)arg0;
- (char)transparencyDepthMask;
- (void)sortElements:(struct vector<TSCH3D::RenderElementInfo, std::__1::allocator<TSCH3D::RenderElementInfo> > *)arg0 pipeline:(struct RenderElementInfo *)arg1;

@end
