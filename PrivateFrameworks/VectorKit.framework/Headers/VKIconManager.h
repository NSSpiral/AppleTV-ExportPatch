/* Runtime dump - VKIconManager
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKIconManager : NSObject <GEOResourceManifestTileGroupObserver>
{
    _VKLocalIconAtlas * _localAtlas;
    unsigned int _tileGroupIdentifier;
    VKResourceManager * _resourceManager;
    NSMapTable * _atlases;
    NSLock * _atlasesLock;
    NSArray * _nonRegionalResourceNames;
    NSMutableDictionary * _nameToStyleManager;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (VKIconManager *)sharedManager;

- (void)dealloc;
- (void)_didReceiveMemoryWarning:(NSNotification *)arg0;
- (void)purge;
- (VKIconManager *)initWithTileGroupIdentifier:(unsigned int)arg0 resourceManager:(VKResourceManager *)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;
- (NSString *)artworkForName:(NSString *)arg0 withResourceNames:(NSArray *)arg1 style:(struct ? *)arg2 contentScale:(float)arg3 size:(struct Matrix<float, 4, 1>)arg4;
- (NSObject *)artworkForFeatureID:(unsigned long long)arg0 withResourceNames:(NSArray *)arg1 style:(struct ? *)arg2 contentScale:(float)arg3 size:(struct Matrix<float, 4, 1>)arg4;
- (NSString *)artworkForStyleAttributeKey:(unsigned int)arg0 longAttributeValue:(unsigned long long)arg1 withResourceNames:(NSArray *)arg2 style:(struct ? *)arg3 contentScale:(float)arg4 size:(struct Matrix<float, 4, 1>)arg5;
- (NSString *)artworkForStyleAttributeKey:(unsigned int)arg0 attributeValue:(unsigned int)arg1 withResourceNames:(NSArray *)arg2 style:(struct ? *)arg3 contentScale:(float)arg4 size:(struct Matrix<float, 4, 1>)arg5;
- (NSString *)_atlasForName:(NSString *)arg0;
- (id)_nonRegionalPacks;
- (id)_forEachIconPackWithContentScale:(float)arg0 iconSize:(int)arg1 resourceNames:(NSArray *)arg2 visitUntilMatch:(id)arg3;
- (NSArray *)_allResourceNames;
- (NSString *)imageForName:(NSString *)arg0 contentScale:(float)arg1;
- (NSDictionary *)imageForStyleAttributes:(NSDictionary *)arg0 withStylesheetName:(NSString *)arg1 contentScale:(float)arg2 size:(int)arg3 customIconID:(unsigned long long)arg4;

@end
