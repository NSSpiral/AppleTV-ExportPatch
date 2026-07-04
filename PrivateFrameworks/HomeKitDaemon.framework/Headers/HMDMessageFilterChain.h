/* Runtime dump - HMDMessageFilterChain
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMessageFilterChain : NSObject
{
    NSObject<OS_dispatch_queue> * _workQueue;
    NSMutableArray * _messageFilters;
}

@property (readonly, copy, nonatomic) NSArray * filters;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (retain, nonatomic) NSMutableArray * messageFilters;

- (HMDMessageFilterChain *)init;
- (NSArray *)filters;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)addMessageFilter:(NSObject *)arg0;
- (char)shouldCloudSyncData;
- (NSMutableArray *)messageFilters;
- (void)_executeChainForMessage:(NSString *)arg0 queue:(NSObject *)arg1 target:(NSObject *)arg2 completionHandler:(id /* block */)arg3;
- (void)executeChainForMessage:(NSString *)arg0 queue:(NSObject *)arg1 target:(NSObject *)arg2 completionHandler:(id /* block */)arg3;
- (void)removeMessageFilter:(NSObject *)arg0;
- (void)resetConfiguration:(NSDictionary *)arg0 completionHandler:(id /* block */)arg1;
- (void)setMessageFilters:(NSMutableArray *)arg0;

@end
