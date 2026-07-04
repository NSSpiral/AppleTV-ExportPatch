/* Runtime dump - MCNearbyDiscoveryPeer
 * Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCNearbyDiscoveryPeer : NSObject
{
    MCPeerID * _peerID;
    NSNetService * _netService;
    int _state;
    MCNearbyDiscoveryPeerConnection * _connection;
    MCNearbyDiscoveryPeerConnection * _trialConnection;
    NSMutableArray * _sendDataBuffer;
}

@property (copy, nonatomic) MCPeerID * peerID;
@property (nonatomic) int state;
@property (retain, nonatomic) NSNetService * netService;
@property (retain, nonatomic) MCNearbyDiscoveryPeerConnection * connection;
@property (retain, nonatomic) MCNearbyDiscoveryPeerConnection * trialConnection;
@property (retain, nonatomic) NSMutableArray * sendDataBuffer;

- (MCPeerID *)peerID;
- (void)setPeerID:(MCPeerID *)arg0;
- (void)attachConnection:(NSURLConnection *)arg0;
- (MCNearbyDiscoveryPeer *)initWithPeerID:(MCPeerID *)arg0;
- (NSNetService *)netService;
- (void)setNetService:(NSNetService *)arg0;
- (void)dealloc;
- (MCNearbyDiscoveryPeer *)init;
- (NSString *)description;
- (int)state;
- (void)setState:(int)arg0;
- (void)invalidate;
- (NSObject *)stringForState:(int)arg0;
- (MCNearbyDiscoveryPeerConnection *)connection;
- (void)setConnection:(MCNearbyDiscoveryPeerConnection *)arg0;
- (void)sendData:(NSData *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)flushDataBuffer;
- (MCNearbyDiscoveryPeerConnection *)trialConnection;
- (void)setTrialConnection:(MCNearbyDiscoveryPeerConnection *)arg0;
- (NSMutableArray *)sendDataBuffer;
- (void)setSendDataBuffer:(NSMutableArray *)arg0;
- (void)closeConnection;

@end
