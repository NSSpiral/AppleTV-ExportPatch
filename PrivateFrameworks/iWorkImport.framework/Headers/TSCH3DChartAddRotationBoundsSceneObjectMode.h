/* Runtime dump - TSCH3DChartAddRotationBoundsSceneObjectMode
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartAddRotationBoundsSceneObjectMode : TSCH3DChartAddBoundsSceneObjectMode
{
    int mRotationType;
}

@property (nonatomic) int rotationType;

- (void)getBounds:(TSCH3DGetSelectionKnobsPositionsPipelineMergeLabelBounds *)arg0;
- (double)p_radiusFromBounds:(struct box<glm::detail::tvec3<float> > *)arg0 pivot:(struct box<glm::detail::tvec3<float> >)arg1;
- (void)p_submitGeometryForChartBounds:(struct box<glm::detail::tvec3<float> > *)arg0 pivot:(struct box<glm::detail::tvec3<float> >)arg1 thicknessIndex:(struct tvec3<float>)arg2 pipeline:(TSCH3DSceneRenderPipeline *)arg3;
- (int)rotationType;
- (void)setRotationType:(int)arg0;

@end
