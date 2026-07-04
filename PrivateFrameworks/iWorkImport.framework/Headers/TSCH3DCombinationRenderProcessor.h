/* Runtime dump - TSCH3DCombinationRenderProcessor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DCombinationRenderProcessor : TSCH3DRetargetRenderProcessor
{
    NSIndexSet * mEnabled;
    struct StateStack<glm::detail::tmat4x4<float>, 8> mTransformStack;
    struct tmat4x4<float> mProjection;
    char mTransformChanged;
    char mProjectionChanged;
    struct StateStack<TSCH3D::ObjectState, 6> mObjectStateStack;
    TSCH3DShaderEffects * mEffects;
    TSCH3DShaderEffectsStates * mShaderEffectsStates;
}

@property (readonly, nonatomic) char transformChanged;
@property (readonly, nonatomic) char projectionChanged;

+ (TSCH3DCombinationRenderProcessor *)processorWithOriginal:(TSCH3DRenderProcessor *)arg0 enableTypes:(NSArray *)arg1;

- (void)translate:(struct tvec3<float> *)arg0;
- (void)popMatrix;
- (void)pushMatrix;
- (NSArray *)effectsStates;
- (void)copyTransformInto:(struct tmat4x4<float> *)arg0;
- (void)projection:(struct tmat4x4<float> *)arg0;
- (void)copyProjectionInto:(struct tmat4x4<float> *)arg0;
- (char)transformChanged;
- (char)projectionChanged;
- (TSCH3DCombinationRenderProcessor *)initWithOriginal:(TSCH3DRenderProcessor *)arg0;
- (struct StateStack<TSCH3D::ObjectState, 6> *)objectStateStack;
- (void)resetBuffers;
- (TSCH3DCombinationRenderProcessor *)initWithOriginal:(TSCH3DRenderProcessor *)arg0 enableTypes:(NSArray *)arg1;
- (char)objectStateEnabled;
- (char)shaderEnabled;
- (void)resetTransformChangeFlags;
- (char)matrixEnabled;
- (struct tmat4x4<float> *)projectionTransform;
- (void)dealloc;
- (void)replace:(struct tmat4x4<float> *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct tmat4x4<float> *)currentTransform;
- (NSArray *)effects;
- (void)popState;
- (void)pushState;
- (void)scale:(struct tvec3<float> *)arg0;
- (void)multiply:(struct tmat4x4<float> *)arg0;

@end
