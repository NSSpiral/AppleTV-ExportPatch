/* Runtime dump - VKMapRasterizer
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapRasterizer : VKModelObject
{
    struct VKTileKey _keyToRasterize;
    VKScene * _rasterizeScene;
    NSMutableSet * _rasterizeTilesToRender;
    VKLayoutContext * _rasterizeLayoutContext;
    MDTextureCanvas * _rasterizeCanvas;
    VKTileProvider * _tileProvider;
    struct Matrix<float, 4, 1> _backgroundColor;
    unsigned int _rasterizingScaleFactor;
    VKMapRasterizerRoot * _root;
    VKCamera * _rasterizeCamera;
    struct unique_ptr<ggl::TextureBuffer, std::__1::default_delete<ggl::TextureBuffer> > _textureBuffer;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> > _depthStencilBuffer;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> > _renderToTextureTarget;
    struct unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue> > _rttQueue;
    struct unique_ptr<ggl::TexturePool, std::__1::default_delete<ggl::TexturePool> > _texturePool;
    struct shared_ptr<ggl::Texture2D> _renderTexture;
    unsigned int _canvasPointSize;
    VKMapModel * _mapModel;
}

@property (readonly, nonatomic) struct VKTileKey * keyToRasterize;
@property (nonatomic) VKMapModel * mapModel;
@property (nonatomic) VKTileProvider * tileProvider;
@property (nonatomic) struct Matrix<float, 4, 1> backgroundColor;
@property (nonatomic) unsigned int rasterizingScaleFactor;

- (void)dealloc;
- (void)setBackgroundColor:(struct Matrix<float, 4, 1>)arg0;
- (struct Matrix<float, 4, 1>)backgroundColor;
- (VKMapRasterizer *)init;
- (void)reset;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)addSubmodel:(id)arg0;
- (void)setMapModel:(VKMapModel *)arg0;
- (void)gglLayoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2;
- (void)gglLayoutSceneIfNeeded:(id)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2 dispatchQueue:(struct __shared_weak_count *)arg3;
- (void)stylesheetDidChange;
- (void)setRasterizingScaleFactor:(unsigned int)arg0;
- (void)setTileProvider:(VKTileProvider *)arg0;
- (VKTileProvider *)tileProvider;
- (VKMapModel *)mapModel;
- (void)flushTextureCache;
- (char)isBusy;
- (void)rasterizeKey:(struct VKTileKey *)arg0 scene:(struct VKTileKey)arg1;
- (void)prepRenderTargetWithTexture:(struct shared_ptr<ggl::Texture2D> *)arg0;
- (void)createRasterizationLayoutContext:(NSObject *)arg0 canvasPointSize:(unsigned int)arg1;
- (struct VKTileKey *)keyToRasterize;
- (void)updateCameraFromKey:(struct VKTileKey *)arg0;
- (unsigned int)rasterizingScaleFactor;

@end
