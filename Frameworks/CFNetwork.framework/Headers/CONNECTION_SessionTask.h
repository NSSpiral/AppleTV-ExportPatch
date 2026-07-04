/* Runtime dump - CONNECTION_SessionTask
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface CONNECTION_SessionTask : NSObject
{
    struct _CFURLRequest * _originalRequest;
    struct _CFURLRequest * _currentRequest;
    struct __CFDictionary * _connectionProperties;
    struct __CFDictionary * _socketProperties;
    NSMutableURLRequest * _nsCurrentRequest;
    NSURLRequest * _nsOriginalRequest;
    NSURLSession * _session;
    BOOL _is_cellular;
    Class _my_protocolForTask;
    struct __PerformanceTiming * __performanceTiming;
}

- (void)updateCurrentRequest:(NSURLRequest *)arg0;
- (struct XCookieStorage *)_createXCookieStorage;
- (struct XCredentialStorage *)_createXCredentialStorage;
- (struct XURLCache *)_createXURLCache;
- (CONNECTION_SessionTask *)initWithRequest:(struct _CFURLRequest *)arg0 mutableCurrent:(struct _CFURLRequest *)arg1 connProps:(struct __CFDictionary *)arg2 sockProps:(struct __CFDictionary *)arg3 session:(NSURLSession *)arg4;
- (struct _CFURLRequest *)_currentCFURLRequest;
- (BOOL)shouldHandleCookiesAndSchemeIsAppropriate;
- (NSURLSessionTask *)_protocolForTask;
- (void)set_protocolForTask:(NSObject *)arg0;
- (struct _CFHSTSPolicy *)_copyHSTSPolicy;
- (long long)_priorityValue;
- (struct __CFURL *)currentRequest_URL;
- (long long)countOfBytesExpectedToReceive;
- (long long)countOfBytesSent;
- (long long)countOfBytesExpectedToSend;
- (struct _CFURLCache *)_cfCache;
- (NSDictionary *)_backgroundTaskTimingData;
- (void)cleanupAndBreakCycles;
- (struct _CFURLRequest *)_copyCurrentCFURLRequest;
- (struct _CFURLRequest *)_copyOriginalCFURLRequest;
- (struct __CFDictionary *)_copySocketStreamProperties;
- (struct __PerformanceTiming *)_performanceTiming;
- (void)_setSocketProperties:(struct __CFDictionary *)arg0 connectionProperties:(struct __CFDictionary *)arg1;
- (struct __CFHTTPMessage *)_copyHTTPMessage;
- (int)_cachePolicy;
- (double)_timeoutInterval;
- (struct __CFDictionary *)_proxySettings;
- (struct __CFDictionary *)_sslSettings;
- (unsigned char)_shouldPipelineHTTP;
- (unsigned char)_shouldUsePipelineHeuristics;
- (unsigned char)_shouldSkipPipelineProbe;
- (long)_requestPriority;
- (unsigned long)_allowedProtocolTypes;
- (char)_prohibitAuthUI;
- (unsigned char)_strictContentLength;
- (NSValue *)_connectionPropertyDuet;
- (long long)_suspensionThreshhold;
- (unsigned char)_preventsIdleSystemSleep;
- (long long)_expectedWorkload;
- (double)_timeWindowDelay;
- (double)_timeWindowDuration;
- (void)_takePreventIdleSleepAssertionIfAppropriate;
- (void)_setConnectionIsCellular:(BOOL)arg0;
- (void)_releasePreventIdleSleepAssertionIfAppropriate;
- (char)_shouldSkipPreferredClientCertificateLookup;
- (struct __CFURL *)originalRequest_mainDocumentURL;
- (void)_initializeTimingDataWithSessionConfiguration:(NSURLSession *)arg0;
- (struct _CFHSTSPolicy *)_cfHSTS;
- (struct _CFURLCredentialStorage *)_cfCreds;
- (struct OpaqueCFHTTPCookieStorage *)_cfCookies;
- (BOOL)_shouldHandleCookies;
- (int)_cookieAcceptPolicy;
- (NSArray *)_contentDispositionFallbackArray;
- (BOOL)_allowsCellular;
- (int)_networkServiceType;
- (NSString *)_boundInterfaceIdentifier;
- (BOOL)_disallowCellular;
- (void)dealloc;
- (CAState *)state;
- (float)priority;
- (long long)startTime;
- (NSURLSession *)session;
- (NSError *)error;
- (long long)countOfBytesReceived;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (struct _CFURLRequest *)originalRequest;
- (struct _CFURLRequest *)currentRequest;
- (NSString *)taskIdentifier;

@end
