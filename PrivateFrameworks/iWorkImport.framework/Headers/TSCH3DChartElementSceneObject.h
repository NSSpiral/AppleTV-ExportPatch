/* Runtime dump - TSCH3DChartElementSceneObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartElementSceneObject : TSCH3DSceneObject

+ (NSString *)scenePropertiesKey;
+ (char)shouldCreateMeshSeriesStorage;
+ (TSCH3DChartElementSceneObject *)resetSeriesStorage:(id)arg0 forSeries:(CHDPieSeries *)arg1;
+ (struct TSCH3DScenePart)partWithEnumerator:(NSEnumerator *)arg0 layoutSettings:(struct ?)arg1;
+ (char)isHorizontalChart;
+ (void)setLowDetailedGeometriesForScene:(NSObject *)arg0;

- (void)getBounds:(TSCH3DGetSelectionKnobsPositionsPipelineMergeLabelBounds *)arg0;
- (NSDictionary *)selectionPathForInfo:(NSDictionary *)arg0 scene:(NSObject *)arg1 pickedPoint:(TSCH3DPickedPoint *)arg2;
- (void)renderLabelsSceneObject:(NSObject *)arg0 pipeline:(TSCH3DSceneRenderPipeline *)arg1;
- (float)depthForScene:(NSObject *)arg0;
- (NSString *)scenePropertiesKey;
- (char)shouldRenderEachValue;
- (char)transparencyDepthMask;
- (void)rayPick:(id)arg0;
- (void)getSelectionKnobsPositions:(id)arg0;
- (void)getSceneObjectElementsBounds:(id)arg0;
- (NSObject *)elementPropertiesFromScene:(NSObject *)arg0;
- (Class)resizer3DClass;
- (Class)getBounds3DClass;
- (void)prerenderElement:(struct RenderElementInfo *)arg0;
- (void)postrenderElement:(struct RenderElementInfo *)arg0;
- (char)shouldRenderSeries:(id)arg0;
- (struct tvec3<float>)adjustedScaleForInfoChartScale:(struct tvec3<float> *)arg0 scene:(struct tvec3<float>)arg1;
- (struct tvec2<float>)labelObjectSpacePosition:(unsigned int)arg0 axisValue:(double)arg1 intercept:(double)arg2;
- (void)updateLightingEffectsState:(NSObject *)arg0 scene:(NSObject *)arg1;
- (void)renderSeriesLabelsSceneObject:(NSObject *)arg0 pipeline:(TSCH3DSceneRenderPipeline *)arg1;
- (struct TSCH3DScenePart)scenePartForScene:(NSObject *)arg0;
- (void)setTransparencyBlendingForProcessor:(id)arg0;
- (char)applyEffectsForProperties:(NSDictionary *)arg0 series:(struct Transform * *)arg1 index:(struct tvec2<int> *)arg2 pipeline:(struct tvec2<int>)arg3 injectEffectsUsingBlock:(id /* block */)arg4;
- (struct ElementRenderPass)render:(struct RenderElementInfo *)arg0 pushMatrix:(struct RenderElementInfo)arg1 delayedPass:(char)arg2;
- (NSObject *)delegateFromScene:(NSObject *)arg0;
- (NSObject *)modelEnumeratorFromScene:(NSObject *)arg0;
- (float)chartOpacityForScene:(NSObject *)arg0;
- (char)p_isRenderPassDelayedForDelegate:(NSObject *)arg0;
- (char)shouldDelayForChartOpacity:(float)arg0;
- (void)p_processItems:(NSArray *)arg0 processItemsClass:(Class)arg1;
- (void)renderTwoPassGeometry:(char)arg0 processor:(TSCH3DRenderProcessor *)arg1 renderBlock:(id /* block */)arg2;
- (void)renderElement:(struct RenderElementInfo *)arg0;
- (struct GeometryResource)geometryForSeries:(id)arg0 index:(NSObject *)arg1 scene:(SEL)arg2;
- (struct tvec2<float>)labelOffset:(unsigned int)arg0 labelSize:(struct tvec2<float> *)arg1 textureSize:(struct tvec2<float>)arg2 dataSpaceValue:(struct tvec2<float> *)arg3;
- (void)render:(id)arg0;

@end
