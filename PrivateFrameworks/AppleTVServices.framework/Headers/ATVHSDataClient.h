/* Runtime dump - ATVHSDataClient
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSDataClient : ATVDataClient <ATVHSConnectionDelegate>
{
    char _supportsDRMTokenEncryption;
    ATVHSDataClientConnectionConfiguration * _connectionConfiguration;
    ATVHSDataClientSessionConfiguration * _sessionConfiguration;
    NSString * _keybagPath;
    unsigned long _sharingVersion;
    unsigned long _fairPlayContext;
    NSURL * _serverURL;
    NSURL * _serverIPURL;
    ATVHSConnection * _connection;
    NSMutableDictionary * _artworkRequestMap;
    NSDate * _lastRequestErrorDate;
    unsigned long long _machineID;
}

@property (readonly, nonatomic) char hasSharedPhotos;
@property (retain, nonatomic) ATVHSDataClientConnectionConfiguration * connectionConfiguration;
@property (retain, nonatomic) ATVHSDataClientSessionConfiguration * sessionConfiguration;
@property (copy, nonatomic) NSString * keybagPath;
@property (nonatomic) unsigned long long machineID;
@property (nonatomic) unsigned long sharingVersion;
@property (readonly, copy, nonatomic) NSString * clientITunesSharingVersionHTTPHeaderValue;
@property (nonatomic) char supportsDRMTokenEncryption;
@property (nonatomic) unsigned long fairPlayContext;
@property (copy, nonatomic) NSURL * serverURL;
@property (copy, nonatomic) NSURL * serverIPURL;
@property (readonly, copy, nonatomic) NSURL * baseURL;
@property (retain, nonatomic) ATVHSConnection * connection;
@property (retain, nonatomic) NSMutableDictionary * artworkRequestMap;
@property (retain, nonatomic) NSDate * lastRequestErrorDate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)_serverURLWithHost:(NSString *)arg0 port:(int)arg1;

- (void)setKeybagPath:(NSString *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSURL *)baseURL;
- (void).cxx_destruct;
- (ATVHSConnection *)connection;
- (void)setConnection:(ATVHSConnection *)arg0;
- (NSObject *)imageKeyForObject:(NSObject *)arg0;
- (unsigned long)sharingVersion;
- (ATVHSDataClient *)initWithMachineID:(unsigned long long)arg0 sharingVersion:(unsigned long)arg1 clientName:(NSString *)arg2 clientType:(unsigned int)arg3;
- (void)concreteDataClientConnect;
- (void)concreteDataClientDisconnect;
- (NSString *)keybagPath;
- (NSMutableDictionary *)artworkRequestMap;
- (NSSet *)imageRequestWithAsset:(NSSet *)arg0 artworkIdentifier:(NSString *)arg1 requestedSize:(struct CGSize)arg2 crop:(char)arg3 withContext:(void *)arg4;
- (void)cancelArtworkRequestForIdentifier:(NSString *)arg0;
- (void)artworkRequestCompletedForIdentifier:(NSString *)arg0;
- (void)queryCompleted:(id)arg0 withStatus:(unsigned long)arg1;
- (void)processRequest:(NSURLRequest *)arg0 query:(NSObject *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionHandler:(id /* block */)arg3;
- (void)handleDPAPQuery:(NSObject *)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionHandler:(id /* block */)arg2;
- (void)setConnectionConfiguration:(ATVHSDataClientConnectionConfiguration *)arg0;
- (void)_destroyFairPlayContext;
- (NSURL *)serverURL;
- (unsigned long long)machineID;
- (void)_updateServerURLs;
- (void)_handleRequestFailed;
- (NSURL *)serverIPURL;
- (void)_handleBadSessionIDError;
- (void)_dataClientConnectionHandler:(id /* block */)arg0;
- (void)_playbackErrorHandler:(id /* block */)arg0;
- (void)mediaItemPropertyUpdateHandler:(id /* block */)arg0;
- (void)setconnection:(ATVHSConnection *)arg0;
- (ATVHSDataClientConnectionConfiguration *)connectionConfiguration;
- (char)_clientSupportsDAAPProtocolMajorVersion:(unsigned int)arg0 minorVersion:(unsigned int)arg1;
- (void)handleDAAPQuery:(NSObject *)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateServerIPAddress:(NSString *)arg0;
- (void)setLastRequestErrorDate:(NSDate *)arg0;
- (void)_updateServerIPURL;
- (void)setServerURL:(NSURL *)arg0;
- (void)setServerIPURL:(NSURL *)arg0;
- (void)connection:(ATVHSConnection *)arg0 requestDidFail:(id)arg1 withError:(NSError *)arg2;
- (void)connection:(ATVHSConnection *)arg0 ipAddressDidChange:(NSDictionary *)arg1;
- (NSString *)clientITunesSharingVersionHTTPHeaderValue;
- (NSObject *)playbackURLWithItemID:(unsigned long)arg0;
- (void)handlePlaybackTimeout;
- (char)hasSharedPhotos;
- (unsigned long)fairPlayContext;
- (char)supportsProperty:(NSObject *)arg0;
- (char)queryFilterSupportsProperty:(NSObject *)arg0;
- (char)groupingSupportsProperty:(NSObject *)arg0;
- (char)canProcessQueryConcurrently:(id)arg0;
- (char)processQueryAsync:(id)arg0;
- (void)executeQuery:(NSObject *)arg0 withCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionHandler:(id /* block */)arg2;
- (NSSet *)imageRequestWithAsset:(NSSet *)arg0 imageID:(NSString *)arg1 size:(struct CGSize)arg2 crop:(char)arg3 context:(NSObject *)arg4;
- (void)cancelImageRequest:(NSURLRequest *)arg0;
- (NSDictionary *)networkTestURLWithOptions:(NSDictionary *)arg0 headers:(id *)arg1;
- (void)setMachineID:(unsigned long long)arg0;
- (void)setSharingVersion:(unsigned long)arg0;
- (char)supportsDRMTokenEncryption;
- (void)setSupportsDRMTokenEncryption:(char)arg0;
- (void)setFairPlayContext:(unsigned long)arg0;
- (void)setArtworkRequestMap:(NSMutableDictionary *)arg0;
- (NSDate *)lastRequestErrorDate;
- (NSObject *)loadImageForObject:(NSObject *)arg0 size:(struct CGSize)arg1 crop:(char)arg2 completionHandler:(id /* block */)arg3;
- (void)cancelLoad:(id)arg0;
- (NSSet *)imageRequestWithAsset:(NSSet *)arg0 artworkIdentifier:(NSString *)arg1 requestedSize:(struct CGSize)arg2 crop:(char)arg3;
- (NSObject *)itemsRequestWithQuery:(NSObject *)arg0;
- (NSObject *)groupsRequestWithQuery:(NSObject *)arg0;
- (NSObject *)browseRequestWithQuery:(NSObject *)arg0;
- (NSObject *)playlistRequestWithQuery:(NSObject *)arg0;
- (NSObject *)drmTokenRequestWithQuery:(NSObject *)arg0;
- (NSObject *)rentalRequestWithQuery:(NSObject *)arg0;
- (NSObject *)photoDBRequestWithQuery:(NSObject *)arg0;
- (void)submitPropertyUpdateQueryWithURLStr:(NSString *)arg0 property:(NSString *)arg1 propertyValue:(unsigned long)arg2 itemID:(unsigned long long)arg3;
- (ATVHSDataClientSessionConfiguration *)sessionConfiguration;
- (void)setSessionConfiguration:(ATVHSDataClientSessionConfiguration *)arg0;

@end
