/* Runtime dump - TSCH3DFramebufferGaussianBlurPipeline
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFramebufferGaussianBlurPipeline : TSCH3DFramebufferCopyPipeline
{
    struct tvec2<float> mTapUnit;
}

@property (nonatomic) struct tvec2<float> tapUnit;

+ (NSArray *)effectsArray;

- (void)setTapUnit:(struct tvec2<float>)arg0;
- (TSCH3DFramebufferGaussianBlurPipeline *)initWithProcessor:(TSCH3DRenderProcessor *)arg0 session:(TSCH3DSession *)arg1;
- (void)updateShaderEffectsStates;
- (struct tvec2<float>)tapUnit;
- (void).cxx_construct;

@end
