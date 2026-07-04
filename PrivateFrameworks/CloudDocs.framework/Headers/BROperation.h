/* Runtime dump - BROperation
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BROperation : NSOperation
{
    id _remoteOperation;
    NSObject<OS_dispatch_queue> * _queue;
    id _uuid;
    char _executing;
    char _finished;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * callbackQueue;
@property (readonly) char executing;
@property (readonly) char finished;
@property (nonatomic) NSObject<BRCancellable> * remoteOperation;

- (void)_setExecuting:(char)arg0;
- (void)_setFinished:(char)arg0;
- (void)cancel;
- (void)dealloc;
- (BROperation *)init;
- (void)invalidate;
- (void)start;
- (char)isFinished;
- (char)isExecuting;
- (void)_setRemoteOperation:(NSObject *)arg0;
- (IMRemoteObject<IDSDaemonProtocol> *)remoteObject;
- (void)progressCallbackWithTopic:(SEL)arg0 userInfo:(NSDictionary *)arg1;
- (NSObject<BRCancellable> *)remoteOperation;
- (void)setRemoteOperation:(NSObject<BRCancellable> *)arg0;
- (void)finishWithResult:(NSObject *)arg0 error:(NSError *)arg1;
- (char)_finishIfCancelled;
- (NSObject<OS_dispatch_queue> *)callbackQueue;
- (void)completedWithResult:(NSObject *)arg0 error:(NSError *)arg1;
- (void)setRemoteOperationProxy:(SEL)arg0 userInfo:(NSDictionary *)arg1;

@end
