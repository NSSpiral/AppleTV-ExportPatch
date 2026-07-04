/* Runtime dump - NSURLConnection
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLConnection : NSObject <NSURLAuthenticationChallengeSender>
{
    NSURLConnectionInternal * _internal;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, copy) NSURLRequest * originalRequest;
@property (readonly, copy) NSURLRequest * currentRequest;

+ (void)_geo_sendAttributedAsynchronousRequest:(NSURLRequest *)arg0 queue:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
+ (NSURLRequest *)_geo_sendAttributedSynchronousRequest:(NSURLRequest *)arg0 returningResponse:(id *)arg1 error:(id *)arg2;
+ (void)_geo_sendAsynchronousRequest:(NSURLRequest *)arg0 connectionProperties:(NSDictionary *)arg1 completionHandler:(id /* block */)arg2;
+ (void)_geo_sendAsynchronousRequest:(NSURLRequest *)arg0 queue:(NSObject *)arg1 connectionProperties:(NSDictionary *)arg2 completionHandler:(id /* block */)arg3;
+ (NSURLRequest *)_geo_sendSynchronousRequest:(NSURLRequest *)arg0 connectionProperties:(NSDictionary *)arg1 returningResponse:(id *)arg2 error:(id *)arg3;
+ (void)_setMIMETypesWithNoSizeLimit:(id)arg0;
+ (void)_resourceLoadLoop:(NSObject *)arg0;
+ (struct __CFRunLoop *)resourceLoaderRunLoop;
+ (void)_setLoaderThreadPriority:(int)arg0;
+ (void)_setCollectsTimingData:(char)arg0;
+ (char)_collectsTimingData;
+ (void)_collectTimingDataWithOptions:(unsigned int)arg0;
+ (unsigned int)_timingDataOptions;
+ (char)canHandleRequest:(char)arg0;
+ (unsigned int)_sweeperInterval;
+ (void)_setSweeperInterval:(unsigned int)arg0;
+ (NSURLRequest *)sendSynchronousRequest:(NSURLRequest *)arg0 returningResponse:(id *)arg1 error:(id *)arg2;
+ (NSURLRequest *)connectionWithRequest:(NSURLRequest *)arg0 delegate:(NSObject *)arg1;
+ (void)sendAsynchronousRequest:(NSURLRequest *)arg0 queue:(NSObject *)arg1 completionHandler:(id /* block */)arg2;

- (NSURLRequest *)_geo_initWithAttributedRequest:(char)arg0 delegate:(NSObject *)arg1 startImmediately:(char)arg2;
- (NSURLConnection *)initWithRequest:(NSURLRequest *)arg0 delegate:(NSObject *)arg1;
- (void)_suspendLoading;
- (void)_resumeLoading;
- (NSDictionary *)connectionProperties;
- (id)_dlInternal;
- (id)_cfInternal;
- (void)download;
- (void)cancel;
- (void)dealloc;
- (NSString *)description;
- (void)start;
- (void)useCredential:(NSObject *)arg0 forAuthenticationChallenge:(NSObject *)arg1;
- (char)defersCallbacks;
- (void)setDefersCallbacks:(char)arg0;
- (NSData *)_timingData;
- (void)setDelegateQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)scheduleInRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (NSURLRequest *)_initWithRequest:(NSURLRequest *)arg0 delegate:(NSObject *)arg1 usesCache:(char)arg2 maxContentLength:(long long)arg3 startImmediately:(char)arg4 connectionProperties:(NSDictionary *)arg5;
- (NSURLRequest *)originalRequest;
- (NSURLRequest *)currentRequest;
- (NSURLConnection *)initWithRequest:(NSURLRequest *)arg0 delegate:(NSObject *)arg1 startImmediately:(char)arg2;
- (void)unscheduleFromRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(NSObject *)arg0;
- (void)cancelAuthenticationChallenge:(NSObject *)arg0;
- (void)performDefaultHandlingForAuthenticationChallenge:(NSObject *)arg0;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(NSObject *)arg0;

@end
