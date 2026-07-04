/* Runtime dump - SSUpdatableAssetController
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSUpdatableAssetController : NSObject
{
    SSUpdatableAssetManifest * _bundledManifest;
    SSUpdatableAssetManifest * _currentManifest;
    SSUpdatableAssetCacheManager * _cacheManager;
    SSXPCConnection * _connection;
    NSURL * _manifestURL;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSURL * _bundledManifestURL;
}

@property (readonly, nonatomic) SSUpdatableAssetManifest * currentManifest;
@property (readonly, nonatomic) SSUpdatableAssetManifest * newestCachedManifest;
@property (readonly, nonatomic) NSURL * bundledManifestURL;
@property (copy, nonatomic) NSURL * manifestURL;

- (void)dealloc;
- (void).cxx_destruct;
- (NSURLConnection *)_connection;
- (SSUpdatableAssetController *)initWithBundledManifestURL:(NSURL *)arg0 clientIdentifier:(NSString *)arg1;
- (SSUpdatableAssetManifest *)newestCachedManifest;
- (SSUpdatableAssetManifest *)_bundledManifest;
- (SSUpdatableAssetController *)initWithBundledManifestURL:(NSURL *)arg0;
- (SSUpdatableAssetManifest *)currentManifest;
- (void)clearCache:(NSObject *)arg0;
- (void)refreshCachedManifest:(id)arg0;
- (NSURL *)bundledManifestURL;
- (NSURL *)manifestURL;
- (void)setManifestURL:(NSURL *)arg0;

@end
