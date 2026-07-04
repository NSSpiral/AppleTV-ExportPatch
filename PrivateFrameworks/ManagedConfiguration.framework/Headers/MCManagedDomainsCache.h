/* Runtime dump - MCManagedDomainsCache
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCManagedDomainsCache : NSObject
{
    NSObject<OS_dispatch_queue> * _memberQueue;
    NSMutableArray * _memberQueueCache;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> * memberQueue;
@property (retain, nonatomic) NSMutableArray * memberQueueCache;

+ (MCManagedDomainsCache *)sharedCache;

- (MCManagedDomainsCache *)init;
- (NSObject<OS_dispatch_queue> *)memberQueue;
- (void)setMemberQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void).cxx_destruct;
- (void)rereadCache;
- (void)memberQueueRereadCache;
- (NSMutableArray *)memberQueueCache;
- (char)isURLManaged:(id)arg0;
- (void)setMemberQueueCache:(NSMutableArray *)arg0;

@end
