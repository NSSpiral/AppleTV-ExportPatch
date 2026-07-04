/* Runtime dump - VKRasterOverlayMapModel
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterOverlayMapModel : VKMapTileModel <VKMapLayer>
{
    NSMutableArray * _sortedTiles;
    unsigned int _level;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > _gglRenderState;
    struct unique_ptr<ggl::Mesh, std::__1::default_delete<ggl::Mesh> > _unitMesh;
    struct unique_ptr<ggl::ClearItem, std::__1::default_delete<ggl::ClearItem> > _clearItem;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)reset;
- (void).cxx_construct;
- (void).cxx_destruct;
- (char)shouldLayoutWithoutStyleManager;
- (void)gglLayoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2;
- (unsigned long long)mapLayerPosition;
- (VKRasterOverlayMapModel *)initWithLevel:(unsigned int)arg0;

@end
