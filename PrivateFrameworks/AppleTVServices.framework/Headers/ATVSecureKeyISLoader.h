/* Runtime dump - ATVSecureKeyISLoader
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVSecureKeyISLoader : ATVSecureKeyLoader
{
    NSURL * _tokenServerURL;
    NSURL * _stopServerURL;
    NSDictionary * _tokenServerParameters;
    NSString * _assetIDForStopping;
    int _state;
    NSData * _certificateData;
    NSMutableArray * _requestsAwaitingCertFetch;
    unsigned int _loadingContext;
}

@property (copy, nonatomic) NSURL * tokenServerURL;
@property (copy, nonatomic) NSURL * stopServerURL;
@property (copy, nonatomic) NSDictionary * tokenServerParameters;
@property (copy, nonatomic) NSString * assetIDForStopping;
@property (nonatomic) int state;
@property (retain, nonatomic) NSData * certificateData;
@property (retain, nonatomic) NSMutableArray * requestsAwaitingCertFetch;
@property (nonatomic) unsigned int loadingContext;

- (int)state;
- (void)setState:(int)arg0;
- (void).cxx_destruct;
- (NSURLRequest *)_certificateURLForKeyRequest:(NSURLRequest *)arg0;
- (unsigned int)loadingContext;
- (void)_loadCertificateDataFromURL:(NSURL *)arg0 loadingContext:(unsigned int)arg1 attemptNumber:(unsigned int)arg2 completion:(id /* block */)arg3;
- (NSURLRequest *)_assetIDForKeyRequest:(NSURLRequest *)arg0;
- (NSURLRequest *)_assetIDDataForKeyRequest:(NSURLRequest *)arg0;
- (void)setAssetIDForStopping:(NSString *)arg0;
- (NSMutableArray *)requestsAwaitingCertFetch;
- (void)setCertificateData:(NSData *)arg0;
- (void)_startKeyRequests:(id)arg0 token:(NSString *)arg1;
- (void)_failKeyRequests:(id)arg0 withError:(NSError *)arg1;
- (NSString *)assetIDForStopping;
- (void)_sendStopForAssetID:(NSObject *)arg0;
- (void)_fetchTokenForAssetID:(NSObject *)arg0 completion:(id /* block */)arg1;
- (void)setLoadingContext:(unsigned int)arg0;
- (void)_parseCertificateURL:(id *)arg0 keyServerURL:(id *)arg1 assetID:(id *)arg2 fromKeyRequest:(NSURLRequest *)arg3;
- (void)_logNon200StatusForResponseData:(NSData *)arg0;
- (char)_allowedToRetryRequestForError:(NSError *)arg0 response:(NSURLResponse *)arg1;
- (double)_randomRetryDelayForFailedAttemptNumber:(unsigned int)arg0;
- (void)_sendKeyRequestsToServer:(NSObject *)arg0 token:(NSString *)arg1;
- (void)_generateKeyRequestDataForKeyRequests:(id)arg0 completion:(id /* block */)arg1;
- (NSDictionary *)tokenServerParameters;
- (NSURL *)stopServerURL;
- (NSURL *)_linearServiceRequestForURL:(NSURL *)arg0 assetID:(NSString *)arg1;
- (NSURL *)tokenServerURL;
- (NSURLRequest *)_keyServerURLForKeyRequest:(NSURLRequest *)arg0;
- (void)_sendURLRequestToServer:(NSObject *)arg0 forKeyRequest:(NSURLRequest *)arg1 attemptNumber:(unsigned int)arg2;
- (ATVSecureKeyISLoader *)initWithTokenServerURL:(NSURL *)arg0 stopServerURL:(NSURL *)arg1 tokenServerParameters:(NSDictionary *)arg2;
- (void)startLoadingCertificateDataForRequest:(NSURLRequest *)arg0;
- (void)startLoadingContentIdentifierDataForRequest:(NSURLRequest *)arg0;
- (void)startLoadingKeyResponseDataForRequest:(NSURLRequest *)arg0;
- (void)sendStopRequest;
- (void)setTokenServerURL:(NSURL *)arg0;
- (void)setStopServerURL:(NSURL *)arg0;
- (void)setTokenServerParameters:(NSDictionary *)arg0;
- (NSData *)certificateData;
- (void)setRequestsAwaitingCertFetch:(NSMutableArray *)arg0;

@end
