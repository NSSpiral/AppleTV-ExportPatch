/* Runtime dump - SSVDirectUploadQueue
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVDirectUploadQueue : NSObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    int _daemonLaunchToken;
    SSXPCConnection * _inboundConnection;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    SSXPCConnection * _outboundConnection;
    NSArray * _uploadKinds;
    NSMutableArray * _uploads;
}

@property (readonly, copy) NSArray * uploadKinds;

- (void)dealloc;
- (SSVDirectUploadQueue *)init;
- (void).cxx_destruct;
- (SSVDirectUploadQueue *)initWithUploadKinds:(NSArray *)arg0;
- (void)_establishInboundConnection;
- (void)_sendSimpleMessage:(NSString *)arg0 completionBlock:(id /* block */)arg1;
- (NSURLConnection *)_outboundConnection;
- (void)_handleInboundMessage:(NSString *)arg0 connection:(NSURLConnection *)arg1;
- (void)_sendObserversUploadsDidChange;
- (void)_handleAddUploadsMessage:(NSString *)arg0;
- (void)_handleChangeUploadsMessage:(NSString *)arg0;
- (void)_handleRemoveUploadsMessage:(NSString *)arg0;
- (void)addUploadObserver:(NSObject *)arg0;
- (void)cancelAllUploadsWithCompletionBlock:(id /* block */)arg0;
- (void)cancelUploads:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)getUploadsWithCompletionBlock:(id /* block */)arg0;
- (void)pauseAllUploadsWithCompletionBlock:(id /* block */)arg0;
- (void)pauseUploads:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)removeUploadObserver:(NSObject *)arg0;
- (void)resumeAllUploadsWithCompletionBlock:(id /* block */)arg0;
- (void)resumeUploads:(id)arg0 completionBlock:(id /* block */)arg1;
- (NSArray *)uploadKinds;

@end
