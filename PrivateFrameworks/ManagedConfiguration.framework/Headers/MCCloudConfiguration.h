/* Runtime dump - MCCloudConfiguration
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCCloudConfiguration : NSObject
{
    NSObject<OS_dispatch_queue> * _memberQueue;
    NSDictionary * _memberQueueDetails;
}

@property (copy, nonatomic) NSDictionary * details;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * memberQueue;
@property (retain, nonatomic) NSDictionary * memberQueueDetails;

+ (MCCloudConfiguration *)sharedConfiguration;

- (MCCloudConfiguration *)init;
- (NSObject<OS_dispatch_queue> *)memberQueue;
- (void)setMemberQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void).cxx_destruct;
- (char)isSupervised;
- (void)refreshDetailsFromDisk;
- (void)setMemberQueueDetails:(NSDictionary *)arg0;
- (NSDictionary *)memberQueueDetails;
- (NSDictionary *)details;
- (void)setDetails:(NSDictionary *)arg0;

@end
