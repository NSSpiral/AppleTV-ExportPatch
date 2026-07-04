/* Runtime dump - TSCH3DChartAbstractBarSceneObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartAbstractBarSceneObject : TSCH3DChartElementSceneObject

+ (Class)propertiesClass;
+ (void)setLowDetailedGeometriesForScene:(NSObject *)arg0;

- (float)chartMinZForScene:(NSObject *)arg0;
- (float)depthForScene:(NSObject *)arg0;
- (void)renderLabelsSceneObject:(NSObject *)arg0 pipeline:(TSCH3DSceneRenderPipeline *)arg1 enumerator:(NSEnumerator *)arg2 properties:(NSDictionary *)arg3;
- (char)shouldRenderEachValue;
- (void)updateElementEffectsStates:(struct RenderElementInfo *)arg0 depthToWidthRatio:(struct RenderElementInfo)arg1;
- (void)sortElements:(struct vector<TSCH3D::RenderElementInfo, std::__1::allocator<TSCH3D::RenderElementInfo> > *)arg0 pipeline:(struct RenderElementInfo *)arg1;
- (struct tvec3<float>)adjustedScaleForInfoChartScale:(struct tvec3<float> *)arg0 scene:(struct tvec3<float>)arg1;
- (void)renderSeriesLabelsSceneObject:(NSObject *)arg0 pipeline:(TSCH3DSceneRenderPipeline *)arg1;
- (void)renderSeriesLabelsSceneObject:(NSObject *)arg0 pipeline:(TSCH3DSceneRenderPipeline *)arg1 enumerator:(NSEnumerator *)arg2 properties:(NSDictionary *)arg3;
- (struct tvec2<float>)p_valueLabelPaddingForLabelPosition:(unsigned int)arg0;
- (void)updateTilingEffect:(struct TexCoordTilingShaderEffectState *)arg0 series:(struct tvec2<float>)arg1 properties:(NSDictionary *)arg2 textureTiling:(TSCH3DImageTextureTiling *)arg3 areaSize:(NSObject *)arg4 element:(NSObject *)arg5;
- (struct tvec3<float>)sortingPositionForElement:(struct RenderElementInfo *)arg0;

@end
