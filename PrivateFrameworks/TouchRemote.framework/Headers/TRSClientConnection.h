/* Runtime dump - TRSClientConnection
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRSClientConnection : TRTCPConnection
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    char _authorized;
    NSString * _deviceIdentifier;
    NSObject<OS_dispatch_queue> * _packetEventQueue;
}

- (void)dealloc;
- (void).cxx_destruct;
- (NSObject *)_initWithUniqueID:(int)arg0 connectionStream:(TRTCPConnectionStream *)arg1;
- (void)_handleReceivedPacketEvent:(NSObject *)arg0;

@end
