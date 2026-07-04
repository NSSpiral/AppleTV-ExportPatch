/* Runtime dump - TSCH3DRayPickRenderProcessor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DRayPickRenderProcessor : TSCH3DRetargetRenderProcessor
{
    TSCH3DDataBuffer * mBuffer;
    NSMutableArray * mPickedPoints;
    struct tvec2<float> mPosition;
    float mSlack;
    TSCH3DRayPickPipelineDelegate * mSceneObjectDelegate;
}

@property (nonatomic) struct tvec2<float> position;
@property (nonatomic) float slack;
@property (retain, nonatomic) TSCH3DRayPickPipelineDelegate * sceneObjectDelegate;
@property (readonly, nonatomic) NSArray * pickedPoints;

- (void)geometry:(TSDInfoGeometry *)arg0;
- (void)submit:(struct PrimitiveInfo *)arg0;
- (void)setSceneObjectDelegate:(TSCH3DRayPickPipelineDelegate *)arg0;
- (TSCH3DRayPickPipelineDelegate *)sceneObjectDelegate;
- (NSArray *)pickedPoints;
- (float)slack;
- (void)setSlack:(float)arg0;
- (void)dealloc;
- (TSCH3DRayPickRenderProcessor *)init;
- (void)setPosition:(struct tvec2<float>)arg0;
- (struct tvec2<float>)position;
- (void).cxx_construct;
- (struct tmat4x4<float>)matrix;

@end
