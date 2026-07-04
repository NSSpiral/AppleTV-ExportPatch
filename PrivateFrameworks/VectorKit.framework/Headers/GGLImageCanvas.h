/* Runtime dump - GGLImageCanvas
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface GGLImageCanvas : NSObject <MDRenderTarget>
{
    struct CGSize _size;
    float _contentScale;
    char _canMakeImage;
    char _recreateRenderTarget;
    struct unique_ptr<ggl::Texture2D, std::__1::default_delete<ggl::Texture2D> > _colorTexture;
    struct unique_ptr<ggl::TextureBuffer, std::__1::default_delete<ggl::TextureBuffer> > _flippedColorBuffer;
    struct unique_ptr<ggl::IOSurfaceTexture, std::__1::default_delete<ggl::IOSurfaceTexture> > _flippedSurfaceTexture;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> > _flippedRenderTarget;
    struct unique_ptr<ggl::TextureBuffer, std::__1::default_delete<ggl::TextureBuffer> > _colorBuffer;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> > _depthStencilBuffer;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> > _renderTarget;
    char _useMultisampling;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> > _msaaColorBuffer;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> > _msaaDepthStencilBuffer;
    struct unique_ptr<ggl::RenderTargetOperation, std::__1::default_delete<ggl::RenderTargetOperation> > _msaaBlitOperation;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> > _msaaRenderTarget;
}

@property (nonatomic) struct CGSize size;
@property (nonatomic) float contentScale;
@property (readonly, nonatomic) struct RenderTarget * renderTarget;
@property (readonly, nonatomic) struct RenderTarget * msaaRenderTarget;
@property (readonly, nonatomic) struct RenderTarget * finalRenderTarget;
@property (readonly, nonatomic) struct RenderTargetOperation * msaaBlitOperation;
@property (readonly, nonatomic) char useMultisampling;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) struct CGSize sizeInPixels;
@property (readonly, nonatomic) float averageFPS;

- (struct CGSize)size;
- (void)setSize:(struct CGSize)arg0;
- (void).cxx_construct;
- (void)setContentScale:(float)arg0;
- (float)contentScale;
- (void).cxx_destruct;
- (struct CGSize)sizeInPixels;
- (void)_createMSAARenderTarget;
- (void)_destroyMSAARenderTarget;
- (void)_destroyRenderTarget;
- (void)_createRenderTarget;
- (struct shared_ptr<ggl::BitmapDataBase>)bitmapDataWithRenderer:(NSObject *)arg0;
- (void)willDrawView;
- (void)didDrawView;
- (struct RenderTarget *)renderTarget;
- (struct RenderTarget *)msaaRenderTarget;
- (struct RenderTarget *)finalRenderTarget;
- (struct RenderTargetOperation *)msaaBlitOperation;
- (GGLImageCanvas *)initWithSize:(struct CGSize)arg0 scale:(float)arg1 useMultisampling:(char)arg2;
- (struct CGImage *)newImageWithRenderer:(struct Renderer *)arg0;
- (char)useMultisampling;

@end
