/* Runtime dump - ATVHSDataServerManager
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSDataServerManager : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate, NSURLConnectionDelegate>
{
    char _isWirelessInterfaceActive;
    char _isWiredInterfaceActive;
    char _activeNetworkInterfaceInitialized;
    NSString * _homeSharingGroupID;
    <ATVHSDataServerManagerDelegate> * _delegate;
    NSNetServiceBrowser * _iTunesServiceBrowser;
    NSNetServiceBrowser * _photoAppServiceBrowser;
    NSMutableArray * _monitoredServices;
    NSMutableArray * _resolvingServices;
    NSMutableDictionary * _verifyServerRequests;
    NSMutableDictionary * _bonjourRemoveTimers;
}

@property (readonly, nonatomic) int discoveryState;
@property (copy, nonatomic) NSString * homeSharingGroupID;
@property (weak, nonatomic) <ATVHSDataServerManagerDelegate> * delegate;
@property (retain, nonatomic) NSNetServiceBrowser * iTunesServiceBrowser;
@property (retain, nonatomic) NSNetServiceBrowser * photoAppServiceBrowser;
@property (retain, nonatomic) NSMutableArray * monitoredServices;
@property (retain, nonatomic) NSMutableArray * resolvingServices;
@property (retain, nonatomic) NSMutableDictionary * verifyServerRequests;
@property (retain, nonatomic) NSMutableDictionary * bonjourRemoveTimers;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)_iTunesHomeSharingGroupIDWithTXTRecord:(NSObject *)arg0;
+ (NSObject *)_iTunesServerConfigurationWithService:(NSObject *)arg0 andTXTRecord:(NSObject *)arg1;
+ (NSObject *)_photoAppHomeSharingGroupIDWithTXTRecord:(NSObject *)arg0;
+ (NSObject *)_photoAppServerConfigurationWithService:(NSObject *)arg0 andTXTRecord:(NSObject *)arg1;
+ (NSObject *)_groupIDWithTXTRecord:(NSObject *)arg0 andGroupIDKey:(NSString *)arg1;
+ (NSObject *)_serverConfigurationWithService:(NSObject *)arg0 andTXTRecord:(NSObject *)arg1 sharingVersionKey:(NSString *)arg2;
+ (unsigned long long)_uint64ValueWithHexString:(NSString *)arg0;

- (NSString *)homeSharingGroupID;
- (void)setHomeSharingGroupID:(NSString *)arg0;
- (void)setDelegate:(<ATVHSDataServerManagerDelegate> *)arg0;
- (ATVHSDataServerManager *)init;
- (<ATVHSDataServerManagerDelegate> *)delegate;
- (void)connection:(NSURLConnection *)arg0 didFailWithError:(NSError *)arg1;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg0;
- (void).cxx_destruct;
- (void)resolveServer:(NSObject *)arg0;
- (void)_requestDidFail:(id)arg0;
- (void)_networkStateChanged:(NSNotification *)arg0;
- (NSArray *)homeSharesOfTypes:(unsigned int)arg0;
- (NSMutableDictionary *)verifyServerRequests;
- (NSMutableDictionary *)bonjourRemoveTimers;
- (NSObject *)_connectableHomeSharesOfType:(unsigned int)arg0;
- (void)_resolveBonjourWithDataServer:(ATVDataServer *)arg0;
- (void)_startVerifyServerRequestForServer:(NSObject *)arg0 dataClient:(ATVDataClient *)arg1;
- (void)_startBonjourRemoveTimerForServer:(NSObject *)arg0 dataClient:(ATVDataClient *)arg1;
- (void)_handleDiscoveredService:(NSObject *)arg0 withTXTRecord:(NSObject *)arg1;
- (void)_handleResolvedService:(NSObject *)arg0 withTXTRecord:(NSObject *)arg1;
- (NSURLConnection *)_serverIDForVerifyServerRequestConnection:(NSURLConnection *)arg0;
- (NSObject *)_findDataServerWithID:(int)arg0;
- (char)_stopVerifyServerRequestForServerID:(NSObject *)arg0;
- (void)_bonjourRemoveTimerFired:(id)arg0;
- (char)_stopBonjourRemoveTimerForServerID:(NSObject *)arg0;
- (void)_bonjourRemoveTimerDataClientStatusDidChange:(NSDictionary *)arg0;
- (void)_handleDiscoveredPhotoAppService:(NSObject *)arg0 withTXTRecord:(NSObject *)arg1;
- (void)_handleDiscoveredITunesService:(NSObject *)arg0 withTXTRecord:(NSObject *)arg1;
- (void)_handleDiscoveredService:(NSObject *)arg0 withTXTRecord:(NSObject *)arg1 andServerConfiguration:(NSDictionary *)arg2;
- (NSDictionary *)_dataServerWithConfiguration:(NSDictionary *)arg0;
- (NSMutableArray *)resolvingServices;
- (void)_handleResolvedPhotoAppService:(NSObject *)arg0 withTXTRecord:(NSObject *)arg1;
- (void)_handleResolvedITunesService:(NSObject *)arg0 withTXTRecord:(NSObject *)arg1;
- (void)_handleResolvedService:(NSObject *)arg0 withTXTRecord:(NSObject *)arg1 andServerConfiguration:(NSDictionary *)arg2;
- (NSObject *)_dataClientsWithServer:(NSObject *)arg0;
- (void)netServiceBrowserWillSearch:(NSNetServiceBrowser *)arg0;
- (void)netServiceBrowserDidStopSearch:(NSNetServiceBrowser *)arg0;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg0 didNotSearch:(NSDictionary *)arg1;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg0 didFindService:(NSNetService *)arg1 moreComing:(char)arg2;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg0 didRemoveService:(NSNetService *)arg1 moreComing:(char)arg2;
- (void)netServiceDidResolveAddress:(NSNetService *)arg0;
- (void)netService:(NSNetService *)arg0 didNotResolve:(NSDictionary *)arg1;
- (void)netService:(NSNetService *)arg0 didUpdateTXTRecordData:(NSData *)arg1;
- (void)disableDiscovery;
- (void)enableDiscoveryWithGroupID:(NSString *)arg0 includePhotoAppServers:(char)arg1;
- (int)discoveryState;
- (NSNetServiceBrowser *)iTunesServiceBrowser;
- (void)setITunesServiceBrowser:(NSNetServiceBrowser *)arg0;
- (NSNetServiceBrowser *)photoAppServiceBrowser;
- (void)setPhotoAppServiceBrowser:(NSNetServiceBrowser *)arg0;
- (NSMutableArray *)monitoredServices;
- (void)setMonitoredServices:(NSMutableArray *)arg0;
- (void)setResolvingServices:(NSMutableArray *)arg0;
- (void)setVerifyServerRequests:(NSMutableDictionary *)arg0;
- (void)setBonjourRemoveTimers:(NSMutableDictionary *)arg0;
- (NSURLConnection *)connection:(NSURLConnection *)arg0 willCacheResponse:(NSURLResponse *)arg1;

@end
