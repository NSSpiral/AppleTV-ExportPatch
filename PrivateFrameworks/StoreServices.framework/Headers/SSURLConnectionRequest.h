/* Runtime dump - SSURLConnectionRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSURLConnectionRequest : SSRequest <SSXPCCoding>
{
    SSURLRequestProperties * _requestProperties;
    SSAuthenticationContext * _authenticationContext;
    SSVURLDataConsumer * _dataConsumer;
    NSURL * _destinationFileURL;
    char _runsInProcess;
    SSVFairPlaySAPSession * _sapSession;
    SSVSAPSignaturePolicy * _sapSignaturePolicy;
    char _sendsResponseForHTTPFailures;
    char _shouldMescalSign;
    SSURLBag * _urlBag;
    SSVURLBagInterpreter * _urlBagInterpreter;
}

@property (readonly) NSURLRequest * URLRequest;
@property (readonly) SSURLRequestProperties * requestProperties;
@property (copy) NSURL * destinationFileURL;
@property char shouldMescalSign;
@property (nonatomic) <SSURLConnectionRequestDelegate> * delegate;
@property (copy) SSAuthenticationContext * authenticationContext;
@property (retain) SSVURLDataConsumer * dataConsumer;
@property char runsInProcess;
@property char sendsResponseForHTTPFailures;
@property (retain) SSVFairPlaySAPSession * SAPSession;
@property (copy) SSVSAPSignaturePolicy * SAPSignaturePolicy;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)newRadioRequestWithRequestContext:(NSObject *)arg0 requestProperties:(SSURLRequestProperties *)arg1 storeBag:(RadioStoreBag *)arg2;

- (SSURLConnectionRequest *)initWithRequestProperties:(SSURLRequestProperties *)arg0;
- (void)setShouldMescalSign:(char)arg0;
- (void)setAuthenticationContext:(SSAuthenticationContext *)arg0;
- (void)startWithConnectionResponseBlock:(id /* block */)arg0;
- (void)startWithCompletionBlock:(id /* block */)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSURLConnectionRequest *)initWithXPCEncoding:(NSString *)arg0;
- (SSURLConnectionRequest *)initWithURLRequest:(NSString *)arg0;
- (void)dealloc;
- (SSURLConnectionRequest *)init;
- (char)start;
- (void)setRunsInProcess:(char)arg0;
- (void)setSAPSession:(NSObject *)arg0;
- (void)setSAPSignaturePolicy:(NSObject *)arg0;
- (SSAuthenticationContext *)authenticationContext;
- (SSURLRequestProperties *)requestProperties;
- (void)setDataConsumer:(SSVURLDataConsumer *)arg0;
- (SSVURLDataConsumer *)dataConsumer;
- (NSURLRequest *)URLRequest;
- (void)configureWithURLBag:(NSString *)arg0;
- (void)configureWithURLBagDictionary:(NSDictionary *)arg0;
- (SSVFairPlaySAPSession *)SAPSession;
- (SSVSAPSignaturePolicy *)SAPSignaturePolicy;
- (char)_canRunInProcess;
- (char)runsInProcess;
- (NSURL *)destinationFileURL;
- (char)sendsResponseForHTTPFailures;
- (char)shouldMescalSign;
- (void)setSendsResponseForHTTPFailures:(char)arg0;
- (void)setDestinationFileURL:(NSURL *)arg0;

@end
