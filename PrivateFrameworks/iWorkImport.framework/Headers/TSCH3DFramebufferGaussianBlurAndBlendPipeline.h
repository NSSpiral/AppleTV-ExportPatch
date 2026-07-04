/* Runtime dump - TSCH3DFramebufferGaussianBlurAndBlendPipeline
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFramebufferGaussianBlurAndBlendPipeline : TSCH3DFramebufferGaussianBlurPipeline
{
    float mBlendFactor;
    TSCH3DGLFramebuffer * mBlendTexture;
}

@property (retain, nonatomic) TSCH3DGLFramebuffer * blendTexture;
@property (nonatomic) float blendFactor;

+ (NSArray *)effectsArray;

- (void)setBlendTexture:(TSCH3DGLFramebuffer *)arg0;
- (void)setBlendFactor:(float)arg0;
- (void)updateShaderEffectsStates;
- (TSCH3DGLFramebuffer *)blendTexture;
- (void)dealloc;
- (float)blendFactor;

@end
