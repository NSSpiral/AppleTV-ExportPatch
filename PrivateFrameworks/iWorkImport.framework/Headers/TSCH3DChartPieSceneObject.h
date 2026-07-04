/* Runtime dump - TSCH3DChartPieSceneObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartPieSceneObject : TSCH3DChartElementSceneObject

+ (float)geometrySpaceRadius;
+ (unsigned int)p_boundsStepsForAngle:(double)arg0;
+ (TSCH3DChartPieSceneObject *)p_boundsDataBufferWithDepthFactor:(float)arg0 angleRange:(struct range<double> *)arg1 includeEndPoints:(struct range<double>)arg2;
+ (TSCH3DChartPieSceneObject *)p_wholePieBounds;
+ (float)calculateHalfAngleForSeries:(id)arg0;
+ (TSCH3DChartPieSceneObject *)createGeometryWithStartAngle:(float)arg0 endAngle:(float)arg1 bevel:(char)arg2 bevelEdges:(char)arg3;
+ (NSObject *)chartSeriesType;
+ (Class)propertiesClass;
+ (char)shouldCreateMeshSeriesStorage;
+ (NSObject *)wholePieBoundsResource;
+ (TSCH3DChartPieSceneObject *)createBoundsForSeries:(id)arg0;
+ (struct MeshData)createMeshForSeries:(id)arg0;

- (void)updateTilingEffect:(struct TexCoordTilingShaderEffectState *)arg0 properties:(struct tvec2<float>)arg1 textureTiling:(TSCH3DImageTextureTiling *)arg2 depth:(id)arg3 percentOfTotal:(id)arg4;
- (void)renderLabelsSceneObject:(NSObject *)arg0 pipeline:(TSCH3DSceneRenderPipeline *)arg1 enumerator:(NSEnumerator *)arg2 properties:(NSDictionary *)arg3;
- (char)shouldRenderEachValue;
- (void)updateElementEffectsStates:(struct RenderElementInfo *)arg0 depthToWidthRatio:(struct RenderElementInfo)arg1;
- (float)explosionAtElementIndex:(struct tvec2<int> *)arg0 forScene:(struct tvec2<int>)arg1;
- (void)setExplosion:(float)arg0 atElementIndex:(struct tvec2<int> *)arg1 forScene:(struct tvec2<int>)arg2;
- (char)transparencyDepthMask;
- (void)sortElements:(struct vector<TSCH3D::RenderElementInfo, std::__1::allocator<TSCH3D::RenderElementInfo> > *)arg0 pipeline:(struct RenderElementInfo *)arg1;
- (Class)chartBoundsLayoutSceneDelegateClass;
- (Class)resizer3DClass;
- (Class)getBounds3DClass;
- (struct EdgeDetectionParameters)edgeDetectionParameters;

@end
