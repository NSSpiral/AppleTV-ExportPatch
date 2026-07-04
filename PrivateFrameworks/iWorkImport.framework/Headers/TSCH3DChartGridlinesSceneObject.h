/* Runtime dump - TSCH3DChartGridlinesSceneObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartGridlinesSceneObject : TSCH3DSceneObject
{
    TSCH3DPrefilteredLineRenderer * mRenderer;
}

+ (struct TSCH3DScenePart)partWithAxes:(id)arg0;

- (void)getBounds:(TSCH3DGetSelectionKnobsPositionsPipelineMergeLabelBounds *)arg0;
- (void)postrender:(id)arg0;
- (void)primeRenderCaches:(id)arg0;
- (void)postGetBounds:(id)arg0;
- (struct tmat4x4<float>)p_gridlineTransformForPipeline:(NSObject *)arg0;
- (char)p_shouldRenderInFrontForPipeline:(NSObject *)arg0;
- (void)p_render:(id)arg0;
- (void)render:(id)arg0;
- (void)dealloc;
- (TSCH3DChartGridlinesSceneObject *)init;
- (NSArray *)effects;

@end
