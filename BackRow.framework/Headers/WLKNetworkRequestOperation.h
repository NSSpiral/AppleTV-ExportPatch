/* Runtime dump - WLKNetworkRequestOperation
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface WLKNetworkRequestOperation : NSOperation
{
    NSError * _error;
    id _response;
    unsigned int _numRetries;
    char _allowAuthentication;
    char _requiresMescal;
    char _encodeQueryParams;
    char _runsInDaemon;
    <WLKNetworkRequestOperationDelegate> * _delegate;
    NSDictionary * _additionalHeaderFields;
    NSString * _serverRouteKey;
    NSDictionary * _serverRouteReplacements;
    NSDictionary * _queryParameters;
    NSString * _identifier;
    id _requestCompletionBlock;
    NSString * _endpoint;
    NSString * _httpMethod;
    NSURL * _baseURL;
    SSURLConnectionResponse * _fullResponse;
    NSString * _callerOverride;
    double _timeout;
}

@property (weak, nonatomic) <WLKNetworkRequestOperationDelegate> * delegate;
@property (nonatomic) char allowAuthentication;
@property (nonatomic) char requiresMescal;
@property (nonatomic) char encodeQueryParams;
@property (retain, nonatomic) NSDictionary * additionalHeaderFields;
@property (readonly, copy, nonatomic) NSString * serverRouteKey;
@property (readonly, copy, nonatomic) NSDictionary * serverRouteReplacements;
@property (readonly, copy, nonatomic) NSDictionary * queryParameters;
@property (readonly, nonatomic) double timeout;
@property (readonly, copy, nonatomic) NSString * identifier;
@property (copy, nonatomic) id requestCompletionBlock;
@property (readonly, nonatomic) id response;
@property (readonly, nonatomic) NSError * error;
@property (readonly, copy, nonatomic) NSString * endpoint;
@property (readonly, copy, nonatomic) NSString * httpMethod;
@property (copy, nonatomic) NSURL * baseURL;
@property (readonly, copy, nonatomic) NSURL * defaultBaseURL;
@property (readonly, copy, nonatomic) SSURLConnectionResponse * fullResponse;
@property (retain, nonatomic) NSString * callerOverride;
@property (nonatomic) char runsInDaemon;

+ (NSURL *)_defaultBaseURL;
+ (unsigned int)preferredCachePolicy;
+ (void)logNetworkHeaders:(NSDictionary *)arg0 identifier:(NSString *)arg1;
+ (void)_networkRequest:(NSURLRequest *)arg0 completion:(id /* block */)arg1;

- (void)setCallerOverride:(NSString *)arg0;
- (WLKNetworkRequestOperation *)initWithServerRouteKey:(NSString *)arg0 serverRouteReplacements:(NSDictionary *)arg1 queryParameters:(NSDictionary *)arg2;
- (id)responseProcessor;
- (WLKNetworkRequestOperation *)initWithEndpoint:(NSString *)arg0 queryParameters:(NSDictionary *)arg1 httpMethod:(NSString *)arg2 timeout:(double)arg3;
- (WLKNetworkRequestOperation *)initWithServerRouteKey:(NSString *)arg0 serverRouteReplacements:(NSDictionary *)arg1 queryParameters:(NSDictionary *)arg2 timeout:(double)arg3;
- (WLKNetworkRequestOperation *)initWithEndpoint:(NSString *)arg0 queryParameters:(NSDictionary *)arg1;
- (NSError *)_runNetworkOperationAndReturnError:(id *)arg0;
- (void)_finishWithResponse:(NSURLResponse *)arg0;
- (char)requiresMescal;
- (void)setRequiresMescal:(char)arg0;
- (void)didFail;
- (void)_didFailWithError:(NSError *)arg0;
- (void)_didFinishWithResponse:(NSURLResponse *)arg0;
- (NSURL *)defaultBaseURL;
- (NSString *)_requestPropertiesWithServerRouteKey:(NSString *)arg0 queryParameters:(NSDictionary *)arg1 additionalHeaderFields:(NSDictionary *)arg2;
- (NSObject *)_requestPropertiesWithAPIEndpoint:(NSObject *)arg0 baseURL:(NSURL *)arg1 queryParameters:(NSDictionary *)arg2 httpMethod:(NSString *)arg3 additionalHeaderFields:(NSDictionary *)arg4;
- (WLKNetworkRequestOperation *)initWithEndpoint:(NSString *)arg0 queryParameters:(NSDictionary *)arg1 httpMethod:(NSString *)arg2;
- (WLKNetworkRequestOperation *)initWithServerRouteKey:(NSString *)arg0;
- (WLKNetworkRequestOperation *)initWithServerRouteKey:(NSString *)arg0 serverRouteReplacements:(NSDictionary *)arg1;
- (char)allowAuthentication;
- (void)setAllowAuthentication:(char)arg0;
- (char)encodeQueryParams;
- (void)setEncodeQueryParams:(char)arg0;
- (NSDictionary *)additionalHeaderFields;
- (void)setAdditionalHeaderFields:(NSDictionary *)arg0;
- (NSString *)serverRouteKey;
- (NSDictionary *)serverRouteReplacements;
- (SSURLConnectionResponse *)fullResponse;
- (NSString *)callerOverride;
- (char)runsInDaemon;
- (void)setRunsInDaemon:(char)arg0;
- (id /* block */)requestCompletionBlock;
- (void)setDelegate:(<WLKNetworkRequestOperationDelegate> *)arg0;
- (WLKNetworkRequestOperation *)init;
- (<WLKNetworkRequestOperationDelegate> *)delegate;
- (NSString *)identifier;
- (NSURLResponse *)response;
- (NSURL *)baseURL;
- (void)main;
- (void).cxx_destruct;
- (void)setRequestCompletionBlock:(id /* block */)arg0;
- (NSString *)endpoint;
- (NSError *)error;
- (NSString *)httpMethod;
- (void)didFinish;
- (void)setBaseURL:(NSURL *)arg0;
- (void)_failWithError:(NSError *)arg0;
- (double)timeout;
- (NSDictionary *)queryParameters;

@end
