/* Runtime dump - VKTrafficIncidentImageManager
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTrafficIncidentImageManager : NSObject <GEOResourceManifestTileGroupObserver>
{
    NSCache * _imageCache;
    NSMapTable * _targetDisplayToProvider;
    VKResourceManager * _resourceManager;
    unsigned int _tileGroupIdentifier;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (VKTrafficIncidentImageManager *)sharedManager;

- (void)dealloc;
- (VKTrafficIncidentImageManager *)initWithTileGroupIdentifier:(unsigned int)arg0 resourceManager:(VKResourceManager *)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;
- (NSObject *)imageForIncidentType:(int)arg0 contentScale:(float)arg1 targetDisplay:(int)arg2;
- (NSObject *)imageForIncidentType:(int)arg0 contentScale:(float)arg1;
- (void)setIncidentIconProvider:(NSObject *)arg0 forTargetDisplay:(/* block */ id)arg1;

@end
