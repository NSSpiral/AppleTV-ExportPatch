/* Runtime dump - GKSession
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKSession : NSObject
{
    id _session;
}

@property <GKSessionDelegate> * delegate;
@property (readonly) NSString * sessionID;
@property (readonly) NSString * displayName;
@property (readonly) int sessionMode;
@property (readonly) NSString * peerID;
@property char available;
@property double disconnectTimeout;
@property <GKSessionPrivateDelegate> * privateDelegate;
@property char busy;
@property char wifiEnabled;
@property (readonly) GKConnection * connection;

+ (void)initialize;

- (NSString *)peerID;
- (void)dealloc;
- (void)setDelegate:(<GKSessionDelegate> *)arg0;
- (NSString *)description;
- (<GKSessionDelegate> *)delegate;
- (NSString *)displayName;
- (GKConnection *)connection;
- (GKSession *)initWithSessionID:(NSString *)arg0 displayName:(NSString *)arg1 sessionMode:(int)arg2;
- (GKSession *)initWithConnection:(GKConnection *)arg0 delegate:(<GKSessionDelegate> *)arg1;
- (NSString *)sessionID;
- (<GKSessionPrivateDelegate> *)privateDelegate;
- (void)disconnectFromAllPeers;
- (NSObject *)displayNameForPeer:(NSObject *)arg0;
- (void)setBusy:(char)arg0;
- (void)setPrivateDelegate:(<GKSessionPrivateDelegate> *)arg0;
- (char)sendData:(NSData *)arg0 toPeers:(id)arg1 withDataMode:(int)arg2 error:(id *)arg3;
- (char)sendDataToAllPeers:(id)arg0 withDataMode:(int)arg1 error:(id *)arg2;
- (void)setDataReceiveHandler:(<GKSessionDataReceiveHandler> *)arg0 withContext:(void *)arg1;
- (void)connectToPeer:(NSObject *)arg0 withTimeout:(double)arg1;
- (void)cancelConnectToPeer:(NSObject *)arg0;
- (char)acceptConnectionFromPeer:(NSObject *)arg0 error:(id *)arg1;
- (void)denyConnectionFromPeer:(NSObject *)arg0;
- (void)disconnectPeerFromAllPeers:(id)arg0;
- (NSObject *)peersWithConnectionState:(int)arg0;
- (char)wifiEnabled;
- (void)setWifiEnabled:(char)arg0;
- (char)isPeerBusy:(id)arg0;
- (void)setDisconnectTimeout:(double)arg0;
- (double)disconnectTimeout;
- (int)sessionMode;
- (id)privateImpl;
- (char)isAvailable;
- (void)setAvailable:(char)arg0;
- (char)isBusy;

@end
