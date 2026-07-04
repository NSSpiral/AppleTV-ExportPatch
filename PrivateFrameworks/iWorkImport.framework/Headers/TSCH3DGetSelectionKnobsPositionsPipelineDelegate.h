/* Runtime dump - TSCH3DGetSelectionKnobsPositionsPipelineDelegate
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGetSelectionKnobsPositionsPipelineDelegate : NSObject <TSCHUnretainedParent, TSCH3DSceneDelegate, TSCH3DChartAllSceneObjectDelegate, TSCH3DChartElementSceneObjectGeometryDelegate>
{
    TSCH3DChartRep * mRep;
    NSArray * mSelection;
    NSMutableArray * mProjectedPoints;
    TSCH3DGeometry * mGeometry;
    NSMutableDictionary * mLabelsBoundsForMerging;
    TSCH3DScene * mScene;
    int mCurrentLabelType;
    int mKnobsMode;
}

@property (retain, nonatomic) NSMutableArray * projectedPoints;
@property (retain, nonatomic) TSCH3DGeometry * geometry;
@property (readonly, nonatomic) char shouldMerge;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)clearParent;
- (char)willSubmitLabelType:(int)arg0 boundsIndex:(int)arg1 alignment:(unsigned int)arg2 elementIndex:(unsigned int)arg3 forSceneObject:(NSObject *)arg4;
- (void)setOffset:(struct tvec3<float> *)arg0 labelType:(struct tvec3<float>)arg1 boundsIndex:(int)arg2 forSceneObject:(int)arg3;
- (void)didGenerateShaderEffects:(id)arg0 sceneObject:(TSCH3DSceneObject *)arg1 pipeline:(TSCH3DSceneRenderPipeline *)arg2;
- (char)willSubmitSceneObject:(NSObject *)arg0 pipeline:(TSCH3DSceneRenderPipeline *)arg1;
- (void)didSubmitSceneObject:(NSObject *)arg0 pipeline:(TSCH3DSceneRenderPipeline *)arg1;
- (void)labelsResourcesSessionWillBeginForSceneObject:(NSObject *)arg0 pipeline:(TSCH3DSceneRenderPipeline *)arg1;
- (void)labelsResourcesSessionWillEndForSceneObject:(NSObject *)arg0 pipeline:(TSCH3DSceneRenderPipeline *)arg1;
- (char)willSubmitLabelForSceneObject:(NSObject *)arg0 labelRenderInfo:(struct ChartLabelsContainingLabelRenderInfo *)arg1;
- (void)updateExternalLabelAttribute:(struct ExternalLabelAttribute *)arg0 sceneObject:(TSCH3DSceneObject *)arg1 labelRenderInfo:(struct ChartLabelsContainingLabelRenderInfo *)arg2;
- (void)willRunForScene:(NSObject *)arg0 pipeline:(TSCH3DSceneRenderPipeline *)arg1;
- (void)didRunForScene:(NSObject *)arg0 pipeline:(TSCH3DSceneRenderPipeline *)arg1;
- (char)willBeginProcessingSceneObject:(NSObject *)arg0;
- (void)didEndProcessingSceneObject:(NSObject *)arg0;
- (char)renderPassDelayDisallowedForSceneObject:(NSObject *)arg0 pipeline:(TSCH3DSceneRenderPipeline *)arg1;
- (struct ElementRenderPass)renderPassForSceneObject:(NSObject *)arg0;
- (char)willProcessSeries:(id)arg0 sceneObject:(TSCH3DSceneObject *)arg1 pipeline:(TSCH3DSceneRenderPipeline *)arg2;
- (void)didGenerateShaderEffectsForSeriesAtIndex:(struct tvec2<int> *)arg0 effects:(struct tvec2<int>)arg1 sceneObject:(TSCH3DSceneObject *)arg2 pipeline:(TSCH3DSceneRenderPipeline *)arg3;
- (char)willProcessElements:(id)arg0 sceneObject:(TSCH3DSceneObject *)arg1 pipeline:(TSCH3DSceneRenderPipeline *)arg2;
- (void)didProcessElements:(id)arg0 sceneObject:(TSCH3DSceneObject *)arg1 pipeline:(TSCH3DSceneRenderPipeline *)arg2;
- (char)willProcessElement:(struct RenderElementInfo *)arg0 sceneObject:(struct RenderElementInfo)arg1;
- (struct ElementRenderPass)renderPassForElement:(struct RenderElementInfo *)arg0 sceneObject:(struct RenderElementInfo)arg1;
- (char)willUpdateElementEffectsStatesForElement:(struct RenderElementInfo *)arg0 sceneObject:(struct RenderElementInfo)arg1;
- (void)didTransformElement:(struct RenderElementInfo *)arg0 sceneObject:(struct RenderElementInfo)arg1;
- (char)willRenderElement:(struct RenderElementInfo *)arg0 sceneObject:(struct RenderElementInfo)arg1;
- (char)willSubmitElement:(struct RenderElementInfo *)arg0 sceneObject:(struct RenderElementInfo)arg1;
- (TSCH3DGetSelectionKnobsPositionsPipelineDelegate *)initWithRep:(NSObject *)arg0 selection:(struct _NSRange *)arg1;
- (void)setProjectedPoints:(NSMutableArray *)arg0;
- (NSMutableArray *)projectedPoints;
- (id)p_selectedSeries;
- (char)p_labelSelectedForType:(int)arg0 alignment:(unsigned int)arg1 elementIndex:(int)arg2;
- (char)willSubmitGeometry:(NSObject *)arg0;
- (void)addLabelBoundsForMerging:(struct CGRect)arg0;
- (void)dealloc;
- (TSCH3DGeometry *)geometry;
- (void)setGeometry:(TSCH3DGeometry *)arg0;
- (char)shouldMerge;

@end
