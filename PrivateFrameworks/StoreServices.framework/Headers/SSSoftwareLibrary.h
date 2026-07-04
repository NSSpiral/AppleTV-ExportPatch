/* Runtime dump - SSSoftwareLibrary
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSoftwareLibrary : NSObject
{
    SSXPCConnection * _connection;
}

- (void)dealloc;
- (SSSoftwareLibrary *)init;
- (void)getLibraryItemForBundleIdentifiers:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)_getItemsWithMessage:(NSString *)arg0 completionBlock:(id /* block */)arg1;
- (void)_sendDemotionMessage:(NSString *)arg0 completionBlock:(id /* block */)arg1;
- (void)getLibraryItemsForITunesStoreItemIdentifiers:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)refreshReceiptsWithCompletionBlock:(id /* block */)arg0;
- (void)restoreDemotedApplicationWithBundleIdentifier:(NSString *)arg0 options:(NSDictionary *)arg1 completionBlock:(id /* block */)arg2;

@end
