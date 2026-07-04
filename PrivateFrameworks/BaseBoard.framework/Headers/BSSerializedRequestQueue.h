/* Runtime dump - BSSerializedRequestQueue
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSSerializedRequestQueue : NSObject
{
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSObject<OS_dispatch_queue> * _workQueue;
    id _conditionBlock;
}

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> * serialQueue;

- (void)enqueueRequest:(NSURLRequest *)arg0;
- (void)dealloc;
- (void)_enqueueSerialConditionalRequest:(NSURLRequest *)arg0;
- (BSSerializedRequestQueue *)initWithSerialQueue:(NSObject<OS_dispatch_queue> *)arg0 workQueue:(NSObject<OS_dispatch_queue> *)arg1 executionCondition:(id)arg2;
- (void)enqueueAsyncRequest:(NSURLRequest *)arg0;
- (NSObject<OS_dispatch_queue> *)serialQueue;

@end
