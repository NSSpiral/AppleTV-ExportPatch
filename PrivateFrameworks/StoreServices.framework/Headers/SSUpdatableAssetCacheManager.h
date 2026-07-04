/* Runtime dump - SSUpdatableAssetCacheManager
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSUpdatableAssetCacheManager : NSObject
{
    NSString * _clientIdentifier;
}

- (void).cxx_destruct;
- (NSObject *)cacheRoot;
- (NSURL *)assetsDirectoryURL;
- (NSString *)assetFileName:(NSString *)arg0;
- (NSURL *)manifestsDirectoryURL;
- (NSURL *)currentManifestFileURL;
- (char)setCacheURLsOnManifestAndAssets:(NSArray *)arg0 error:(id *)arg1;
- (NSString *)manifestFileName:(NSString *)arg0;
- (NSURL *)manifestFileURL:(NSURL *)arg0;
- (NSString *)validatePath:(NSString *)arg0;
- (NSURL *)assetFileURL:(NSURL *)arg0;
- (SSUpdatableAssetCacheManager *)initWithClientIdentifier:(NSString *)arg0;
- (id)loadCurrentCachedManifest;

@end
