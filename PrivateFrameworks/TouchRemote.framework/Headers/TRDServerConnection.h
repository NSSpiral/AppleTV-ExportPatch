/* Runtime dump - TRDServerConnection
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRDServerConnection : TRTCPConnection
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableArray * _authorizationCompletionHandlers;
    char _authorized;
    TRDBrowser * _browser;
    NSObject<OS_dispatch_queue> * _packetEventQueue;
    TRService * _service;
}

@property (readonly, nonatomic) TRService * service;

- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (TRService *)service;
- (void)_handleReceivedPacketEvent:(NSObject *)arg0;
- (NSObject *)_initWithUniqueID:(int)arg0 connectionStream:(TRTCPConnectionStream *)arg1 service:(TRService *)arg2 browser:(TRDBrowser *)arg3;
- (void)_browserDidRemoveServiceNotification:(NSNotification *)arg0;

@end
