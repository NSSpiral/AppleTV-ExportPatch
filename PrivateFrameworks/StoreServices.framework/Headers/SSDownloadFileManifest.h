/* Runtime dump - SSDownloadFileManifest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadFileManifest : NSObject
{
    SSXPCConnection * _connection;
    int _manifestType;
}

@property (readonly) int manifestType;

- (void)dealloc;
- (SSDownloadFileManifest *)init;
- (SSDownloadFileManifest *)initWithManifestType:(int)arg0;
- (void)removeItemsWithAssetPaths:(NSArray *)arg0 completionBlock:(id /* block */)arg1;
- (void)_removeItemsWithAssetPaths:(NSArray *)arg0 completionBlock:(id /* block */)arg1;
- (void)getPathsForFilesWithClass:(int)arg0 completionBlock:(id /* block */)arg1;
- (int)manifestType;
- (void)rebuildManifestWithCompletionBlock:(id /* block */)arg0;
- (void)removeItemWithAssetPath:(NSString *)arg0 completionBlock:(id /* block */)arg1;

@end
