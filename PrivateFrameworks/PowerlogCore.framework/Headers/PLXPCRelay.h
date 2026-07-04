/* Runtime dump - PLXPCRelay
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLXPCRelay : NSObject
{
    char _relayActive;
    NSObject<OS_xpc_object> * _xpcConnection;
    NSObject<OS_xpc_object> * _relayConnection;
}

@property char relayActive;
@property (retain) NSObject<OS_xpc_object> * xpcConnection;
@property (retain, nonatomic) NSObject<OS_xpc_object> * relayConnection;

+ (PLXPCRelay *)sharedInstance;

- (PLXPCRelay *)init;
- (void).cxx_destruct;
- (void)stopRelay;
- (void)startRelay;
- (void)setRelayActive:(char)arg0;
- (void)resetRelayConnection;
- (NSObject<OS_xpc_object> *)relayConnection;
- (char)relayActive;
- (void)setRelayConnection:(NSObject<OS_xpc_object> *)arg0;
- (char)isDebugEnabled;
- (void)handlePeer:(NSObject *)arg0 forEvent:(struct __GSEvent *)arg1;
- (NSObject<OS_xpc_object> *)xpcConnection;
- (void)setXpcConnection:(NSObject<OS_xpc_object> *)arg0;

@end
