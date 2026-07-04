/* Runtime dump - SSDownloadMonitor
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadMonitor : NSObject
{
    SSXPCConnection * _connection;
    <SSDownloadMonitorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
}

@property <SSDownloadMonitorDelegate> * delegate;

- (void)dealloc;
- (void)setDelegate:(<SSDownloadMonitorDelegate> *)arg0;
- (SSDownloadMonitor *)init;
- (<SSDownloadMonitorDelegate> *)delegate;
- (NSURLConnection *)_connection;
- (id)_copyItemsWithReply:(id /* block */)arg0 error:(id *)arg1;
- (void)getMonitorItemsWithCompletionBlock:(id /* block */)arg0;
- (void)pauseMonitorItem:(NSObject *)arg0 completionBlock:(id /* block */)arg1;
- (void)prioritizeMonitorItem:(NSObject *)arg0 completionBlock:(id /* block */)arg1;
- (void)resumeMonitorItem:(NSObject *)arg0 completionBlock:(id /* block */)arg1;
- (void)_reloadForChangeNotification;

@end
