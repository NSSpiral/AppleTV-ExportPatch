/* Runtime dump - TSCH3DFramebufferCopyPipeline
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFramebufferCopyPipeline : TSCH3DFramebufferTransformPipeline
{
    NSArray * mEffects;
    TSCH3DResource * mVertices;
    TSCH3DResource * mTexcoords;
    struct RenderState mRenderState;
    struct tmat4x4<float> mTransform;
    struct box<glm::detail::tvec2<int> > mTargetViewport;
    char mWipeTarget;
    struct tvec4<float> mWipeColor;
    id mUpdateShaderEffectsStatesBlock;
}

@property (copy, nonatomic) NSArray * effects;
@property (retain, nonatomic) TSCH3DResource * vertices;
@property (retain, nonatomic) TSCH3DResource * texcoords;
@property (nonatomic) struct RenderState renderState;
@property (nonatomic) struct tmat4x4<float> transform;
@property (nonatomic) struct box<glm::detail::tvec2<int> > targetViewport;
@property (nonatomic) char wipeTarget;
@property (nonatomic) struct tvec4<float> wipeColor;
@property (copy, nonatomic) id updateShaderEffectsStatesBlock;

- (struct RenderState)renderState;
- (void)setRenderState:(struct RenderState)arg0;
- (TSCH3DFramebufferCopyPipeline *)initWithProcessor:(TSCH3DRenderProcessor *)arg0 session:(TSCH3DSession *)arg1;
- (void)updateShaderEffectsStates;
- (void)transformFramebuffer;
- (char)wipeTarget;
- (struct box<glm::detail::tvec2<int> >)targetViewport;
- (TSCH3DResource *)texcoords;
- (void)setWipeColor:(struct tvec4<float>)arg0;
- (void)setTexcoords:(TSCH3DResource *)arg0;
- (void)setTargetViewport:(struct box<glm::detail::tvec2<int> >)arg0;
- (void)setWipeTarget:(char)arg0;
- (struct tvec4<float>)wipeColor;
- (id /* block */)updateShaderEffectsStatesBlock;
- (void)setUpdateShaderEffectsStatesBlock:(id /* block */)arg0;
- (void)dealloc;
- (void)setTransform:(struct tmat4x4<float>)arg0;
- (struct tmat4x4<float>)transform;
- (void).cxx_construct;
- (void)setVertices:(TSCH3DResource *)arg0;
- (NSArray *)effects;
- (void)setEffects:(NSArray *)arg0;
- (TSCH3DResource *)vertices;

@end
