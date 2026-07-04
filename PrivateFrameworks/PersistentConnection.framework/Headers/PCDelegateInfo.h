/* Runtime dump - PCDelegateInfo
 * Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCDelegateInfo : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
}

- (void)dealloc;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;

@end
