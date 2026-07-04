/* Runtime dump - MCNearbyServiceAdvertiser
 * Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCNearbyServiceAdvertiser : NSObject <NSNetServiceDelegate>
{
    <MCNearbyServiceAdvertiserDelegate> * _delegate;
    char _isAdvertising;
    char _wasAdvertising;
    MCPeerID * _myPeerID;
    NSDictionary * _discoveryInfo;
    NSString * _serviceType;
    NSString * _formattedServiceType;
    NSNetService * _networkServer;
    NSData * _TXTRecordData;
    NSMutableDictionary * _peers;
    int _outgoingInviteID;
    NSObject<OS_dispatch_queue> * _syncQueue;
    NSMutableDictionary * _invites;
}

@property (weak, nonatomic) <MCNearbyServiceAdvertiserDelegate> * delegate;
@property (readonly, nonatomic) MCPeerID * myPeerID;
@property (copy, nonatomic) NSDictionary * discoveryInfo;
@property (copy, nonatomic) NSString * serviceType;
@property (copy, nonatomic) NSString * formattedServiceType;
@property (retain, nonatomic) NSMutableDictionary * peers;
@property (retain, nonatomic) NSNetService * networkServer;
@property (retain, nonatomic) NSData * TXTRecordData;
@property (nonatomic) int outgoingInviteID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * syncQueue;
@property (retain, nonatomic) NSMutableDictionary * invites;
@property (nonatomic) char isAdvertising;
@property (nonatomic) char wasAdvertising;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setTXTRecordData:(NSData *)arg0;
- (MCPeerID *)myPeerID;
- (NSDictionary *)txtRecordDataWithDiscoveryInfo:(NSDictionary *)arg0;
- (void)applicationDidEnterBackgroundNotification:(NSNotification *)arg0;
- (void)applicationWillEnterForegroundNotification:(NSNotification *)arg0;
- (void)applicationWillTerminateNotification:(NSNotification *)arg0;
- (NSDictionary *)discoveryInfo;
- (NSDictionary *)makeTXTRecordDataWithDiscoveryInfo:(NSDictionary *)arg0;
- (char)isAdvertising;
- (NSNetService *)networkServer;
- (NSString *)formattedServiceType;
- (void)setNetworkServer:(NSNetService *)arg0;
- (void)setIsAdvertising:(char)arg0;
- (void)syncStartAdvertisingPeer;
- (void)syncStopAdvertisingPeer;
- (void)setWasAdvertising:(char)arg0;
- (void)stopAdvertisingPeer;
- (char)wasAdvertising;
- (void)syncSendData:(NSData *)arg0 toPeer:(NSObject *)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)syncSendDictionary:(NSDictionary *)arg0 toPeer:(NSObject *)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)syncCloseConnectionForPeer:(NSObject *)arg0;
- (void)syncHandleInvite:(id)arg0 fromPeer:(MCPeerID *)arg1;
- (void)syncHandleInviteConnect:(id)arg0 fromPeer:(MCPeerID *)arg1;
- (void)parseIDString:(id *)arg0 displayName:(id *)arg1 fromIdentifier:(NSString *)arg2;
- (void)syncReceivedData:(NSData *)arg0 fromPeer:(MCPeerID *)arg1;
- (void)syncAttachConnection:(NSURLConnection *)arg0 toPeer:(NSObject *)arg1;
- (void)syncHandleIncomingInputStream:(NSObject *)arg0 outputStream:(NSOutputStream *)arg1;
- (MCNearbyServiceAdvertiser *)initWithPeer:(NSObject *)arg0 discoveryInfo:(NSDictionary *)arg1 serviceType:(NSString *)arg2;
- (void)startAdvertisingPeer;
- (void)setDiscoveryInfo:(NSDictionary *)arg0;
- (void)setFormattedServiceType:(NSString *)arg0;
- (int)outgoingInviteID;
- (void)setOutgoingInviteID:(int)arg0;
- (NSMutableDictionary *)invites;
- (void)setInvites:(NSMutableDictionary *)arg0;
- (void)dealloc;
- (void)setDelegate:(<MCNearbyServiceAdvertiserDelegate> *)arg0;
- (MCNearbyServiceAdvertiser *)init;
- (NSString *)description;
- (<MCNearbyServiceAdvertiserDelegate> *)delegate;
- (NSData *)TXTRecordData;
- (void)netServiceDidPublish:(NSNetService *)arg0;
- (void)netService:(NSNetService *)arg0 didNotPublish:(NSDictionary *)arg1;
- (void)netServiceDidStop:(NSNetService *)arg0;
- (void)netService:(NSNetService *)arg0 didAcceptConnectionWithInputStream:(NSInputStream *)arg1 outputStream:(NSOutputStream *)arg2;
- (NSString *)serviceType;
- (NSObject<OS_dispatch_queue> *)syncQueue;
- (NSMutableDictionary *)peers;
- (void)setPeers:(NSMutableDictionary *)arg0;
- (void)setSyncQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setServiceType:(NSString *)arg0;

@end
