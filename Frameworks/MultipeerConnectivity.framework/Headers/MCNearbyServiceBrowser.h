/* Runtime dump - MCNearbyServiceBrowser
 * Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCNearbyServiceBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    <MCNearbyServiceBrowserDelegate> * _delegate;
    char _isBrowsing;
    char _wasBrowsing;
    MCPeerID * _myPeerID;
    NSString * _serviceType;
    NSString * _formattedServiceType;
    NSMutableDictionary * _netServices;
    NSMutableDictionary * _peers;
    NSNetServiceBrowser * _networkBrowser;
    int _outgoingInviteID;
    NSObject<OS_dispatch_queue> * _syncQueue;
    NSMutableDictionary * _invites;
}

@property (weak, nonatomic) <MCNearbyServiceBrowserDelegate> * delegate;
@property (readonly, nonatomic) MCPeerID * myPeerID;
@property (copy, nonatomic) NSString * serviceType;
@property (retain, nonatomic) NSMutableDictionary * netServices;
@property (retain, nonatomic) NSMutableDictionary * peers;
@property (retain, nonatomic) NSNetServiceBrowser * networkBrowser;
@property (nonatomic) int outgoingInviteID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * syncQueue;
@property (retain, nonatomic) NSMutableDictionary * invites;
@property (copy, nonatomic) NSString * formattedServiceType;
@property (nonatomic) char isBrowsing;
@property (nonatomic) char wasBrowsing;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (MCPeerID *)myPeerID;
- (MCNearbyServiceBrowser *)initWithPeer:(NSObject *)arg0 serviceType:(NSString *)arg1;
- (void)startBrowsingForPeers;
- (void)stopBrowsingForPeers;
- (void)invitePeer:(NSObject *)arg0 toSession:(NSObject *)arg1 withContext:(NSObject *)arg2 timeout:(double)arg3;
- (void)applicationDidEnterBackgroundNotification:(NSNotification *)arg0;
- (void)applicationWillEnterForegroundNotification:(NSNotification *)arg0;
- (void)applicationWillTerminateNotification:(NSNotification *)arg0;
- (NSString *)formattedServiceType;
- (void)syncSendData:(NSData *)arg0 toPeer:(NSObject *)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)syncSendDictionary:(NSDictionary *)arg0 toPeer:(NSObject *)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)syncCloseConnectionForPeer:(NSObject *)arg0;
- (void)parseIDString:(id *)arg0 displayName:(id *)arg1 fromIdentifier:(NSString *)arg2;
- (void)syncReceivedData:(NSData *)arg0 fromPeer:(MCPeerID *)arg1;
- (void)syncAttachConnection:(NSURLConnection *)arg0 toPeer:(NSObject *)arg1;
- (void)setFormattedServiceType:(NSString *)arg0;
- (int)outgoingInviteID;
- (void)setOutgoingInviteID:(int)arg0;
- (NSMutableDictionary *)invites;
- (void)setInvites:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)netServices;
- (char)isBrowsing;
- (NSNetServiceBrowser *)networkBrowser;
- (void)setNetworkBrowser:(NSNetServiceBrowser *)arg0;
- (void)setIsBrowsing:(char)arg0;
- (void)syncStartBrowsingForPeers;
- (void)syncStopBrowsingForPeers;
- (void)setWasBrowsing:(char)arg0;
- (char)wasBrowsing;
- (int)syncNextOutgoingInviteID;
- (void)syncHandleInviteTimeout:(id)arg0 forPeer:(NSObject *)arg1;
- (void)syncInitiateConnectionToPeer:(NSObject *)arg0;
- (void)syncHandleInviteResponse:(NSURLResponse *)arg0 fromPeer:(MCPeerID *)arg1;
- (void)syncInvitePeer:(NSObject *)arg0 toSession:(NSObject *)arg1 withContext:(NSObject *)arg2 timeout:(double)arg3;
- (NSDictionary *)rebuildUserDiscoveryInfoFromTXTRecordDictionary:(NSDictionary *)arg0;
- (void)setNetServices:(NSMutableDictionary *)arg0;
- (void)dealloc;
- (void)setDelegate:(<MCNearbyServiceBrowserDelegate> *)arg0;
- (MCNearbyServiceBrowser *)init;
- (NSString *)description;
- (<MCNearbyServiceBrowserDelegate> *)delegate;
- (void)netServiceBrowserWillSearch:(NSNetServiceBrowser *)arg0;
- (void)netServiceBrowserDidStopSearch:(NSNetServiceBrowser *)arg0;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg0 didNotSearch:(NSDictionary *)arg1;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg0 didFindDomain:(NSString *)arg1 moreComing:(char)arg2;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg0 didFindService:(NSNetService *)arg1 moreComing:(char)arg2;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg0 didRemoveDomain:(NSString *)arg1 moreComing:(char)arg2;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg0 didRemoveService:(NSNetService *)arg1 moreComing:(char)arg2;
- (void)netService:(NSNetService *)arg0 didUpdateTXTRecordData:(NSData *)arg1;
- (NSString *)serviceType;
- (NSObject<OS_dispatch_queue> *)syncQueue;
- (NSMutableDictionary *)peers;
- (void)setPeers:(NSMutableDictionary *)arg0;
- (void)setSyncQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setServiceType:(NSString *)arg0;

@end
