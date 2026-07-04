/* Runtime dump - BKSSystemApplicationClient
 * Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSSystemApplicationClient : BSBaseXPCClient
{
    NSObject<OS_dispatch_queue> * _callOutQueue;
    char _pendingCheckIn;
    char _sentConnect;
    NSObject<OS_dispatch_semaphore> * _checkinSemaphore;
    <BKSSystemApplicationClientDelegate> * _delegate;
}

@property (nonatomic) <BKSSystemApplicationClientDelegate> * delegate;

- (void)restart;
- (void)dealloc;
- (void)setDelegate:(<BKSSystemApplicationClientDelegate> *)arg0;
- (<BKSSystemApplicationClientDelegate> *)delegate;
- (void)sendActions:(id)arg0;
- (void)connect;
- (BKSSystemApplicationClient *)initWithCalloutQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)_sendMessageOfType:(int)arg0 packer:(SKTextureAtlasPacker *)arg1 replyHandler:(/* block */ id)arg2 waitForReply:(id /* block */)arg3 waitDuration:(/* block */ id)arg4;
- (void)_sendMessageOfType:(int)arg0 packer:(SKTextureAtlasPacker *)arg1;
- (void)_queue_handleWatchdogPing:(id)arg0;
- (void)_sendMessageOfType:(int)arg0 packer:(SKTextureAtlasPacker *)arg1 replyHandler:(/* block */ id)arg2;
- (void)queue_handleMessage:(NSString *)arg0;
- (void)queue_connectionWasResumed;
- (void)queue_connectionWasInterrupted;
- (void)queue_connectionWasInvalidated;
- (void)_connect;
- (void)checkIn;

@end
