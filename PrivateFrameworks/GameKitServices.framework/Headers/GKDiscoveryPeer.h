/* Runtime dump - GKDiscoveryPeer
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKDiscoveryPeer : NSObject <GKSimpleTimerDelegate>
{
    NSString * _serviceName;
    NSString * _playerID;
    NSString * _deviceID;
    NSMutableSet * _interfaces;
    NSMutableArray * _orderedInterfaces;
    NSMutableArray * _attemptedInterfaces;
    GKDiscoveryPeerConnection * _trialConnection;
    NSNumber * _chosenInterface;
    char _shouldSignalDiscovery;
    NSMutableArray * _sendDataBuffer;
    GKDiscoveryPeerConnection * _connection;
    GKSimpleTimer * _resolveTimer;
    id _resolveTimeoutHandler;
    NSObject<OS_dispatch_queue> * _syncQueue;
    int _state;
    double _discoveryTimeStamp;
}

@property (copy, nonatomic) NSString * serviceName;
@property (retain, nonatomic) NSMutableSet * interfaces;
@property (retain, nonatomic) NSMutableArray * orderedInterfaces;
@property (retain, nonatomic) NSMutableArray * attemptedInterfaces;
@property (retain, nonatomic) NSNumber * chosenInterface;
@property (retain, nonatomic) GKDiscoveryPeerConnection * trialConnection;
@property (nonatomic) char shouldSignalDiscovery;
@property (nonatomic) double discoveryTimeStamp;
@property (retain, nonatomic) NSMutableArray * sendDataBuffer;
@property (nonatomic) int state;
@property (retain, nonatomic) GKDiscoveryPeerConnection * connection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * syncQueue;
@property (copy, nonatomic) NSString * playerID;
@property (copy, nonatomic) NSString * deviceID;
@property (retain, nonatomic) GKSimpleTimer * resolveTimer;
@property (copy, nonatomic) id resolveTimeoutHandler;

- (void)dealloc;
- (NSString *)description;
- (int)state;
- (void)setState:(int)arg0;
- (void)invalidate;
- (NSObject *)stringForState:(int)arg0;
- (GKDiscoveryPeerConnection *)connection;
- (GKDiscoveryPeer *)initWithServiceName:(NSString *)arg0;
- (void)setConnection:(GKDiscoveryPeerConnection *)arg0;
- (NSString *)deviceID;
- (void)setDeviceID:(NSString *)arg0;
- (void)setServiceName:(NSString *)arg0;
- (NSString *)serviceName;
- (void)sendData:(NSData *)arg0 withCompletionHandler:(id /* block */)arg1;
- (char)parseServiceNameForInit:(id)arg0;
- (NSString *)playerID;
- (char)shouldSignalDiscovery;
- (NSMutableSet *)interfaces;
- (NSNumber *)chosenInterface;
- (void)setResolveTimeoutHandler:(id /* block */)arg0;
- (void)setResolveTimer:(GKSimpleTimer *)arg0;
- (GKSimpleTimer *)resolveTimer;
- (void)cleanUpForBrowse;
- (void)timeout:(GKSimpleTimer *)arg0;
- (NSObject *)nextInterfaceIndex;
- (void)startResolveTimerWithHandler:(id /* block */)arg0;
- (void)stopResolveTimer;
- (void)didLoseInterface:(id)arg0;
- (void)flushDataBuffer;
- (void)setPlayerID:(NSString *)arg0;
- (void)setInterfaces:(NSMutableSet *)arg0;
- (NSMutableArray *)orderedInterfaces;
- (void)setOrderedInterfaces:(NSMutableArray *)arg0;
- (NSMutableArray *)attemptedInterfaces;
- (void)setAttemptedInterfaces:(NSMutableArray *)arg0;
- (void)setChosenInterface:(NSNumber *)arg0;
- (GKDiscoveryPeerConnection *)trialConnection;
- (void)setTrialConnection:(GKDiscoveryPeerConnection *)arg0;
- (void)setShouldSignalDiscovery:(char)arg0;
- (NSMutableArray *)sendDataBuffer;
- (void)setSendDataBuffer:(NSMutableArray *)arg0;
- (NSObject<OS_dispatch_queue> *)syncQueue;
- (double)discoveryTimeStamp;
- (void)setDiscoveryTimeStamp:(double)arg0;
- (id /* block */)resolveTimeoutHandler;

@end
