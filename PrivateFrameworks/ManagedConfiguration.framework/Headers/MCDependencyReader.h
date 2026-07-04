/* Runtime dump - MCDependencyReader
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCDependencyReader : NSObject
{
    NSObject<OS_dispatch_queue> * _memberQueue;
    NSMutableDictionary * _memberQueueDomainsDict;
}

@property (readonly, nonatomic) NSDictionary * domainsDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * memberQueue;
@property (retain, nonatomic) NSMutableDictionary * memberQueueDomainsDict;

+ (MCDependencyReader *)sharedReader;
+ (void)setStoragePath:(NSString *)arg0;
+ (NSString *)storagePath;

- (MCDependencyReader *)init;
- (MCDependencyReader *)_init;
- (NSObject<OS_dispatch_queue> *)memberQueue;
- (void)setMemberQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void).cxx_destruct;
- (void)invalidateCache;
- (NSMutableDictionary *)memberQueueDomainsDict;
- (void)memberQueueRereadDomainsDict;
- (NSString *)memberQueueParentsInDomain:(NSString *)arg0;
- (NSObject *)memberQueueDependentsOfParent:(NSObject *)arg0 inDomain:(NSString *)arg1;
- (void)setMemberQueueDomainsDict:(NSMutableDictionary *)arg0;
- (NSDictionary *)domainsDict;
- (NSString *)parentsInDomain:(NSString *)arg0;
- (NSObject *)dependentsOfParent:(NSObject *)arg0 inDomain:(NSString *)arg1;

@end
