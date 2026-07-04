/* Runtime dump - ADEmbeddedAdServer
 * Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

@interface ADEmbeddedAdServer : NSObject <HTSHTTPServerDelegate>
{
    HTSHTTPServer * _server;
    NSMutableDictionary * _authTokens;
    struct __FSEventStream * _stream;
    char _defaultsToNoQualifiedAds;
    char _alwaysRegenerateWebArchives;
    <ADEmbeddedAdServerDelegate> * _delegate;
    NSString * _publicURLRoot;
    NSDictionary * _defaultAdData;
    NSString * _adPath;
    NSArray * _adManifests;
}

@property (nonatomic) <ADEmbeddedAdServerDelegate> * delegate;
@property (readonly, nonatomic) unsigned short port;
@property (readonly, nonatomic) NSString * urlString;
@property (copy, nonatomic) NSString * publicURLRoot;
@property (copy, nonatomic) NSString * adPath;
@property (nonatomic) char alwaysRegenerateWebArchives;
@property (retain, nonatomic) NSDictionary * defaultAdData;
@property (nonatomic) char defaultsToNoQualifiedAds;
@property (nonatomic) char digestAuthenticationEnabled;
@property (nonatomic) double latency;
@property (nonatomic) double latencyStddev;
@property (nonatomic) double kbps;
@property (nonatomic) double bandwidthStddev;
@property (nonatomic) int cacheMaxAge;
@property (nonatomic) char pipeliningEnabled;
@property (readonly, nonatomic) unsigned long long totalBytesWritten;
@property (retain, nonatomic) NSArray * adManifests;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)adBundleAtURL:(NSURL *)arg0 matchesRequest:(NSURLRequest *)arg1;
+ (NSURL *)creativesForAdBundleAtURL:(NSURL *)arg0 matchingRequest:(NSURLRequest *)arg1;
+ (NSURL *)manifestForAdAtURL:(NSURL *)arg0;

- (NSString *)urlString;
- (void)dealloc;
- (void)setDelegate:(<ADEmbeddedAdServerDelegate> *)arg0;
- (ADEmbeddedAdServer *)init;
- (<ADEmbeddedAdServerDelegate> *)delegate;
- (unsigned short)port;
- (double)latency;
- (void)setLatency:(double)arg0;
- (void)resetNetworkSetup;
- (void)httpServerListenSocketFailed:(HTSHTTPServer *)arg0;
- (void)httpServer:(HTSHTTPServer *)arg0 receivedConnection:(HTSHTTPServerConnection *)arg1;
- (void)httpServer:(HTSHTTPServer *)arg0 closedConnection:(HTSHTTPServerConnection *)arg1;
- (void)httpServer:(HTSHTTPServer *)arg0 closedConnection:(HTSHTTPServerConnection *)arg1 withError:(NSError *)arg2;
- (HTSHTTPMessageResponse *)httpServer:(HTSHTTPServer *)arg0 proposedResponse:(HTSHTTPMessageResponse *)arg1;
- (void)httpServer:(HTSHTTPServer *)arg0 logMessage:(NSString *)arg1;
- (id)_mimeTypeForExtension:(id)arg0;
- (NSString *)httpServer:(HTSHTTPServer *)arg0 rewritePath:(NSString *)arg1;
- (void)httpServer:(HTSHTTPServer *)arg0 connection:(HTSHTTPServerConnection *)arg1 blockedSandboxViolation:(NSString *)arg2;
- (void)httpServer:(HTSHTTPServer *)arg0 dataForRequest:(HTSHTTPMessageRequest *)arg1 resolvedPath:(NSString *)arg2 handler:(id /* block */)arg3;
- (char)httpServer:(HTSHTTPServer *)arg0 shouldAllowRequest:(HTSHTTPMessageRequest *)arg1 withAuthorization:(NSString *)arg2;
- (HTSHTTPMessageResponse *)httpServer:(HTSHTTPServer *)arg0 unhandledRequest:(HTSHTTPMessageRequest *)arg1;
- (void)setKbps:(double)arg0;
- (char)digestAuthenticationEnabled;
- (void)setDigestAuthenticationEnabled:(char)arg0;
- (double)latencyStddev;
- (void)setLatencyStddev:(double)arg0;
- (double)kbps;
- (double)bandwidthStddev;
- (void)setBandwidthStddev:(double)arg0;
- (unsigned long long)totalBytesWritten;
- (int)cacheMaxAge;
- (void)setCacheMaxAge:(int)arg0;
- (char)pipeliningEnabled;
- (void)setPipeliningEnabled:(char)arg0;
- (void)httpServer:(HTSHTTPServer *)arg0 connection:(HTSHTTPServerConnection *)arg1 enqueuedResponseToRequest:(NSString *)arg2 statusCode:(int)arg3 length:(unsigned int)arg4;
- (void)httpServer:(HTSHTTPServer *)arg0 connection:(HTSHTTPServerConnection *)arg1 wroteBytes:(unsigned int)arg2 forResponseToRequest:(NSString *)arg3 remaining:(unsigned int)arg4;
- (void)httpServer:(HTSHTTPServer *)arg0 connection:(HTSHTTPServerConnection *)arg1 wroteBytes:(unsigned int)arg2 andCompletedResponseToRequest:(NSString *)arg3;
- (void)httpServer:(HTSHTTPServer *)arg0 connection:(HTSHTTPServerConnection *)arg1 droppedResponseToRequestBeforeClosing:(NSString *)arg2;
- (void)setAdPath:(NSString *)arg0;
- (void)setAdManifests:(NSArray *)arg0;
- (id)webArchiveForDirectory:(id)arg0 withBaseURL:(NSURL *)arg1;
- (NSURLRequest *)_handlePostRequest:(NSURLRequest *)arg0;
- (NSURLRequest *)_handleGenericPostRequest:(NSURLRequest *)arg0;
- (NSURLRequest *)_handleBatchRequest:(NSURLRequest *)arg0 message:(NSString *)arg1;
- (NSURLRequest *)_handleLogImpressionRequest:(NSURLRequest *)arg0 message:(NSString *)arg1;
- (NSURLRequest *)_handleLogSysEventRequest:(NSURLRequest *)arg0 message:(NSString *)arg1;
- (NSURLRequest *)_handleLogAdEventRequest:(NSURLRequest *)arg0 message:(NSString *)arg1;
- (NSURLRequest *)_handleLogAdContentErrorRequest:(NSURLRequest *)arg0 message:(NSString *)arg1;
- (NSURLRequest *)_handleSegmentUpdateRequest:(NSURLRequest *)arg0 message:(NSString *)arg1;
- (NSURLRequest *)_handleServerErrorRequest:(NSURLRequest *)arg0 message:(NSString *)arg1;
- (NSURLRequest *)_handleOptOutRequest:(NSURLRequest *)arg0 message:(NSString *)arg1;
- (NSURLRequest *)_handleManifestRequest:(NSURLRequest *)arg0 message:(NSString *)arg1;
- (NSURLRequest *)_handleHeartbeatTokenRequest:(NSURLRequest *)arg0 message:(NSString *)arg1;
- (NSURLRequest *)_handleRewardRequest:(NSURLRequest *)arg0 message:(NSString *)arg1;
- (NSURLRequest *)_handleRewardsCodeResultRequest:(NSURLRequest *)arg0 message:(NSString *)arg1;
- (NSURLRequest *)_handleMescalSignSAPSetupCertificateRequest:(NSURLRequest *)arg0 message:(NSString *)arg1;
- (NSURLRequest *)_handleMescalSignSAPSetupRequest:(NSURLRequest *)arg0 message:(NSString *)arg1;
- (NSURLRequest *)_handleListeningPresenceEventsRequest:(NSURLRequest *)arg0 message:(NSString *)arg1;
- (NSURLRequest *)_handleLogTileImpressionEventRequest:(NSURLRequest *)arg0 message:(NSString *)arg1;
- (NSURLRequest *)_handleLogAggregateMetricsRequest:(NSURLRequest *)arg0 message:(NSString *)arg1;
- (NSURLRequest *)_handleLogStationClientEventRequest:(NSURLRequest *)arg0 message:(NSString *)arg1;
- (NSURLRequest *)_handleLogPassEventRequest:(NSURLRequest *)arg0 message:(NSString *)arg1;
- (NSURLRequest *)_handleAdSlotRequest:(NSURLRequest *)arg0 message:(NSString *)arg1;
- (NSURLRequest *)_handleGenericAnalyticsRequest:(NSURLRequest *)arg0 message:(NSString *)arg1 type:(int)arg2;
- (NSString *)adDataForAdBundleAtPath:(NSString *)arg0 creative:(id)arg1 allowWebArchive:(char)arg2;
- (NSURLRequest *)_defaultResponseForBatchRequest:(NSURLRequest *)arg0;
- (NSArray *)adManifests;
- (id)_webResourcesInDirectory:(id)arg0 baseURL:(NSURL *)arg1;
- (NSString *)_webResourceForPath:(NSString *)arg0 url:(NSURL *)arg1;
- (UIColor *)_integerColorFromStringColor:(UIColor *)arg0;
- (id)_webArchiveFilenameForDirectory:(id)arg0 withBaseURL:(NSURL *)arg1;
- (NSString *)_adDataForPath:(NSString *)arg0 creative:(id)arg1 error:(id *)arg2;
- (ADEmbeddedAdServer *)initWithPort:(unsigned short)arg0 adPath:(NSString *)arg1;
- (NSString *)publicURLRoot;
- (void)setPublicURLRoot:(NSString *)arg0;
- (char)defaultsToNoQualifiedAds;
- (void)setDefaultsToNoQualifiedAds:(char)arg0;
- (NSDictionary *)defaultAdData;
- (void)setDefaultAdData:(NSDictionary *)arg0;
- (NSString *)adPath;
- (char)alwaysRegenerateWebArchives;
- (void)setAlwaysRegenerateWebArchives:(char)arg0;

@end
