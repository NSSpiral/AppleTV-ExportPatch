/* Runtime dump - CommunicationsFilterBlockList
 * Image: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
 */

@interface CommunicationsFilterBlockList : NSObject
{
    NSObject<OS_xpc_object> * _connection;
    int _retries;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _recentObjectsTested;
    CommunicationsFilterBlockListCache * _cache;
}

+ (CommunicationsFilterBlockList *)sharedInstance;

- (char)_disconnect;
- (void)dealloc;
- (CommunicationsFilterBlockList *)init;
- (NSURLRequest *)_sendSynchronousXPCRequest:(NSURLRequest *)arg0;
- (void)_sendXPCRequest:(NSURLRequest *)arg0 completionBlock:(id /* block */)arg1;
- (void)addItemForAllServices:(id)arg0;
- (void)removeItemForAllServices:(id)arg0;
- (char)isItemInList:(NSArray *)arg0;
- (char)_connect;
- (NSArray *)copyAllItems;
- (void)_disconnected;

@end
