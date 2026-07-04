/* Runtime dump - VKShieldManager
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKShieldManager : NSObject <GEOResourceManifestTileGroupObserver>
{
    struct /* ? */ _artworkPool;
    struct /* ? */ _genericArtworks;
    unsigned int _tileGroupIdentifier;
    VKResourceManager * _resourceManager;
    VKGenericShieldGenerator * _genericShieldGenerator;
    NSArray * _nonRegionalResourceNames;
    NSMapTable * _atlases;
    NSLock * _atlasesLock;
    NSMapTable * _indexes;
    NSLock * _indexesLock;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (VKShieldManager *)sharedManager;

- (void)dealloc;
- (void)_didReceiveMemoryWarning:(NSNotification *)arg0;
- (void).cxx_construct;
- (void)purge;
- (void).cxx_destruct;
- (VKShieldManager *)initWithTileGroupIdentifier:(unsigned int)arg0 resourceManager:(VKResourceManager *)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;
- (NSObject *)artworkForShieldType:(long long)arg0 textLength:(unsigned int)arg1 contentScale:(float)arg2 resourceNames:(NSArray *)arg3 style:(NSObject *)arg4 size:(int)arg5 idiom:(int)arg6 numberOfLines:(unsigned int)arg7 colors:(struct ? *)arg8 featureType:(NSObject *)arg9;
- (NSString *)artworkForShieldName:(NSString *)arg0 textLength:(unsigned int)arg1 contentScale:(float)arg2 resourceNames:(NSArray *)arg3 size:(int)arg4 idiom:(int)arg5 numberOfLines:(unsigned int)arg6 colors:(struct ? *)arg7;
- (id)_nonRegionalIndexesAndPacks;
- (NSString *)_indexForName:(NSString *)arg0;
- (NSString *)_atlasForName:(NSString *)arg0;
- (NSObject *)artworkForShieldType:(long long)arg0 textLength:(unsigned int)arg1 contentScale:(float)arg2 size:(int)arg3 idiom:(int)arg4 mapRect:(struct ?)arg5 colors:(struct ?)arg6 featureType:(NSObject *)arg7;
- (NSObject *)artworkForShieldType:(long long)arg0 textLength:(unsigned int)arg1 contentScale:(float)arg2 size:(int)arg3 idiom:(int)arg4 colors:(struct ? *)arg5 featureType:(NSObject *)arg6;
- (NSObject *)imageForShieldType:(long long)arg0 shieldText:(NSString *)arg1 contentScale:(float)arg2 size:(int)arg3 idiom:(int)arg4 colors:(struct ? *)arg5 featureType:(NSObject *)arg6;

@end
