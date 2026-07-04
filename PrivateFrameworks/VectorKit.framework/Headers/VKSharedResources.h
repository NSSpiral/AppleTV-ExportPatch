/* Runtime dump - VKSharedResources
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKSharedResources : NSObject
{
    unsigned int _tileGroupIdentifier;
    VKIconManager * _iconManager;
    VKShieldManager * _shieldManager;
    VKGGLTextureManager * _gglTextureManager;
    VKResourceManager * _resourceManager;
    VKStylesheetVendor * _stylesheetVendor;
    VKTrafficIncidentImageManager * _trafficIncidentImageManager;
    struct shared_ptr<ggl::Device> _device;
    struct unique_ptr<ggl::AlphaAtlas, std::__1::default_delete<ggl::AlphaAtlas> > _alphaAtlas;
    struct unique_ptr<ggl::IsoAlphaAtlas, std::__1::default_delete<ggl::IsoAlphaAtlas> > _highInflationAlphaAtlas;
    struct unique_ptr<ggl::IsoAlphaAtlas, std::__1::default_delete<ggl::IsoAlphaAtlas> > _isoAlphaAtlas;
}

@property (readonly, nonatomic) VKIconManager * iconManager;
@property (readonly, nonatomic) VKShieldManager * shieldManager;
@property (readonly, nonatomic) VKGGLTextureManager * gglTextureManager;
@property (readonly, nonatomic) VKResourceManager * resourceManager;
@property (readonly, nonatomic) VKStylesheetVendor * stylesheetVendor;
@property (readonly, nonatomic) VKTrafficIncidentImageManager * trafficIncidentImageManager;
@property (readonly, nonatomic) struct Device * device;
@property (readonly, nonatomic) struct AlphaAtlas * alphaAtlas;
@property (readonly, nonatomic) struct IsoAlphaAtlas * highInflationAlphaAtlas;
@property (readonly, nonatomic) struct IsoAlphaAtlas * isoAlphaAtlas;

+ (VKSharedResources *)sharedResourcesForTileGroupIdentifier:(unsigned int)arg0;

- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (VKSharedResources *)initWithTileGroupIdentifier:(unsigned int)arg0;
- (struct Device *)device;
- (struct AlphaAtlas *)alphaAtlas;
- (struct IsoAlphaAtlas *)highInflationAlphaAtlas;
- (struct IsoAlphaAtlas *)isoAlphaAtlas;
- (VKIconManager *)iconManager;
- (VKShieldManager *)shieldManager;
- (VKGGLTextureManager *)gglTextureManager;
- (VKResourceManager *)resourceManager;
- (VKStylesheetVendor *)stylesheetVendor;
- (VKTrafficIncidentImageManager *)trafficIncidentImageManager;

@end
