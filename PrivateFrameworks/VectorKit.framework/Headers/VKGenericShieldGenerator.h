/* Runtime dump - VKGenericShieldGenerator
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGenericShieldGenerator : NSObject <GEOResourceManifestTileGroupObserver>
{
    VKGenericShieldDrawStyle * _defaultStyle;
    NSCache * _defaultStylePacks;
    unsigned int _tileGroupIdentifier;
    VKResourceManager * _resourceManager;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (VKGenericShieldGenerator *)initWithTileGroupIdentifier:(unsigned int)arg0 resourceManager:(VKResourceManager *)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;
- (id)newArtworkWithScale:(float)arg0 style:(NSObject *)arg1 size:(int)arg2 numberOfLines:(unsigned int)arg3;

@end
