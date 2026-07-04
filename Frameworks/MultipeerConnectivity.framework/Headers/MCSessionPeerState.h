/* Runtime dump - MCSessionPeerState
 * Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCSessionPeerState : NSObject
{
    char _connectPeerCalled;
    MCPeerID * _peerID;
    int _state;
    NSMutableDictionary * _outgoingStreamRequests;
    NSMutableDictionary * _incomingStreams;
    NSMutableDictionary * _outgoingStreams;
    NSData * _nearbyConnectionData;
    int _certificateDecision;
    unsigned int _newStreamOpenRequestID;
    unsigned int _newStreamID;
}

@property (readonly, copy, nonatomic) MCPeerID * peerID;
@property (nonatomic) int state;
@property (nonatomic) char connectPeerCalled;
@property (copy, nonatomic) NSData * nearbyConnectionData;
@property (retain, nonatomic) NSMutableDictionary * outgoingStreamRequests;
@property (retain, nonatomic) NSMutableDictionary * outgoingStreams;
@property (retain, nonatomic) NSMutableDictionary * incomingStreams;
@property (readonly, nonatomic) unsigned int newStreamOpenRequestID;
@property (readonly, nonatomic) unsigned int newStreamID;
@property (nonatomic) int certificateDecision;

- (MCPeerID *)peerID;
- (MCSessionPeerState *)initWithPeer:(NSObject *)arg0;
- (unsigned int)newStreamID;
- (unsigned int)newStreamOpenRequestID;
- (NSMutableDictionary *)outgoingStreamRequests;
- (void)setOutgoingStreamRequests:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)incomingStreams;
- (void)setIncomingStreams:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)outgoingStreams;
- (void)setOutgoingStreams:(NSMutableDictionary *)arg0;
- (NSData *)nearbyConnectionData;
- (void)setNearbyConnectionData:(NSData *)arg0;
- (char)connectPeerCalled;
- (void)setConnectPeerCalled:(char)arg0;
- (int)certificateDecision;
- (void)setCertificateDecision:(int)arg0;
- (void)dealloc;
- (int)state;
- (void)setState:(int)arg0;

@end
