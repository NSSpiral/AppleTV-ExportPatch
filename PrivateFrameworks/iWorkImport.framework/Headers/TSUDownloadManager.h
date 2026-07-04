/* Runtime dump - TSUDownloadManager
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUDownloadManager : NSObject <NSURLSessionDownloadDelegate>
{
    NSOperationQueue * _downloadSessionsQueue;
    NSHashTable * _downloadSessions;
    NSMapTable * _downloadResults;
    NSObject<OS_dispatch_queue> * _activeTasksQueue;
    NSMutableDictionary * _activeTasks;
    NSMutableDictionary * _inProgressDownloadItems;
    NSMutableArray * _inProcessDownloadQueue;
    NSMutableArray * _completionHandlers;
    NSURLSession * _defaultURLSession;
}

@property (readonly, nonatomic) NSURL * downloadInboxDirectory;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)registerDownloadItemClass:(Class)arg0;
+ (NSArray *)newFilteredDownloadItems:(NSArray *)arg0;
+ (void)wakeUp;
+ (TSUDownloadManager *)sharedManager;

- (void)cancelTasksWithDescriptions:(id)arg0 forDownloadSession:(NSObject *)arg1;
- (char)beginDownloadTaskForDownloadItem:(NSObject *)arg0 isInProcessDownloadTask:(char)arg1 taskDescription:(NSString *)arg2 urlOrNil:(id)arg3;
- (NSArray *)downloadSessionForItems:(NSArray *)arg0 description:(NSString *)arg1 willRequestDownload:(char)arg2 delegate:(NSObject *)arg3 taskHandler:(id /* block */)arg4;
- (void)handleEventsForBackgroundURLSession:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (NSURL *)downloadInboxDirectory;
- (NSArray *)downloadItems:(NSMutableArray *)arg0 description:(NSString *)arg1 delegate:(NSObject *)arg2;
- (NSArray *)outstandingDownloadSessionForItems:(NSArray *)arg0 description:(NSString *)arg1 delegate:(NSObject *)arg2;
- (void)notifyWhenAllTasksAreCompletedWithCompletionHandler:(id /* block */)arg0;
- (TSUDownloadManager *)initPrivate;
- (TSUDownloadManager *)init;
- (void).cxx_destruct;
- (void)URLSession:(NSURLSession *)arg0 downloadTask:(NSObject *)arg1 didFinishDownloadingToURL:(NSURL *)arg2;
- (void)URLSession:(NSURLSession *)arg0 downloadTask:(NSObject *)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)URLSession:(NSURLSession *)arg0 downloadTask:(NSObject *)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (void)URLSession:(NSURLSession *)arg0 task:(NSObject *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)URLSession:(NSURLSession *)arg0 didBecomeInvalidWithError:(NSError *)arg1;

@end
