/* Runtime dump - TSCH3DFramebufferTransformPipeline
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFramebufferTransformPipeline : TSCH3DLinkablePipeline
{
    <TSCH3DPipelineLinkable> * mSource;
    TSCH3DGLFramebuffer * mTarget;
    TSCH3DGLFramebuffer * mInput;
}

@property (retain, nonatomic) <TSCH3DPipelineLinkable> * source;
@property (retain, nonatomic) TSCH3DGLFramebuffer * target;

- (void)loadSource;
- (char)prepareFramebuffer;
- (void)dealloc;
- (void)setTarget:(TSCH3DGLFramebuffer *)arg0;
- (TSCH3DGLFramebuffer *)target;
- (char)run;
- (<TSCH3DPipelineLinkable> *)source;
- (void)setSource:(<TSCH3DPipelineLinkable> *)arg0;

@end
