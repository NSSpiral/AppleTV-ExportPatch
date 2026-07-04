/* Runtime dump - TSCH3DFramebufferOnepassBlurPipeline
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFramebufferOnepassBlurPipeline : TSCH3DFramebufferCopyPipeline
{
    struct tvec2<float> mPixelSize;
}

@property (readonly, nonatomic) struct tvec2<float> pixelSize;

+ (TSCH3DFramebufferOnepassBlurPipeline *)pipelineWithProcessor:(TSCH3DRenderProcessor *)arg0 session:(NSObject *)arg1 pixelSize:(struct tvec2<float> *)arg2;

- (void)updateShaderEffectsStates;
- (TSCH3DFramebufferOnepassBlurPipeline *)initWithProcessor:(TSCH3DRenderProcessor *)arg0 session:(NSObject *)arg1 pixelSize:(struct tvec2<float> *)arg2;
- (void)dealloc;
- (void).cxx_construct;
- (struct tvec2<float>)pixelSize;

@end
