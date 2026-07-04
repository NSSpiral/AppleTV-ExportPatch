/* Runtime dump - ATVSecureKeyRequest
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVSecureKeyRequest : NSObject
{
    unsigned int _requestID;
    NSData * _certificateData;
    NSData * _contentIdentifierData;
    NSData * _keyRequestData;
    NSDate * _startDate;
    NSError * _error;
    AVAssetResourceLoadingRequest * _loadingRequest;
    unsigned int _retryCount;
}

@property (readonly, nonatomic) unsigned int requestID;
@property (readonly, nonatomic) NSURL * URL;
@property (readonly, nonatomic) char isCancelled;
@property (copy, nonatomic) NSData * certificateData;
@property (copy, nonatomic) NSData * contentIdentifierData;
@property (copy, nonatomic) NSData * keyRequestData;
@property (copy, nonatomic) NSDate * startDate;
@property (readonly, nonatomic) char isRenewal;
@property (retain, nonatomic) NSError * error;
@property (retain, nonatomic) AVAssetResourceLoadingRequest * loadingRequest;
@property (nonatomic) unsigned int retryCount;

- (unsigned int)requestID;
- (ATVSecureKeyRequest *)init;
- (char)isCancelled;
- (NSURL *)URL;
- (void).cxx_destruct;
- (void)setCertificateData:(NSData *)arg0;
- (NSData *)keyRequestData;
- (void)setContentIdentifierData:(NSData *)arg0;
- (char)loadKeyRequestDataError:(id *)arg0;
- (void)finishLoadingWithKeyResponseData:(NSData *)arg0 renewalDate:(NSDate *)arg1;
- (NSData *)certificateData;
- (ATVSecureKeyRequest *)initWithAssetResourceLoadingRequest:(NSURLRequest *)arg0;
- (AVAssetResourceLoadingRequest *)loadingRequest;
- (NSData *)contentIdentifierData;
- (void)setKeyRequestData:(NSData *)arg0;
- (char)isRenewal;
- (void)setLoadingRequest:(AVAssetResourceLoadingRequest *)arg0;
- (NSError *)error;
- (unsigned int)retryCount;
- (void)setError:(NSError *)arg0;
- (void)setStartDate:(NSDate *)arg0;
- (void)setRetryCount:(unsigned int)arg0;
- (NSDate *)startDate;
- (void)finishLoadingWithError:(NSError *)arg0;

@end
