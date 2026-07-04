/* Runtime dump - VKGGLRasterOverlayTile
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGGLRasterOverlayTile : VKTile <VKRasterOverlayTile>
{
    unsigned int _size;
    float _scale;
    struct TextureData2D * _imageData;
    struct CGContext * _ctx;
    struct shared_ptr<ggl::Texture2D> _gglTexture;
    struct unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem> > _renderItem;
    struct Setup _shaderSetup;
}

@property (readonly, nonatomic) struct shared_ptr<ggl::Texture2D> gglTexture;
@property (readonly, nonatomic) struct RenderItem * renderItem;

- (void)dealloc;
- (char)isEmpty;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<ggl::Texture2D>)gglTexture;
- (struct RenderItem *)renderItem;
- (VKGGLRasterOverlayTile *)initWithKey:(struct VKTileKey *)arg0 size:(struct VKTileKey)arg1 scale:(unsigned int)arg2;
- (struct CGContext *)drawContext;
- (struct RenderItem *)setupRenderItemWithRenderState:(unsigned int)arg0 mesh:(float)arg1;

@end
