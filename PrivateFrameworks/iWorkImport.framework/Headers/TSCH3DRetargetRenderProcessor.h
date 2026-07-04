/* Runtime dump - TSCH3DRetargetRenderProcessor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DRetargetRenderProcessor : TSCH3DRenderProcessor
{
    TSCH3DRenderProcessor * mOriginal;
}

@property (retain, nonatomic) TSCH3DRenderProcessor * original;

+ (TSCH3DRetargetRenderProcessor *)processorWithOriginal:(TSCH3DRenderProcessor *)arg0;

- (void)submit:(struct PrimitiveInfo *)arg0;
- (void)translate:(struct tvec3<float> *)arg0;
- (void)popMatrix;
- (void)pushMatrix;
- (TSCH3DRenderProcessor *)original;
- (NSArray *)effectsStates;
- (void)copyTransformInto:(struct tmat4x4<float> *)arg0;
- (void)projection:(struct tmat4x4<float> *)arg0;
- (void)copyProjectionInto:(struct tmat4x4<float> *)arg0;
- (TSCH3DRetargetRenderProcessor *)initWithOriginal:(TSCH3DRenderProcessor *)arg0;
- (int)attribute:(NSObject *)arg0 resource:(NSObject *)arg1 specs:(struct AttributeSpecs *)arg2;
- (struct RenderState)renderState;
- (void)setRenderState:(struct RenderState *)arg0;
- (void)popRenderState;
- (void)pushRenderState;
- (void)setOriginal:(TSCH3DRenderProcessor *)arg0;
- (void)resetBuffers;
- (void)updateRenderState;
- (int)texture:(NSObject *)arg0 attributes:(struct TextureAttributes *)arg1;
- (struct RenderHints)renderHints;
- (void)setRenderHints:(struct RenderHints *)arg0;
- (char)canRenderPrefilteredLines;
- (void)dealloc;
- (TSCH3DRetargetRenderProcessor *)init;
- (void)endFrame;
- (void)replace:(struct tmat4x4<float> *)arg0;
- (void)beginFrame;
- (NSArray *)effects;
- (void)popState;
- (void)pushState;
- (void)scale:(struct tvec3<float> *)arg0;
- (void)multiply:(struct tmat4x4<float> *)arg0;

@end
