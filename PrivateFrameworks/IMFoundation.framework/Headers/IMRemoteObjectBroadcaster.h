/* Runtime dump - IMRemoteObjectBroadcaster
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMRemoteObjectBroadcaster : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
}

+ (IMRemoteObjectBroadcaster *)defaultBroadcaster;

- (void)dealloc;
- (IMRemoteObjectBroadcaster *)init;
- (NSOperationQueue *)_queue;
- (NSObject *)broadcastProxyForTarget:(NSObject *)arg0 messageContext:(NSObject *)arg1 protocol:(Protocol *)arg2 priority:(int)arg3;
- (NSObject *)broadcastProxyForTarget:(NSObject *)arg0 messageContext:(NSObject *)arg1 protocol:(Protocol *)arg2;
- (id)broadcastProxyForTargets:(id)arg0 messageContext:(NSObject *)arg1 protocol:(Protocol *)arg2;
- (void)blockUntilSendQueueIsEmpty;
- (void)flushProxy:(NSObject *)arg0;

@end
