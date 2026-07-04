/* Runtime dump - HTSHTTPServer
 * Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

@interface HTSHTTPServer : NSObject
{
    int _listenSocket4;
    NSMutableArray * _activeConnections;
    NSObject<OS_dispatch_queue> * _serverQueue;
    NSObject<OS_dispatch_source> * _listenSource4;
    NSString * _nodename;
    unsigned long long _bytesWritten;
    double _lastReplenishTime;
    NSMutableDictionary * _authTokens;
    char _digestAuthenticationEnabled;
    char _pipeliningEnabled;
    unsigned short _port;
    <HTSHTTPServerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    struct __CFHTTPMessage * _currentRequest;
    NSString * _documentRoot;
    int _cacheMaxAge;
    double _latency;
    double _latencyStddev;
    double _kbps;
    double _bandwidthStddev;
    unsigned long long _totalBytesWritten;
}

@property (nonatomic) <HTSHTTPServerDelegate> * delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> * delegateQueue;
@property (readonly, nonatomic) unsigned short port;
@property (readonly, nonatomic) NSString * urlString;
@property (copy, nonatomic) NSString * documentRoot;
@property (nonatomic) char digestAuthenticationEnabled;
@property (nonatomic) double latency;
@property (nonatomic) double latencyStddev;
@property (nonatomic) double kbps;
@property (nonatomic) double bandwidthStddev;
@property (nonatomic) int cacheMaxAge;
@property (nonatomic) char pipeliningEnabled;
@property (readonly, nonatomic) unsigned long long totalBytesWritten;
@property (nonatomic) struct __CFHTTPMessage * currentRequest;

- (NSString *)urlString;
- (void)setCurrentRequest:(struct __CFHTTPMessage *)arg0;
- (void)dealloc;
- (void)setDelegate:(<HTSHTTPServerDelegate> *)arg0;
- (HTSHTTPServer *)init;
- (<HTSHTTPServerDelegate> *)delegate;
- (unsigned short)port;
- (NSObject<OS_dispatch_queue> *)delegateQueue;
- (void)setDelegateQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (struct __CFHTTPMessage *)currentRequest;
- (NSString *)documentRoot;
- (void)setDocumentRoot:(NSString *)arg0;
- (double)latency;
- (void)setLatency:(double)arg0;
- (void)resetNetworkSetup;
- (char)_listenOnPort:(unsigned short)arg0;
- (HTSHTTPServer *)initWithPort:(unsigned short)arg0 documentRoot:(NSString *)arg1;
- (void)_cleanupListenSocket;
- (double)_currentLatency;
- (void)_handleGeneralRequest:(NSURLRequest *)arg0 fromConnection:(NSURLConnection *)arg1;
- (id)_mimeTypeForExtension:(id)arg0;
- (void)_returnResponse:(NSURLResponse *)arg0 toConnection:(NSURLConnection *)arg1 closeAfterSending:(char)arg2;
- (NSString *)_restrictedFilePathForRelativePath:(NSString *)arg0;
- (void)_respondWithData:(NSData *)arg0 mimeType:(NSString *)arg1 toRequest:(NSURLRequest *)arg2 connection:(NSURLConnection *)arg3;
- (NSURLRequest *)_authenticationResponseForRequest:(NSURLRequest *)arg0;
- (void)_connectionComplete:(id)arg0;
- (void)_connection:(NSXPCConnection *)arg0 hadError:(NSError *)arg1;
- (void)_connection:(NSXPCConnection *)arg0 didReceiveRequest:(NSURLRequest *)arg1;
- (unsigned long long)availableBandwidth;
- (void)consumedBandwidth:(unsigned long long)arg0;
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

@end
