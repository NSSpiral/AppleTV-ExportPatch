/* Runtime dump - VKRasterTrafficMapModel
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterTrafficMapModel : VKMapTileModel <VKMapLayer>
{
    struct shared_ptr<md::StyleQuery> _trafficDrawStyle;
    int _sourceTileZtoStencilOffset;
    char _needsTileStencil;
    struct unique_ptr<vk::TrafficManager, std::__1::default_delete<vk::TrafficManager> > _trafficManager;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (VKRasterTrafficMapModel *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)gglLayoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2;
- (void)stylesheetDidChange;
- (unsigned long long)mapLayerPosition;
- (unsigned char)commandBufferId;

@end
