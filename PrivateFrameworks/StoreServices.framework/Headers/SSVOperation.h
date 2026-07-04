/* Runtime dump - SSVOperation
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVOperation : NSOperation
{
    NSOperation * _childOperation;
    NSMutableArray * _childRequests;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

- (void)cancel;
- (SSVOperation *)init;
- (void).cxx_destruct;
- (void)dispatchAsync:(id)arg0;
- (void)dispatchSync:(id)arg0;
- (void)runChildOperation:(NSObject *)arg0;
- (void)addChildRequest:(NSURLRequest *)arg0;
- (void)removeChildRequest:(NSURLRequest *)arg0;

@end
