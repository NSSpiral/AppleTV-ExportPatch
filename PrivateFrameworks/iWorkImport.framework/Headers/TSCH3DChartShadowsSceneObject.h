/* Runtime dump - TSCH3DChartShadowsSceneObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartShadowsSceneObject : TSCH3DSceneObject

+ (void)invalidateShadowsForScene:(NSObject *)arg0;
+ (void)setShadowPlanePadding:(struct box<glm::detail::tvec3<float> >)arg0 forScene:(struct tvec3<float>)arg1;

- (void)renderShadowScene:(NSObject *)arg0;
- (struct tvec3<float>)calculateShadowCameraPosition:(float)arg0 center:(struct tvec3<float>)arg1 shadowQuality:(float)arg2 depthLimitAdjustment:(float)arg3;
- (void)getBounds:(TSCH3DGetSelectionKnobsPositionsPipelineMergeLabelBounds *)arg0;
- (NSObject *)propertiesForScene:(NSObject *)arg0;
- (void)prerender:(id)arg0;
- (struct box<glm::detail::tvec3<float> >)p_shadowPlanePaddingForScene:(NSObject *)arg0;
- (NSObject *)TSDShadowFromScene:(NSObject *)arg0;
- (void)prerenderShadows:(id)arg0 blurslack:(float)arg1 angle:(float)arg2 quality:(float)arg3 targetFBO:(id)arg4;
- (float)p_chartOpacityForScene:(NSObject *)arg0;
- (void)renderShadows:(id)arg0;
- (void)render:(id)arg0;
- (NSArray *)effects;

@end
