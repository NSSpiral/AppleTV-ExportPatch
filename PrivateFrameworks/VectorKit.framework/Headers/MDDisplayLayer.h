/* Runtime dump - MDDisplayLayer
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface MDDisplayLayer : NSObject <GGLRenderQueueSource, MDRenderTarget>
{
    GGLLayer * _layer;
    <GGLRenderQueueSource> * _renderSource;
    struct shared_ptr<ggl::GLDevice> _device;
    struct shared_ptr<ggl::GLRenderer> _renderer;
    struct mutex _debugConsoleManagerCreationLock;
    struct unique_ptr<md::DebugConsoleManager, std::__1::default_delete<md::DebugConsoleManager> > _debugConsoleManager;
    struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > _renderQueueOuter;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> > _msaaRenderTarget;
    struct unique_ptr<ggl::RenderTargetOperation, std::__1::default_delete<ggl::RenderTargetOperation> > _msaaBlitOperation;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> > _msaaColorBuffer;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> > _msaaDepthStencilBuffer;
    char _forceMSAATarget;
    char _useMultisampling;
    char _requiresMultisampling;
    struct CGContext * _snapshotContext;
    struct CGRect _bounds;
    float _contentsScale;
}

@property (readonly, nonatomic) struct shared_ptr<ggl::Device> device;
@property (readonly, nonatomic) struct GLRenderer * renderer;
@property (readonly, nonatomic) GGLLayer * layer;
@property (nonatomic) char useMultisampling;
@property (nonatomic) char debugEnableMultisampling;
@property (nonatomic) <GGLRenderQueueSource> * renderSource;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) struct CGSize size;
@property (readonly, nonatomic) float contentScale;
@property (readonly, nonatomic) struct CGSize sizeInPixels;
@property (readonly, nonatomic) float averageFPS;

- (void)setOpaque:(char)arg0;
- (void)setNeedsDisplayOnBoundsChange:(char)arg0;
- (void)dealloc;
- (struct CGSize)size;
- (void)setBackgroundColor:(struct CGColor *)arg0;
- (GGLLayer *)layer;
- (MDDisplayLayer *)init;
- (void)setBounds:(struct CGRect)arg0;
- (void)didReceiveMemoryWarning;
- (struct CGPoint)convertPoint:(struct CGPoint)arg0 toLayer:(CALayer *)arg1;
- (void)setContentsGravity:(NSString *)arg0;
- (void)setContentsScale:(float)arg0;
- (void)forceLayout;
- (void).cxx_construct;
- (float)contentScale;
- (void)drawInContext:(struct CGContext *)arg0;
- (void).cxx_destruct;
- (struct shared_ptr<ggl::Device>)device;
- (struct CGSize)sizeInPixels;
- (void)recreateLayer;
- (void)setRenderSource:(<GGLRenderQueueSource> *)arg0;
- (struct GLRenderer *)renderer;
- (void)didEnterBackground;
- (void)destroyLayer;
- (char)debugEnableMultisampling;
- (void)setDebugEnableMultisampling:(char)arg0;
- (void)resetRenderQueue;
- (void)setUseMultisampling:(char)arg0;
- (void)drawWithTimestamp:(double)arg0;
- (struct RenderQueue *)renderQueue;
- (void)didReadPixels:(struct shared_ptr<ggl::BitmapData> *)arg0;
- (float)averageFPS;
- (struct DebugConsole *)debugConsoleForId:(struct Matrix<float, 2, 1>)arg0;
- (void)_createMSAARenderTarget;
- (void)_destroyMSAARenderTarget;
- (char)useMultisampling;
- (void)_createGLLayer;
- (void)enablePerformanceHUD:(id)arg0;
- (void)disablePerformanceHUD:(id)arg0;
- (void)expandedPerformanceHUD:(char)arg0;
- (<GGLRenderQueueSource> *)renderSource;

@end
