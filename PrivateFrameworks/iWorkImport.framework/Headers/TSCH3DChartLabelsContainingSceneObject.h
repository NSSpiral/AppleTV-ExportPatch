/* Runtime dump - TSCH3DChartLabelsContainingSceneObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartLabelsContainingSceneObject : TSCH3DSceneObject
{
    TSCH3DLabelsRenderer * mLabelsRenderer;
}

- (void)getBounds:(TSCH3DGetSelectionKnobsPositionsPipelineMergeLabelBounds *)arg0;
- (NSObject *)labelsRenderer;
- (void)renderLabelRenderInfo:(struct ChartLabelsContainingLabelRenderInfo *)arg0;
- (void)renderLabelsResourcesSessionWithResources:(NSArray *)arg0 expectedSize:(struct tvec2<int> *)arg1 pipeline:(struct tvec2<int>)arg2 renderBlock:(id /* block */)arg3;
- (void)postRenderBounds:(id)arg0;
- (void)renderLabels:(id)arg0;
- (void)renderAnnotatedLabels:(id)arg0;
- (int)knobsModeForLabelType:(int)arg0 scene:(NSObject *)arg1;
- (void)dispatchElementLabelHandler:(id /* block */)arg0;
- (void)p_render:(id)arg0 selector:(SEL)arg1;
- (void)postrender:(id)arg0;
- (void)primeRenderCaches:(id)arg0;
- (void)postGetBounds:(id)arg0;
- (void)rayPick:(id)arg0;
- (void)getSelectionKnobsPositions:(id)arg0;
- (void)getSceneObjectElementsBounds:(id)arg0;
- (void)render:(id)arg0;
- (void)dealloc;
- (TSCH3DChartLabelsContainingSceneObject *)init;

@end
