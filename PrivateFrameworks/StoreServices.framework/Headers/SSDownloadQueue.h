/* Runtime dump - SSDownloadQueue
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadQueue : NSObject <SSDownloadManagerObserverPrivate>
{
    char _autoFinishDownloads;
    SSDownloadManager * _downloadManager;
    struct __CFSet * _observers;
}

@property (readonly) NSSet * downloadKinds;
@property (readonly) SSDownloadManager * downloadManager;
@property (readonly, nonatomic) NSArray * downloads;
@property (nonatomic) char shouldAutomaticallyFinishDownloads;
@property (readonly) char usingNetwork;
@property (readonly, nonatomic) NSArray * placeholderDownloads;
@property (readonly, nonatomic) NSArray * preorders;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SSDownloadQueue *)mediaDownloadKinds;
+ (SSDownloadQueue *)softwareApplicationDownloadKinds;

- (NSArray *)downloads;
- (void)downloadManagerNetworkUsageDidChange:(NSDictionary *)arg0;
- (char)isUsingNetwork;
- (void)getDownloadsUsingBlock:(id /* block */)arg0;
- (void)downloadManager:(SSDownloadManager *)arg0 downloadStatesDidChange:(NSDictionary *)arg1;
- (void)downloadManagerDownloadsDidChange:(NSDictionary *)arg0;
- (void)dealloc;
- (SSDownloadQueue *)init;
- (void)removeObserver:(NSObject *)arg0;
- (void)addObserver:(NSObject *)arg0;
- (void)_handleDownloadsDidChange:(NSDictionary *)arg0;
- (SSDownloadQueue *)initWithDownloadKinds:(NSSet *)arg0;
- (NSDictionary *)_initWithDownloadManagerOptions:(SSDownloadManager *)arg0;
- (char)canCancelDownload:(id)arg0;
- (NSSet *)downloadKinds;
- (char)reloadFromServer;
- (void)_sendDownloadStatusChangedAtIndex:(int)arg0;
- (void)_handleDownloadsRemoved:(id)arg0;
- (void)_sendQueueNetworkUsageChanged;
- (void)_messageObserversWithFunction:(/* block */ id *)arg0 context:(void *)arg1;
- (void)_sendQueueChangedWithRemovals:(id)arg0;
- (void)downloadManager:(SSDownloadManager *)arg0 downloadsDidChange:(NSDictionary *)arg1;
- (SSDownloadQueue *)initWithDownloadManagerOptions:(SSDownloadManager *)arg0;
- (char)addDownload:(SKDownload *)arg0;
- (SSDownloadManager *)downloadManager;
- (void)addPlaceholderDownloads:(id)arg0;
- (NSString *)downloadForItemIdentifier:(unsigned long long)arg0;
- (NSArray *)placeholderDownloads;
- (NSArray *)preorders;
- (void)removePlaceholderDownload:(id)arg0;
- (char)startPreOrderDownload:(id)arg0;
- (void)_sendQueuePreOrdersChanged;
- (char)shouldAutomaticallyFinishDownloads;
- (void)setShouldAutomaticallyFinishDownloads:(char)arg0;
- (char)cancelDownload:(struct _GEOTileKey *)arg0;

@end
