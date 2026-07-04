/* Runtime dump - VKRasterTile
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterTile : VKTile
{
    NSData * _data;
    VKStyleManager * _styleManager;
    int _genericTileType;
    char _hasGenericTileType;
    struct shared_ptr<ggl::Texture2D> _gglTexture;
    struct RenderItem _renderItem;
    struct unique_ptr<ggl::Texture::Shader::Setup, std::__1::default_delete<ggl::Texture::Shader::Setup> > _shaderSetup;
    struct unique_ptr<ggl::Clut::Shader::Setup, std::__1::default_delete<ggl::Clut::Shader::Setup> > _shaderSetupCLUT;
    struct unique_ptr<ggl::TextureWithReverseAlpha::Shader::Setup, std::__1::default_delete<ggl::TextureWithReverseAlpha::Shader::Setup> > _shaderReverseAlphaSetup;
}

@property (readonly, nonatomic) char hasGenericTileType;
@property (readonly, nonatomic) int genericTileType;
@property (readonly, nonatomic) struct RenderItem * renderItem;
@property (nonatomic) struct shared_ptr<ggl::Texture2D> gglTexture;

- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (char)hasGenericTileType;
- (int)genericTileType;
- (struct shared_ptr<ggl::Texture2D>)gglTexture;
- (void)setupClutShaderWithRenderState:(struct RenderState *)arg0 mesh:(struct ColorState)arg1 clutTexture:(struct BlendState)arg2 clutBlend:(struct StencilState)arg3;
- (void)setupReverseAlphaShaderWithRenderState:(struct RenderState *)arg0 mesh:(struct ColorState)arg1 roadAlpha:(struct BlendState)arg2;
- (void)setupNormalShaderWithRenderState:(struct RenderState *)arg0 mesh:(struct ColorState)arg1;
- (struct RenderItem *)renderItem;
- (VKRasterTile *)initWithKey:(struct VKTileKey *)arg0 imageData:(struct VKTileKey)arg1 styleManager:(VKStyleManager *)arg2;
- (struct CGImage *)newCGImageFromData:(NSData *)arg0;
- (struct TextureData2D *)buildTextureDataFromCGImage:(struct CGImage *)arg0;
- (void)immediateLoad:(struct Device *)arg0;
- (VKRasterTile *)initWithKey:(struct VKTileKey *)arg0 imageData:(struct VKTileKey)arg1 styleManager:(VKStyleManager *)arg2 genericTileType:(int)arg3;
- (void)gglBuildTexture:(struct Device *)arg0;
- (void)setGglTexture:(struct shared_ptr<ggl::Texture2D>)arg0;

@end
