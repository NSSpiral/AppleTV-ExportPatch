/* Runtime dump - TSCH3DChartBoundsLayoutSceneDelegatePie
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartBoundsLayoutSceneDelegatePie : TSCH3DChartBoundsLayoutSceneDelegate

- (NSArray *)interestedClasses;
- (char)willBeginProcessingSceneObject:(NSObject *)arg0;
- (void)didEndProcessingSceneObject:(NSObject *)arg0;
- (struct ElementRenderPass)renderPassForSceneObject:(NSObject *)arg0;
- (char)willProcessElements:(id)arg0 sceneObject:(TSCH3DSceneObject *)arg1 pipeline:(TSCH3DSceneRenderPipeline *)arg2;
- (void)didProcessElements:(id)arg0 sceneObject:(TSCH3DSceneObject *)arg1 pipeline:(TSCH3DSceneRenderPipeline *)arg2;
- (char)willProcessElement:(struct RenderElementInfo *)arg0 sceneObject:(struct RenderElementInfo)arg1;
- (struct ElementRenderPass)renderPassForElement:(struct RenderElementInfo *)arg0 sceneObject:(struct RenderElementInfo)arg1;
- (char)willUpdateElementEffectsStatesForElement:(struct RenderElementInfo *)arg0 sceneObject:(struct RenderElementInfo)arg1;
- (void)didTransformElement:(struct RenderElementInfo *)arg0 sceneObject:(struct RenderElementInfo)arg1;
- (char)willRenderElement:(struct RenderElementInfo *)arg0 sceneObject:(struct RenderElementInfo)arg1;
- (char)willSubmitElement:(struct RenderElementInfo *)arg0 sceneObject:(struct RenderElementInfo)arg1;

@end
