/* Runtime dump - NSAsyncSSDownloadManager
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSAsyncSSDownloadManager : NSObject <SSDownloadManagerObserver>
{
    SSDownloadManager * _manager;
    NSOperationQueue * _queue;
    NSMutableDictionary * _downloads;
    char _reconnectInProgress;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)withDownload:(long long)arg0 perform:(id)arg1;
- (void)withDownload:(long long)arg0 performAsync:(id)arg1;
- (void)addDownloads:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)_attemptReconnect;
- (NSAsyncSSDownloadManager *)initWithDownloadManager:(SSDownload *)arg0;
- (void)setDelegate:(NSObject *)arg0 forDownload:(long long)arg1;
- (void)cancelDownload:(long long)arg0 completionBlock:(id /* block */)arg1;
- (void)withDownloadMatchingIdentifier:(NSString *)arg0 perform:(id)arg1;
- (void)finishDownload:(long long)arg0;
- (void)addDownload:(SKDownload *)arg0 completionBlock:(id /* block */)arg1;
- (void)downloadHandlerDisconnected:(char)arg0;
- (void)downloadManager:(SSDownloadManager *)arg0 downloadStatesDidChange:(NSDictionary *)arg1;
- (void)downloadManagerDownloadsDidChange:(NSDictionary *)arg0;
- (void)dealloc;
- (void)addOperationWithBlock:(id /* block */)arg0;

@end
