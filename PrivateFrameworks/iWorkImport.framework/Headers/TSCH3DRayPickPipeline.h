/* Runtime dump - TSCH3DRayPickPipeline
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DRayPickPipeline : TSCH3DSceneRenderPipeline <TSCH3DSceneObjectDelegator>
{
    struct tvec2<float> mPickPosition;
    TSCH3DRayPickPipelineDelegate * mSceneObjectDelegate;
}

@property (readonly, nonatomic) NSArray * pickedPoints;
@property (readonly, nonatomic) TSCH3DPickedPoint * pickedPoint;
@property (nonatomic) float slack;

+ (NSObject *)pipelineWithScene:(NSObject *)arg0 position:(struct tvec2<float> *)arg1;

- (void)rayPick:(id)arg0;
- (NSObject *)makeDelegateWithScene:(NSObject *)arg0;
- (NSObject *)makeDelegateWithSceneObject:(TSCH3DSceneObject *)arg0 scene:(NSObject *)arg1;
- (TSCH3DRayPickPipeline *)initWithScene:(NSObject *)arg0 position:(struct tvec2<float> *)arg1;
- (id)p_renderProcessor;
- (NSArray *)pickedPoints;
- (id)p_unsortedPickedPoints;
- (float)slack;
- (void)setSlack:(float)arg0;
- (NSObject *)p_closestPickedPoint;
- (NSObject *)p_frontMostPickedPoint;
- (TSCH3DPickedPoint *)pickedPoint;
- (Class)labelsMeshRendererClassForLabelsRenderer:(NSObject *)arg0;
- (void)dealloc;
- (char)run;
- (void).cxx_construct;

@end
