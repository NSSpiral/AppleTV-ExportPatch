/* Runtime dump - GKDiscovery
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKDiscovery : NSObject
{
    GKDiscoveryManager * _manager;
}

@property (copy, nonatomic) id playerFoundHandler;
@property (copy, nonatomic) id playerLostHandler;
@property (copy, nonatomic) id receiveDataHandler;
@property (retain, nonatomic) GKDiscoveryManager * manager;

- (void)dealloc;
- (GKDiscovery *)init;
- (GKDiscoveryManager *)manager;
- (void)setReceiveDataHandler:(id /* block */)arg0;
- (GKDiscovery *)initWithDomain:(NSString *)arg0 type:(NSObject *)arg1;
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
- (void)setManager:(GKDiscoveryManager *)arg0;

@end
