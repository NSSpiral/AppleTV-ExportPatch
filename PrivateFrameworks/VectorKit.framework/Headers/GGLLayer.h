/* Runtime dump - GGLLayer
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface GGLLayer : CAEAGLLayer
{
    unsigned int _renderBuffer;
    unsigned int _depthBuffer;
    unsigned int _frameBuffer;
    char _readPixels;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> > _renderTarget;
    struct shared_ptr<ggl::GLRenderer> _renderer;
    <GGLLayerDisruptor> * _renderDisruptor;
    struct CGSize _backingSize;
    NSObject<GGLRenderQueueSource> * _renderSource;
}

@property NSObject<GGLRenderQueueSource> * renderSource;
@property (readonly) struct GLRenderer * renderer;
@property <GGLLayerDisruptor> * renderDisruptor;
@property (readonly, nonatomic) struct CGSize backingSize;

- (void)dealloc;
- (void)setContentsScale:(float)arg0;
- (void).cxx_construct;
- (void)layoutSublayers;
- (void).cxx_destruct;
- (void)setRenderSource:(NSObject<GGLRenderQueueSource> *)arg0;
- (struct GLRenderer *)renderer;
- (void)didEnterBackground;
- (void)setRenderDisruptor:(<GGLLayerDisruptor> *)arg0;
- (void)drawWithTimestamp:(double)arg0;
- (char)_createRenderTarget;
- (GGLLayer *)initWithRenderer:(struct shared_ptr<ggl::GLRenderer>)arg0;
- (struct CGSize)backingSize;
- (void)setReadPixels;
- (NSObject<GGLRenderQueueSource> *)renderSource;
- (void)_deleteBuffers;
- (<GGLLayerDisruptor> *)renderDisruptor;

@end
