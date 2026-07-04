/* Runtime dump - GKDiscoveryManager
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKDiscoveryManager : NSObject
{
    id _playerFoundHandler;
    id _playerLostHandler;
    id _receiveDataHandler;
    NSString * _playerID;
    NSString * _deviceID;
    NSMutableDictionary * _peers;
    GKDiscoveryBonjour * _bonjour;
    NSObject<OS_dispatch_queue> * _peersQueue;
}

@property (copy, nonatomic) id playerFoundHandler;
@property (copy, nonatomic) id playerLostHandler;
@property (copy, nonatomic) id receiveDataHandler;
@property (copy, nonatomic) NSString * playerID;
@property (copy, nonatomic) NSString * deviceID;
@property (retain, nonatomic) NSMutableDictionary * peers;
@property (retain, nonatomic) GKDiscoveryBonjour * bonjour;

+ (NSString *)parseDeviceIDFromServiceName:(NSString *)arg0;

- (void)dealloc;
- (GKDiscoveryManager *)init;
- (NSString *)deviceID;
- (void)setDeviceID:(NSString *)arg0;
- (void)setReceiveDataHandler:(id /* block */)arg0;
- (NSString *)playerID;
- (void)setPlayerID:(NSString *)arg0;
- (GKDiscoveryManager *)initWithDomain:(NSString *)arg0 type:(NSObject *)arg1;
- (id /* block */)playerFoundHandler;
- (void)setPlayerFoundHandler:(id /* block */)arg0;
- (id /* block */)playerLostHandler;
- (void)setPlayerLostHandler:(id /* block */)arg0;
- (id /* block */)receiveDataHandler;
- (CALayer *)startAdvertisingLocalPlayer:(id)arg0 discoveryInfo:(NSDictionary *)arg1;
- (void)stopAdvertising;
- (void)startBrowsingLocalPlayer:(id)arg0;
- (void)stopBrowsing;
- (void)sendDataToParticipant:(id)arg0 deviceID:(NSString *)arg1 data:(NSData *)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)forgetParticipant:(id)arg0 deviceID:(NSString *)arg1;
- (NSObject *)generateDeviceID;
- (void)processEvent:(int)arg0 forPeer:(NSObject *)arg1 withUserInfo:(NSDictionary *)arg2;
- (void)didLosePeer:(NSObject *)arg0;
- (NSString *)localServiceName;
- (void)passDataToGKLayer:(id)arg0 fromPeer:(MCPeerID *)arg1;
- (void)resolveForPeer:(NSObject *)arg0;
- (void)connectToSockAddr:(struct sockaddr *)arg0 port:(unsigned short)arg1 forPeer:(NSObject *)arg2;
- (NSObject *)serviceNameforDeviceID:(NSObject *)arg0 playerID:(NSString *)arg1;
- (NSArray *)peersList;
- (void)cleanUpPeersForBrowse;
- (void)addInterface:(unsigned int)arg0 withDiscoveryInfo:(NSDictionary *)arg1 forPeerWithServiceName:(NSString *)arg2;
- (void)removeInterface:(unsigned int)arg0 forPeerWithServiceName:(NSString *)arg1;
- (NSMutableDictionary *)peers;
- (void)setPeers:(NSMutableDictionary *)arg0;
- (GKDiscoveryBonjour *)bonjour;
- (void)setBonjour:(GKDiscoveryBonjour *)arg0;

@end
