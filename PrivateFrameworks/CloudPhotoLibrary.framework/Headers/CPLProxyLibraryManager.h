/* Runtime dump - CPLProxyLibraryManager
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLProxyLibraryManager : CPLPlatformObject <CPLClientLibraryManagerProtocol, NSXPCConnectionDelegate, CPLLibraryManagerImplementation>
{
    NSXPCConnection * _connection;
    NSMutableDictionary * _downloadTasks;
    NSMutableDictionary * _uploadTasks;
    char _diagnosticsEnabled;
    unsigned int _foregroundCalls;
    NSCountedSet * _disablingReasons;
    NSMutableDictionary * _outstandingInvocations;
    unsigned int _outstandingInvocationsCount;
    NSMutableArray * _pendingBlocksAfterOpening;
    int _openingStatus;
    int _notifyToken;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (CPLProxyLibraryManager *)daemonProtocolInterface;
+ (CPLProxyLibraryManager *)clientProtocolInterface;

- (void)dealloc;
- (void).cxx_destruct;
- (void)openWithCompletionHandler:(id /* block */)arg0;
- (void)closeWithCompletionHandler:(id /* block */)arg0;
- (void)connection:(NSXPCConnection *)arg0 handleInvocation:(NSObject *)arg1 isReply:(char)arg2;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)disableSynchronizationWithReason:(NSString *)arg0;
- (void)enableSynchronizationWithReason:(NSString *)arg0;
- (void)barrier;
- (void)getMappedIdentifiersForIdentifiers:(id)arg0 inAreLocalIdentifiers:(char)arg1 completionHandler:(id /* block */)arg2;
- (void)resetStatus;
- (void)noteClientReceivedNotificationOfServerChanges;
- (char)diagnosticsEnabled;
- (void)setDiagnosticsEnabled:(char)arg0;
- (void)getResourcesForItemWithIdentifier:(NSString *)arg0 completionHandler:(id /* block */)arg1;
- (void)compactFileCacheWithCompletionHandler:(id /* block */)arg0;
- (void)downloadOriginalsOfType:(NSObject *)arg0 localIdentifiers:(NSArray *)arg1 destinationURL:(NSURL *)arg2 progressIdentifier:(NSString *)arg3 completionHandler:(id /* block */)arg4;
- (void)getListOfComponentsWithCompletionHandler:(id /* block */)arg0;
- (void)getStatusArrayForComponents:(NSArray *)arg0 completionHandler:(id /* block */)arg1;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(NSString *)arg0 related:(char)arg1 completionHandler:(id /* block */)arg2;
- (CPLProxyLibraryManager *)initWithAbstractObject:(<CPLAbstractObject> *)arg0;
- (void)downloadDidStartForResourceTransferTask:(NSObject *)arg0;
- (void)downloadDidProgress:(float)arg0 forResourceTransferTask:(NSObject *)arg1;
- (void)downloadDidFinishForResourceTransferTask:(NSObject *)arg0 finalResource:(NSObject *)arg1 withError:(NSError *)arg2;
- (void)backgroundDownloadDidFinishForResource:(NSObject *)arg0;
- (void)backgroundDownloadDidFailForResource:(NSObject *)arg0;
- (void)uploadDidStartForResource:(NSObject *)arg0 withResourceTransferTask:(NSObject *)arg1;
- (void)uploadOfResource:(NSObject *)arg0 didProgress:(float)arg1 forResourceTransferTask:(NSObject *)arg2;
- (void)uploadOfResource:(NSObject *)arg0 didFinishForResourceTransferTask:(NSObject *)arg1 withError:(NSError *)arg2;
- (void)libraryManagerHasChangesToPull;
- (void)libraryManagerDidUpdateStatusWithProperties:(NSDictionary *)arg0;
- (void)libraryManagerDidUpdateSizeOfResourcesToUploadToSize:(unsigned long long)arg0 numberOfImages:(unsigned int)arg1 numberOfVideos:(unsigned int)arg2 numberOfOtherItems:(unsigned int)arg3;
- (id)proxyWithErrorHandler:(SSErrorHandler *)arg0;
- (char)_setStatusFromDictionary:(NSDictionary *)arg0;
- (void)_reallyOpenWithCompletionHandler:(id /* block */)arg0;
- (void)_dispatchBlockWhenOpen:(id)arg0;
- (void)_dispatchFailedDownloadTaskForResource:(NSObject *)arg0 highPriority:(char)arg1 withError:(NSError *)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_invokeOutstandingInvocationsWithTaskIdentifier:(NSString *)arg0;
- (NSObject *)_uploadTaskDidStartForResource:(NSObject *)arg0 withTaskIdentifier:(NSString *)arg1;
- (void)dispatchBlockWhenLibraryIsOpen:(id)arg0;
- (void)cancelTask:(NSObject *)arg0;
- (void)deleteResourcesIfSafe:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)deactivateWithCompletionHandler:(id /* block */)arg0;
- (void)resetCacheWithOption:(unsigned int)arg0 completionHandler:(id /* block */)arg1;
- (void)startSyncSession;
- (void)getCloudCacheForRecordWithIdentifier:(NSString *)arg0 completionHandler:(id /* block */)arg1;
- (void)publishResource:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)beginDownloadForResource:(NSObject *)arg0 clientBundleID:(NSString *)arg1 highPriority:(char)arg2 completionHandler:(id /* block */)arg3;
- (void)addInfoToLog:(id)arg0;
- (void)getStatusForComponents:(NSArray *)arg0 completionHandler:(id /* block */)arg1;
- (void)takeStatisticsSnapshotSinceDate:(NSDate *)arg0 completionHandler:(id /* block */)arg1;
- (void)noteClientIsInForeground;
- (void)noteClientIsInBackground;
- (void)removeCloudLibraryWithCompletionHandler:(id /* block */)arg0;

@end
