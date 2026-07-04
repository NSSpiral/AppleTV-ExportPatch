/* Runtime dump - TSCH3DChartSelectedElementSceneObjectDelegate
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartSelectedElementSceneObjectDelegate : NSObject <TSCH3DChartAllElementSceneObjectDelegate>
{
    unsigned int mSelectedSeriesIndex;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

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
- (TSCH3DChartSelectedElementSceneObjectDelegate *)initWithSelectedSeriesIndex:(unsigned int)arg0;

@end
