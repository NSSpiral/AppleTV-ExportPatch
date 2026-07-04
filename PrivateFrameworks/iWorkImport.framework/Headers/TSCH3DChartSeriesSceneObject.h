/* Runtime dump - TSCH3DChartSeriesSceneObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartSeriesSceneObject : TSCH3DChartElementSceneObject

+ (Class)propertiesClass;
+ (char)shouldCreateMeshSeriesStorage;
+ (TSCH3DChartSeriesSceneObject *)createBoundsForSeries:(id)arg0;
+ (float)depthLimitFactorForSeriesCount:(int)arg0 maxLimitingSeries:(int)arg1;
+ (float)chartSeriesPolygonOffset;

- (float)shadowCameraDepthLimitAdjustmentFactorForScene:(NSObject *)arg0;
- (float)chartMinZForScene:(NSObject *)arg0;
- (float)depthForScene:(NSObject *)arg0;
- (void)renderLabelsSceneObject:(NSObject *)arg0 pipeline:(TSCH3DSceneRenderPipeline *)arg1 enumerator:(NSEnumerator *)arg2 properties:(NSDictionary *)arg3;
- (void)updateElementEffectsStates:(struct RenderElementInfo *)arg0 depthToWidthRatio:(struct RenderElementInfo)arg1;
- (char)transparencyDepthMask;
- (void)sortElements:(struct vector<TSCH3D::RenderElementInfo, std::__1::allocator<TSCH3D::RenderElementInfo> > *)arg0 pipeline:(struct RenderElementInfo *)arg1;
- (void)updateTilingEffect:(struct TexCoordTilingShaderEffectState *)arg0 properties:(struct tvec2<float>)arg1 textureTiling:(TSCH3DImageTextureTiling *)arg2 size:(struct CGSize)arg3;
- (void)prerenderElement:(struct RenderElementInfo *)arg0;
- (void)postrenderElement:(struct RenderElementInfo *)arg0;
- (char)shouldRenderSeries:(id)arg0;

@end
