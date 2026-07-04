/* Runtime dump - BRCStagePersistedState
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCStagePersistedState : NSObject <NSSecureCoding>
{
    long _latestGCStartTime;
    BRCAccountSession * _session;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;

+ (char)supportsSecureCoding;
+ (NSObject *)loadFromClientStateInSession:(NSObject *)arg0;

- (BRCStagePersistedState *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (BRCStagePersistedState *)init;
- (NSString *)description;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (long long)timeSinceLatestGCStartTime;
- (void)setLatestGCStartTime:(long)arg0;

@end
