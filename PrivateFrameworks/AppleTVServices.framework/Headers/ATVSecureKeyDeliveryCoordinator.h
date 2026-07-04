/* Runtime dump - ATVSecureKeyDeliveryCoordinator
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVSecureKeyDeliveryCoordinator : NSObject <ATVSecureKeyLoaderDelegate, AVAssetResourceLoaderDelegate>
{
    NSObject<ATVSecureKeyDeliveryCoordinatorDelegate> * _delegate;
    ATVSecureKeyLoader * _secureKeyLoader;
}

@property (weak, nonatomic) NSObject<ATVSecureKeyDeliveryCoordinatorDelegate> * delegate;
@property (retain, nonatomic) ATVSecureKeyLoader * secureKeyLoader;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)isSecureKeyDeliveryRequest:(NSURLRequest *)arg0;

- (void)setDelegate:(NSObject<ATVSecureKeyDeliveryCoordinatorDelegate> *)arg0;
- (ATVSecureKeyDeliveryCoordinator *)init;
- (NSObject<ATVSecureKeyDeliveryCoordinatorDelegate> *)delegate;
- (void).cxx_destruct;
- (ATVSecureKeyDeliveryCoordinator *)initWithSecureKeyLoader:(ATVSecureKeyLoader *)arg0;
- (void)loadSecureKeyRequest:(NSURLRequest *)arg0;
- (void)secureKeyLoader:(ATVSecureKeyLoader *)arg0 didLoadCertificateData:(NSData *)arg1 forRequest:(NSURLRequest *)arg2;
- (void)secureKeyLoader:(ATVSecureKeyLoader *)arg0 didFailWithError:(NSError *)arg1 forRequest:(NSURLRequest *)arg2;
- (void)secureKeyLoader:(ATVSecureKeyLoader *)arg0 didLoadContentIdentifierData:(NSData *)arg1 forRequest:(NSURLRequest *)arg2;
- (void)sendStopRequest;
- (void)secureKeyLoader:(ATVSecureKeyLoader *)arg0 didLoadKeyResponseData:(NSData *)arg1 renewalDate:(NSDate *)arg2 forRequest:(NSURLRequest *)arg3;
- (void)secureKeyLoader:(ATVSecureKeyLoader *)arg0 didReceiveUpdatedRentalExpirationDate:(NSDate *)arg1;
- (ATVSecureKeyLoader *)secureKeyLoader;
- (void)_loadSecureKeyRequest:(NSURLRequest *)arg0;
- (void)setSecureKeyLoader:(ATVSecureKeyLoader *)arg0;
- (char)resourceLoader:(AVAssetResourceLoader *)arg0 shouldWaitForLoadingOfRequestedResource:(NSObject *)arg1;
- (char)resourceLoader:(AVAssetResourceLoader *)arg0 shouldWaitForRenewalOfRequestedResource:(NSObject *)arg1;

@end
