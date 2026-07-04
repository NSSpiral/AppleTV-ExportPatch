/* Runtime dump - TSCH3DChartStageSceneObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartStageSceneObject : TSCH3DSceneObject
{
    TSCH3DSceneObject * mMain;
}

+ (TSCH3DChartStageSceneObject *)objectWithMain:(TSCH3DSceneObject *)arg0;

- (void)getBounds:(TSCH3DGetSelectionKnobsPositionsPipelineMergeLabelBounds *)arg0;
- (void)postrender:(id)arg0;
- (void)postGetBounds:(id)arg0;
- (void)rayPick:(id)arg0;
- (void)getSelectionKnobsPositions:(id)arg0;
- (void)getSceneObjectElementsBounds:(id)arg0;
- (TSCH3DChartStageSceneObject *)initWithMain:(TSCH3DSceneObject *)arg0;
- (void)prerender:(id)arg0;
- (void)render:(id)arg0 selector:(SEL)arg1;
- (void)render:(id)arg0;
- (void)dealloc;

@end
