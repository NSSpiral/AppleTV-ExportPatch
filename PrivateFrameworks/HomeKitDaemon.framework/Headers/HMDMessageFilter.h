/* Runtime dump - HMDMessageFilter
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMessageFilter : NSObject
{
    NSString * _name;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy, nonatomic) NSString * name;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;

- (NSString *)name;
- (void).cxx_destruct;
- (HMDMessageFilter *)initWithName:(NSString *)arg0;
- (NSObject<OS_dispatch_queue> *)queue;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)resetConfiguration;
- (char)acceptMessage:(NSString *)arg0 target:(NSObject *)arg1 errorReason:(id *)arg2;
- (char)shouldCloudSyncData;

@end
