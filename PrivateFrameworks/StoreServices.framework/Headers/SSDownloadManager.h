/* Runtime dump - SSDownloadManager
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadManager : NSObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSArray * _activeDownloads;
    char _activeDownloadsChanged;
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    SSXPCConnection * _connection;
    NSArray * _downloads;
    char _downloadsChanged;
    char _isUsingNetwork;
    SSXPCConnection * _observerConnection;
    NSObject<OS_dispatch_queue> * _observerQueue;
    struct __CFArray * _observers;
    SSDownloadManagerOptions * _options;
    NSMutableSet * _removedDownloads;
}

@property (readonly) SSDownloadManagerOptions * managerOptions;
@property (readonly) NSArray * activeDownloads;
@property (readonly) NSArray * downloads;
@property (readonly) char usingNetwork;

+ (SSDownloadManager *)IPodDownloadKinds;
+ (void)_sendGlobalHandler:(id /* block */)arg0;
+ (SSDownloadManager *)EBookDownloadKinds;
+ (SSDownloadManager *)softwareDownloadKinds;
+ (void)retryAllRestoreDownloads;
+ (void)reconnectToLSApplicationWorkspace;
+ (void)removePersistenceIdentifier:(NSString *)arg0;
+ (void)setDownloadHandler:(SSDownloadHandler *)arg0;
+ (NSObject *)EBookDownloadManager;
+ (NSObject *)IPodDownloadManager;
+ (NSObject *)softwareDownloadManager;
+ (SSDownloadManager *)allStoreDownloadKinds;
+ (SSDownloadManager *)ITunesDownloadKinds;
+ (void)reevaluateBackgroundDownloadsForBundleIdentifiers:(id)arg0;
+ (void)_triggerDownloads;

- (void)addDownloads:(id)arg0 completionBlock:(id /* block */)arg1;
- (NSArray *)downloads;
- (char)isUsingNetwork;
- (SSDownloadManager *)initWithManagerOptions:(SSDownloadManagerOptions *)arg0;
- (void)finishDownloads:(id)arg0;
- (void)getDownloadsUsingBlock:(id /* block */)arg0;
- (void)cancelDownloads:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)pauseDownloads:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)resumeDownloads:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)moveDownload:(id)arg0 afterDownload:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)dealloc;
- (void)removeObserver:(NSObject *)arg0;
- (void)addObserver:(NSObject *)arg0;
- (SSDownloadManager *)initWithDownloadKinds:(SSDownload *)arg0;
- (char)canCancelDownload:(id)arg0;
- (SSDownloadManagerOptions *)managerOptions;
- (void)reloadFromServer;
- (void)_handleDownloadsRemoved:(id)arg0;
- (void)_willFinishDownloads:(id)arg0;
- (void)_finishDownloads:(id)arg0;
- (SSXPCConnection *)_XPCConnection;
- (SSDownloadManager *)_initSSDownloadManager;
- (void)_connectAsObserver;
- (NSString *)_copyDownloadsForMessage:(long long)arg0 downloadIDs:(id)arg1;
- (void)_insertDownloads:(id)arg0 before:(id)arg1 after:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_sendMessage:(NSString *)arg0 withCompletionBlock:(id /* block */)arg1;
- (id)_copyDownloads;
- (void)_moveDownload:(id)arg0 before:(id)arg1 after:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_pauseDownloads:(id)arg0 forced:(char)arg1 completionBlock:(id /* block */)arg2;
- (void)setDownloads:(NSArray *)arg0 forKinds:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_handleReply:(id /* block */)arg0 forDownloads:(/* block */ id)arg1 message:(NSString *)arg2 isRetry:(char)arg3 block:(id /* block */)arg4;
- (void)_handleMessage:(NSString *)arg0 fromServerConnection:(NSURLConnection *)arg1;
- (void)_sendObserverConnection;
- (void)_reloadIsUsingNetworkWithDownloadKinds:(SSDownload *)arg0;
- (void)_loadDownloadKindsUsingNetwork;
- (void)_sendDownloadsChanged:(NSNotification *)arg0;
- (void)_handleDownloadKindsUsingNetworkChanged:(NSNotification *)arg0;
- (void)_handleDownloadsChanged:(NSNotification *)arg0;
- (void)_handleDownloadStatesChanged:(NSNotification *)arg0;
- (id)_copyDownloadKindsUsingNetwork;
- (void)_sendMessageToObservers:(SEL)arg0;
- (NSDictionary *)_newOptionsDictionary;
- (NSArray *)activeDownloads;
- (void)cancelAllDownloadsWithCompletionBlock:(id /* block */)arg0;
- (void)insertDownloads:(id)arg0 afterDownload:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)insertDownloads:(id)arg0 beforeDownload:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)moveDownload:(id)arg0 beforeDownload:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setDownloads:(NSArray *)arg0 completionBlock:(id /* block */)arg1;
- (void)_pauseDownloads:(id)arg0 completionBlock:(id /* block */)arg1;

@end
