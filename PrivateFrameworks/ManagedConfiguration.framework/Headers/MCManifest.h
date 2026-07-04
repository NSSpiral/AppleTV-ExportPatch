/* Runtime dump - MCManifest
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCManifest : NSObject
{
    NSString * _path;
    NSMutableDictionary * _manifest;
    NSObject<OS_dispatch_queue> * _syncQueue;
}

+ (MCManifest *)sharedManifest;
+ (NSString *)installedProfileDataWithIdentifier:(NSString *)arg0;
+ (NSString *)installedProfileWithIdentifier:(NSString *)arg0;
+ (void)_setManifestPath:(NSString *)arg0;

- (void)dealloc;
- (MCManifest *)init;
- (void).cxx_destruct;
- (void)invalidateCache;
- (NSString *)installedProfileDataWithIdentifier:(NSString *)arg0;
- (NSString *)installedProfileWithIdentifier:(NSString *)arg0;
- (NSMutableDictionary *)_manifest;
- (NSString *)identifiersOfProfilesWithFilterFlags:(int)arg0;
- (void)_setManifest:(MCManifest *)arg0;
- (NSString *)allInstalledProfileIdentifiers;
- (void)addIdentifierToManifest:(id)arg0 flag:(int)arg1;
- (void)removeIdentifierFromManifest:(id)arg0;
- (NSMutableDictionary *)manifest;

@end
