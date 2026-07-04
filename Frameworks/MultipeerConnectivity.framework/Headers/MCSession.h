/* Runtime dump - MCSession
 * Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCSession : NSObject
{
    <MCSessionDelegate> * _delegate;
    <MCSessionPrivateDelegate> * _privateDelegate;
    MCPeerID * _myPeerID;
    NSArray * _securityIdentity;
    int _encryptionPreference;
    struct OpaqueGCKSession * _gckSession;
    struct OpaqueAGPSession * _agpSession;
    unsigned int _gckPID;
    NSMutableDictionary * _peerIDMap;
    NSObject<OS_dispatch_queue> * _syncQueue;
    NSMutableDictionary * _peerStates;
    NSMutableDictionary * _connectionPendingPeerEvents;
    NSObject<OS_dispatch_queue> * _callbackQueue;
}

@property (nonatomic) <MCSessionPrivateDelegate> * privateDelegate;
@property (weak, nonatomic) <MCSessionDelegate> * delegate;
@property (readonly, nonatomic) MCPeerID * myPeerID;
@property (readonly, nonatomic) NSArray * securityIdentity;
@property (readonly, nonatomic) int encryptionPreference;
@property (readonly, nonatomic) NSArray * connectedPeers;
@property (nonatomic) struct OpaqueGCKSession * gckSession;
@property (nonatomic) struct OpaqueAGPSession * agpSession;
@property (nonatomic) unsigned int gckPID;
@property (retain, nonatomic) NSMutableDictionary * peerIDMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * syncQueue;
@property (nonatomic) <MCSessionPrivateDelegate> * privateDelegate;
@property (retain, nonatomic) NSMutableDictionary * peerStates;
@property (retain, nonatomic) NSMutableDictionary * connectionPendingPeerEvents;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * callbackQueue;

+ (NSObject *)stringForSessionState:(int)arg0;
+ (MCSession *)stringForMCSessionSendDataMode:(int)arg0;

- (NSMutableDictionary *)peerStates;
- (MCSession *)initWithPeer:(NSObject *)arg0;
- (void)syncSendXDataStreamCloseFromSenderToPID:(unsigned int)arg0 streamID:(unsigned int)arg1 closeReason:(unsigned short)arg2;
- (void)syncCloseOutgoingStream:(NSObject *)arg0 forPeer:(NSObject *)arg1 state:(NSObject *)arg2 error:(NSError *)arg3 removeObserver:(char)arg4;
- (void)syncStartStreamWithName:(NSString *)arg0 toPeer:(NSObject *)arg1 mcFD:(int)arg2 isResource:(char)arg3;
- (struct OpaqueAGPSession *)agpSession;
- (int)encryptionPreference;
- (MCPeerID *)myPeerID;
- (NSArray *)securityIdentity;
- (NSObject *)stringForEncryptionPreference:(int)arg0;
- (NSArray *)connectedPeers;
- (void)syncCloseIncomingStream:(NSObject *)arg0 forPeer:(NSObject *)arg1 state:(NSObject *)arg2 error:(NSError *)arg3 reason:(int)arg4 removeObserver:(char)arg5;
- (void)syncSendXDataConnectionBlobPushToPID:(unsigned int)arg0 connectionBlob:(id)arg1;
- (void)syncSendXDataStreamCloseFromReceiverToPID:(unsigned int)arg0 streamID:(unsigned int)arg1 closeReason:(unsigned short)arg2;
- (void)syncCancelIncomingStream:(NSObject *)arg0 fromPeer:(MCPeerID *)arg1;
- (void)syncCancelOutgoingStream:(NSObject *)arg0 toPeer:(NSObject *)arg1;
- (void)syncSendXDataPeerIDPushToPID:(unsigned int)arg0;
- (void)startConnectionWithIndirectPID:(unsigned int)arg0;
- (void)syncHandleNetworkEvent:(struct ? *)arg0 pid:(unsigned int)arg1 freeEventWhenDone:(char *)arg2;
- (void)syncPeer:(NSObject *)arg0 changeStateTo:(int)arg1 shouldForceCallback:(char)arg2;
- (void)syncCloseStreamsForPeer:(NSObject *)arg0;
- (void)syncHandleXDataDataPacket:(char *)arg0 packetSize:(int)arg1 forPeer:(NSObject *)arg2 state:(NSObject *)arg3;
- (void)syncSendXDataStreamOpenResponseToPID:(unsigned int)arg0 withRequestID:(unsigned int)arg1 streamID:(unsigned int)arg2;
- (void)cancelIncomingStream:(NSObject *)arg0 fromPeer:(MCPeerID *)arg1;
- (MCSession *)initWithPeer:(NSObject *)arg0 securityIdentity:(NSArray *)arg1 encryptionPreference:(int)arg2;
- (void)syncGetConnectionDataForPeerState:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (char)isEncryptionPreferenceCompatible:(int)arg0;
- (void)syncConnectPeer:(NSObject *)arg0 withConnectionData:(NSData *)arg1;
- (void)syncSendData:(NSData *)arg0 toPeers:(id)arg1 withDataMode:(int)arg2;
- (void)cancelOutgoingStream:(NSObject *)arg0 toPeer:(NSObject *)arg1;
- (void)nearbyConnectionDataForPeer:(NSObject *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)connectPeer:(NSObject *)arg0 withNearbyConnectionData:(NSData *)arg1;
- (void)cancelConnectPeer:(NSObject *)arg0;
- (char)sendData:(NSData *)arg0 toPeers:(id)arg1 withMode:(int)arg2 error:(id *)arg3;
- (NSURL *)sendResourceAtURL:(NSURL *)arg0 withName:(NSString *)arg1 toPeer:(NSObject *)arg2 withCompletionHandler:(id /* block */)arg3;
- (NSString *)startStreamWithName:(NSString *)arg0 toPeer:(NSObject *)arg1 error:(id *)arg2;
- (void)setGckSession:(struct OpaqueGCKSession *)arg0;
- (void)setAgpSession:(struct OpaqueAGPSession *)arg0;
- (void)setGckPID:(unsigned int)arg0;
- (NSMutableDictionary *)peerIDMap;
- (void)setPeerIDMap:(NSMutableDictionary *)arg0;
- (void)setPeerStates:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)connectionPendingPeerEvents;
- (void)setConnectionPendingPeerEvents:(NSMutableDictionary *)arg0;
- (void)peerDidDeclineInvitation:(id)arg0;
- (void)dealloc;
- (void)setDelegate:(<MCSessionDelegate> *)arg0;
- (NSString *)description;
- (<MCSessionDelegate> *)delegate;
- (void)disconnect;
- (NSObject<OS_dispatch_queue> *)callbackQueue;
- (void)setCallbackQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (struct OpaqueGCKSession *)gckSession;
- (unsigned int)gckPID;
- (<MCSessionPrivateDelegate> *)privateDelegate;
- (void)setPrivateDelegate:(<MCSessionPrivateDelegate> *)arg0;
- (NSObject<OS_dispatch_queue> *)syncQueue;
- (void)setSyncQueue:(NSObject<OS_dispatch_queue> *)arg0;

@end
