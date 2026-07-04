/* Runtime dump - TSCH3DGetBoundsPipeline
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGetBoundsPipeline : TSCH3DSceneRenderPipeline

@property (readonly, nonatomic) struct ObjectBounds * bounds;

+ (NSObject *)pipelineWithScene:(NSObject *)arg0;
+ (NSObject *)pipelineWithScene:(NSObject *)arg0 renderProcessor:(TSCH3DRenderProcessor *)arg1;

- (void)getBounds:(TSCH3DGetSelectionKnobsPositionsPipelineMergeLabelBounds *)arg0;
- (void)resetBounds;
- (char)useIndividualBounds;
- (void)extend2DProjectedBounds:(struct box<glm::detail::tvec3<float> > *)arg0;
- (TSCH3DGetBoundsPipeline *)initWithScene:(NSObject *)arg0 renderProcessor:(TSCH3DRenderProcessor *)arg1;
- (id)boundsProcessor;
- (void)set2DProjectedRenderingMode:(char)arg0;
- (void)runScene:(NSObject *)arg0 selector:(SEL)arg1;
- (void)get3DBounds:(OAITOrientedBounds *)arg0;
- (void)getProjectedBounds:(id)arg0;
- (void)setObjectRenderMode:(int)arg0;
- (char)shouldSkipLabelsIfHidden;
- (Class)labelsMeshRendererClassForLabelsRenderer:(NSObject *)arg0;
- (TSCH3DGetBoundsPipeline *)initWithScene:(NSObject *)arg0;
- (struct ObjectBounds *)bounds;
- (char)run;

@end
