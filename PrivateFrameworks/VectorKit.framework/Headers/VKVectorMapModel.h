/* Runtime dump - VKVectorMapModel
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKVectorMapModel : VKMapTileModel
{
    int _sourceTileZtoStencilOffset;
    char _needsTileStencil;
    struct vector<std::__1::shared_ptr<ggl::RenderItem>, std::__1::allocator<std::__1::shared_ptr<ggl::RenderItem> > > _stencilItems;
    struct vector<std::__1::shared_ptr<ggl::RenderState>, std::__1::allocator<std::__1::shared_ptr<ggl::RenderState> > > _stencilStates;
    struct vector<std::__1::shared_ptr<ggl::PolygonSolidFill::Shader::Setup>, std::__1::allocator<std::__1::shared_ptr<ggl::PolygonSolidFill::Shader::Setup> > > _stencilShaderSetups;
}

@property (nonatomic) int sourceTileZtoStencilOffset;
@property (nonatomic) char needsTileStencil;

+ (char)reloadOnStylesheetChange;
+ (char)reloadOnActiveTileGroupChange;

- (void).cxx_construct;
- (void).cxx_destruct;
- (void)gglLayoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2;
- (unsigned long long)mapLayerPosition;
- (char)wantsCategorizedSourceTiles;
- (void)_layoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1;
- (void)pushStencilItems:(struct CommandBuffer *)arg0 tiles:(struct ClearItem *)arg1 minZ:(struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> >)arg2 maxZ:(struct RenderItem * *)arg3 fullyLoaded:(struct RenderItem)arg4 layoutContext:(struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> >)arg5;
- (void)pushStencilItems:(struct CommandBuffer *)arg0 fullyLoaded:(struct ClearItem *)arg1 layoutContext:(struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> >)arg2;
- (int)sourceTileZtoStencilOffset;
- (void)setSourceTileZtoStencilOffset:(int)arg0;
- (char)needsTileStencil;
- (void)setNeedsTileStencil:(char)arg0;

@end
