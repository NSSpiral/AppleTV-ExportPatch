/* Runtime dump - AITTargetObserverRecord
 * Image: /System/Library/PrivateFrameworks/AITTarget.framework/AITTarget
 */

@interface AITTargetObserverRecord : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    id _handler;
    id _observer;
}

@property (readonly) id observer;
@property (readonly) NSObject<OS_dispatch_queue> * queue;
@property (readonly) id handler;

+ (NSObject *)recordForObserver:(NSObject *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1 block:(id /* block */)arg2;

- (void)dealloc;
- (id /* block */)handler;
- (MCResourceProgressObserver *)observer;
- (NSObject<OS_dispatch_queue> *)queue;

@end
