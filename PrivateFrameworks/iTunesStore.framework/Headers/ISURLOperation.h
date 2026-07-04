/* Runtime dump - ISURLOperation
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISURLOperation : ISOperation
{
    NSURLRequest * _activeURLRequest;
    SSAuthenticationContext * _authenticationContext;
    NSURLConnection * _connection;
    NSMutableData * _dataBuffer;
    ISDataProvider * _dataProvider;
    int _networkRetryCount;
    NSCountedSet * _redirectURLs;
    SSMutableURLRequestProperties * _requestProperties;
    NSURLResponse * _response;
    char _shouldSetCookies;
    char _usesPrivateCookieStore;
    ISURLRequestPerformance * _performanceMetrics;
    char _loadsHTTPFailures;
    char _uploadProgressRequested;
    NSArray * _passThroughErrors;
}

@property <ISURLOperationDelegate> * delegate;
@property (retain) ISDataProvider * dataProvider;
@property (retain) SSAuthenticationContext * authenticationContext;
@property (retain, nonatomic) NSArray * passThroughErrors;
@property (copy) SSURLRequestProperties * requestProperties;
@property (retain) NSURLResponse * response;
@property (readonly) ISURLRequestPerformance * performanceMetrics;
@property char tracksPerformanceMetrics;
@property (nonatomic) char uploadProgressRequested;
@property char _loadsHTTPFailures;
@property char _shouldSetCookies;
@property char _usesPrivateCookieStore;

+ (ISURLOperation *)copyUserAgent;
+ (struct __CFURLStorageSession *)newSharedCacheStorageSession;
+ (struct _CFURLCache *)sharedCFURLCache;
+ (char)isSharedCacheStorageSession:(struct __CFURLStorageSession *)arg0;

- (void)_updateProgress;
- (void)setAuthenticationContext:(SSAuthenticationContext *)arg0;
- (void)dealloc;
- (ISURLOperation *)init;
- (void)_run;
- (NSURLRequest *)request;
- (void)run;
- (NSURLResponse *)response;
- (void)connection:(NSURLConnection *)arg0 didFailWithError:(NSError *)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveData:(char)arg1;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg0;
- (void)connection:(NSURLConnection *)arg0 didReceiveResponse:(char)arg1;
- (void)setDataProvider:(ISDataProvider *)arg0;
- (ISDataProvider *)dataProvider;
- (SSAuthenticationContext *)authenticationContext;
- (void)handleResponse:(NSURLResponse *)arg0;
- (void)_logRequest:(NSURLRequest *)arg0;
- (void)setResponse:(NSURLResponse *)arg0;
- (SSURLRequestProperties *)requestProperties;
- (void)setRequestProperties:(SSURLRequestProperties *)arg0;
- (NSURLConnection *)connection:(NSURLConnection *)arg0 willSendRequest:(NSURLRequest *)arg1 redirectResponse:(NSURLResponse *)arg2;
- (NSURLConnection *)connection:(NSURLConnection *)arg0 needNewBodyStream:(NSObject *)arg1;
- (void)connection:(NSURLConnection *)arg0 didSendBodyData:(int)arg1 totalBytesWritten:(int)arg2 totalBytesExpectedToWrite:(int)arg3;
- (ISURLRequestPerformance *)performanceMetrics;
- (void)setPassThroughErrors:(NSArray *)arg0;
- (void)setTracksPerformanceMetrics:(char)arg0;
- (void)_stopIfCancelled;
- (void)setRequest:(NSURLRequest *)arg0;
- (void)connection:(NSURLConnection *)arg0 willSendRequestForAuthenticationChallenge:(NSObject *)arg1;
- (NSString *)_copyAuthenticationContext;
- (NSURL *)_activeURL;
- (NSURL *)_sanitizedURLForURL:(NSURL *)arg0;
- (NSDictionary *)_requestProperties;
- (id)_copyQueryStringDictionaryForRedirect:(id)arg0;
- (NSURL *)newRequestWithURL:(NSURL *)arg0;
- (void)_setActiveURLRequest:(NSURLRequest *)arg0;
- (char)_usesPrivateCookieStore;
- (NSString *)_accountIdentifier;
- (NSString *)_copyAcceptLanguageString;
- (NSObject *)_sanitizedDescriptionForObject:(NSObject *)arg0;
- (NSError *)_errorWithDefaultStringsForError:(NSError *)arg0;
- (void)_stopConnection;
- (void)_handleReceivedData:(NSData *)arg0;
- (void)_handleReceivedResponse:(NSURLResponse *)arg0;
- (char)isUploadProgressRequested;
- (NSString *)_sanitizedStringForString:(NSString *)arg0;
- (char)_shouldFollowRedirectWithRequest:(NSURLRequest *)arg0 error:(id *)arg1;
- (char)_shouldSetCookies;
- (NSURLRequest *)_handleRedirectRequest:(NSURLRequest *)arg0 response:(NSURLResponse *)arg1;
- (void)_performDefaultHandlingForAuthenticationChallenge:(NSObject *)arg0;
- (void)_handleFinishedLoading;
- (char)_processResponseData:(NSData *)arg0 error:(id *)arg1;
- (NSData *)_decodedDataForData:(NSData *)arg0;
- (void)_logResponseBody:(NSObject *)arg0;
- (void)_sendOutputToDelegate:(NSObject *)arg0;
- (NSString *)_errorWithDomain:(NSString *)arg0 code:(int)arg1;
- (char)handleRedirectFromDataProvider:(NSObject *)arg0 error:(id *)arg1;
- (void)_retry;
- (void)_sendResponseToDelegate:(NSObject *)arg0;
- (char)_isPassThroughStatus:(int)arg0;
- (char)_loadsHTTPFailures;
- (void)_sendContentLengthToDelegate:(long long)arg0;
- (char)_validateContentLength:(long long)arg0 error:(id *)arg1;
- (NSArray *)passThroughErrors;
- (void)_sendRequestToDelegate:(NSObject *)arg0;
- (char)_runRequestWithURL:(NSURL *)arg0 dataConnectionServiceType:(struct __CFString *)arg1;
- (NSObject *)_copyConnectionPropertiesWithDataConnectionServiceType:(struct __CFString *)arg0;
- (void)_willSendRequest:(NSURLRequest *)arg0;
- (char)shouldFollowRedirectWithRequest:(NSURLRequest *)arg0 returningError:(id *)arg1;
- (char)tracksPerformanceMetrics;
- (NSURLRequest *)_activeURLRequest;
- (void)_setLoadsHTTPFailures:(char)arg0;
- (void)_setShouldSetCookies:(char)arg0;
- (void)_setUsesPrivateCookieStore:(char)arg0;
- (void)setUploadProgressRequested:(char)arg0;

@end
