/* Runtime dump - TSUDownloadSession
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUDownloadSession : NSObject
{
    char _isCancelled;
    TSUDownloadManager * _manager;
    <TSUDownloadSessionDelegate> * _delegate;
    char _didFinishInitialization;
    NSObject<OS_dispatch_group> * _initializationGroup;
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSMutableSet * _remainingTasks;
    NSMutableDictionary * _taskProgress;
    double _lastProgressValue;
    NSObject<OS_dispatch_group> * _completionGroup;
    TSUBasicProgress * _progress;
    NSURLResponse * _lastResponse;
    NSError * _error;
    NSString * _sessionDescription;
    NSProgress * _NSProgress;
    long long _totalBytesDownloaded;
    long long _totalBytesExpectedToBeDownloaded;
}

@property (readonly, nonatomic) char isActive;
@property (readonly, nonatomic) NSString * sessionDescription;
@property (readonly, nonatomic) NSProgress * NSProgress;
@property (readonly, nonatomic) TSUProgress * progress;
@property (readonly, nonatomic) long long totalBytesDownloaded;
@property (readonly, nonatomic) long long totalBytesExpectedToBeDownloaded;
@property (readonly, nonatomic) char isCancelled;

- (void)didFinishInitialization;
- (void)cancelRemainingTasksNotifyingDelegate:(char)arg0;
- (long long)totalBytesExpectedToBeDownloaded;
- (void)headRequestForDownloadItem:(NSObject *)arg0 taskProgress:(NSMutableDictionary *)arg1;
- (void)updateTaskProgress:(id)arg0 withTotalBytesWritten:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;
- (void)updateProgressAndNotifyDelegate;
- (long long)totalBytesDownloaded;
- (void)notifyCompletionWithQueue:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (id)waitUntilTimeout:(unsigned long long)arg0;
- (TSUDownloadSession *)initWithManager:(TSUDownloadManager *)arg0 downloadItems:(NSMutableArray *)arg1 description:(NSString *)arg2 willRequestDownload:(char)arg3 delegate:(<TSUDownloadSessionDelegate> *)arg4;
- (char)hasActiveTaskWithDescription:(NSString *)arg0;
- (void)task:(NSObject *)arg0 withDescription:(NSString *)arg1 didCompleteWithError:(NSError *)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)task:(NSObject *)arg0 withDescription:(NSString *)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (NSProgress *)NSProgress;
- (NSString *)sessionDescription;
- (void)cancel;
- (void)dealloc;
- (TSUDownloadSession *)init;
- (NSString *)description;
- (char)isActive;
- (char)isCancelled;
- (TSUProgress *)progress;
- (void).cxx_destruct;
- (NSURLResponse *)lastResponse;

@end
