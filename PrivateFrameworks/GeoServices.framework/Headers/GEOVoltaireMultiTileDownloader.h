/* Runtime dump - GEOVoltaireMultiTileDownloader
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVoltaireMultiTileDownloader : NSObject <NSURLConnectionDelegate>
{
    GEOTileKeyList * _keyList;
    GEOTileKeyList * _requiresLocalization;
    GEOTileKeyList * _receivedKeys;
    NSURL * _requestURL;
    char _useStatusCodes;
    NSMutableSet * _errorCodes;
    NSURLConnection * _connection;
    GEONetworkDataReader * _reader;
    NSString * _sharedPrefix;
    NSString * _userAgent;
    NSData * _auditToken;
    <GEOVoltaireMultiTileDownloaderDelegate> * _delegate;
    unsigned short _providerID;
    GEOTileKeyMap * _baseTilesWaitingForLocalized;
    GEOTileKeyMap * _localizedTilesWaitingForBase;
    NSString * _postString;
    char _requireWiFi;
    int _attempts;
    double _startTime;
    double _timeout;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    NSLocale * _locale;
}

@property (retain, nonatomic) NSString * userAgent;
@property (retain, nonatomic) NSData * auditToken;
@property (readonly, nonatomic) NSURL * requestURL;
@property (nonatomic) char useStatusCodes;
@property (nonatomic) char requireWiFi;
@property (nonatomic) <GEOVoltaireMultiTileDownloaderDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)cancel;
- (void)dealloc;
- (void)setDelegate:(<GEOVoltaireMultiTileDownloaderDelegate> *)arg0;
- (<GEOVoltaireMultiTileDownloaderDelegate> *)delegate;
- (void)start;
- (void)connection:(NSURLConnection *)arg0 didFailWithError:(char)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveData:(char)arg1;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg0;
- (void)connection:(NSURLConnection *)arg0 didReceiveResponse:(char)arg1;
- (void)_cancelWithError:(NSError *)arg0;
- (NSData *)auditToken;
- (void)setUserAgent:(NSString *)arg0;
- (void)setAuditToken:(NSData *)arg0;
- (NSString *)userAgent;
- (double)elapsed;
- (char)useStatusCodes;
- (GEOVoltaireMultiTileDownloader *)initWithURL:(NSString *)arg0 keyList:(GEOTileKeyList *)arg1 manifestConfiguration:(GEOResourceManifestConfiguration *)arg2 locale:(NSLocale *)arg3;
- (void)setUseStatusCodes:(char)arg0;
- (NSURL *)requestURL;
- (NSString *)_localizationURLIfNecessaryForTileKey:(struct _GEOTileKey *)arg0;
- (void)_cleanupConnection;
- (void)_failWithError:(NSError *)arg0;
- (NSString *)_localizationURLForTileKey:(struct _GEOTileKey *)arg0;
- (struct _GEOTileKey)_tileKeyForURL:(NSURL *)arg0 edition:(unsigned int *)arg1 isLocalized:(char *)arg2;
- (id)_mergeBaseTile:(id)arg0 withLocalizationTile:(id)arg1;
- (void)logDownloadDetails;
- (void)_tryParseTiles;
- (void)setRequireWiFi:(char)arg0;
- (char)requireWiFi;
- (NSString *)_urlForTileKey:(struct _GEOTileKey *)arg0;

@end
