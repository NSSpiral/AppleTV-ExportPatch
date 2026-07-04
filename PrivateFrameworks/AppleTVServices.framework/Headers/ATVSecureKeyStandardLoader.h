/* Runtime dump - ATVSecureKeyStandardLoader
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVSecureKeyStandardLoader : ATVSecureKeyLoader
{
    char _didSkipRentalCheckout;
    char _needsStopping;
    unsigned int _protocolVersion;
    <ATVSecureKeyStandardLoaderRequestGenerating> * _requestGenerator;
    <ATVSecureKeyStandardLoaderConnectionHandling> * _connectionHandler;
    NSNumber * _rentalID;
    NSURL * _certificateDataURL;
    NSURL * _keyDataURL;
    NSDictionary * _additionalParameters;
    ATVSecureKeyRequest * _savedRequestToUseForStopping;
    NSDate * _rentalExpirationDate;
}

@property (nonatomic) unsigned int protocolVersion;
@property (weak, nonatomic) <ATVSecureKeyStandardLoaderRequestGenerating> * requestGenerator;
@property (weak, nonatomic) <ATVSecureKeyStandardLoaderConnectionHandling> * connectionHandler;
@property (copy, nonatomic) NSNumber * rentalID;
@property (nonatomic) char didSkipRentalCheckout;
@property (retain, nonatomic) NSURL * certificateDataURL;
@property (retain, nonatomic) NSURL * keyDataURL;
@property (copy, nonatomic) NSDictionary * additionalParameters;
@property (retain, nonatomic) ATVSecureKeyRequest * savedRequestToUseForStopping;
@property (retain, nonatomic) NSDate * rentalExpirationDate;
@property (nonatomic) char needsStopping;

- (ATVSecureKeyStandardLoader *)init;
- (void).cxx_destruct;
- (ATVSecureKeyStandardLoader *)initWithCertificateDataURL:(NSURL *)arg0 keyDataURL:(NSURL *)arg1 additionalParameters:(NSDictionary *)arg2;
- (void)setRequestGenerator:(<ATVSecureKeyStandardLoaderRequestGenerating> *)arg0;
- (void)setConnectionHandler:(<ATVSecureKeyStandardLoaderConnectionHandling> *)arg0;
- (void)startLoadingCertificateDataForRequest:(NSURLRequest *)arg0;
- (void)startLoadingContentIdentifierDataForRequest:(NSURLRequest *)arg0;
- (void)startLoadingKeyResponseDataForRequest:(NSURLRequest *)arg0;
- (void)sendStopRequest;
- (NSURLRequest *)_assetIdentifierForKeyRequest:(NSURLRequest *)arg0;
- (NSNumber *)rentalID;
- (char)didSkipRentalCheckout;
- (NSDictionary *)additionalParameters;
- (NSURLRequest *)_bodyXMLDataForRequest:(NSURLRequest *)arg0;
- (NSURLRequest *)_bodyJSONDataForRequest:(NSURLRequest *)arg0 forceStop:(char)arg1;
- (<ATVSecureKeyStandardLoaderRequestGenerating> *)requestGenerator;
- (NSURL *)certificateDataURL;
- (<ATVSecureKeyStandardLoaderConnectionHandling> *)connectionHandler;
- (ATVSecureKeyRequest *)savedRequestToUseForStopping;
- (void)setSavedRequestToUseForStopping:(ATVSecureKeyRequest *)arg0;
- (NSURL *)keyDataURL;
- (NSURLRequest *)_bodyDataForRequest:(NSURLRequest *)arg0 forceStop:(char)arg1;
- (NSDate *)rentalExpirationDate;
- (void)setRentalExpirationDate:(NSDate *)arg0;
- (void)setNeedsStopping:(char)arg0;
- (char)needsStopping;
- (void)setRentalID:(NSNumber *)arg0;
- (void)setDidSkipRentalCheckout:(char)arg0;
- (void)setCertificateDataURL:(NSURL *)arg0;
- (void)setKeyDataURL:(NSURL *)arg0;
- (void)setAdditionalParameters:(NSDictionary *)arg0;
- (unsigned int)protocolVersion;
- (void)setProtocolVersion:(unsigned int)arg0;

@end
