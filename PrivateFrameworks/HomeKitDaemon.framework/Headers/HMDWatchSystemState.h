/* Runtime dump - HMDWatchSystemState
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDWatchSystemState : NSObject
{
    char _companionReachable;
    NSHashTable * _watchSystemStateDelegates;
    NSObject<OS_dispatch_queue> * _propertyQueue;
}

@property (nonatomic) char companionReachable;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * propertyQueue;
@property (readonly, nonatomic) NSHashTable * watchSystemStateDelegates;

+ (HMDWatchSystemState *)sharedState;

- (HMDWatchSystemState *)init;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)propertyQueue;
- (char)isCompanionReachable;
- (void)newIncomingMessageFromClient;
- (void)_callDidUpdateReachabilityChangeForCompanion:(char)arg0 forDelegate:(NSObject *)arg1;
- (NSHashTable *)watchSystemStateDelegates;
- (void)_callDidReceiveNewIncomingMessageForDelegate:(NSObject *)arg0;
- (void)setCompanionReachable:(char)arg0;
- (void)registerDelegate:(NSObject *)arg0;

@end
