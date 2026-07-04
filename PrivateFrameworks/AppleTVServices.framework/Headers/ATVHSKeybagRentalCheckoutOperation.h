/* Runtime dump - ATVHSKeybagRentalCheckoutOperation
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSKeybagRentalCheckoutOperation : NSObject <ATVHSKeybagRentalOperation>
{
    <ATVHSKeybagRentalCheckoutOperationDelegate> * _delegate;
    ATVHSRentalInfo * _rentalInfo;
    ATVDataClient * _dataClient;
    ATVDataQuery * _inflightHomeShareRentalQuery;
    SSRentalCheckoutRequest * _inflightStoreCheckoutRequest;
    NSError * _error;
}

@property (weak, nonatomic) <ATVHSKeybagRentalCheckoutOperationDelegate> * delegate;
@property (retain, nonatomic) ATVHSRentalInfo * rentalInfo;
@property (retain, nonatomic) ATVDataClient * dataClient;
@property (retain, nonatomic) ATVDataQuery * inflightHomeShareRentalQuery;
@property (retain, nonatomic) SSRentalCheckoutRequest * inflightStoreCheckoutRequest;
@property (retain, nonatomic) NSError * error;

- (void)cancel;
- (void)dealloc;
- (void)setDelegate:(<ATVHSKeybagRentalCheckoutOperationDelegate> *)arg0;
- (ATVHSKeybagRentalCheckoutOperation *)init;
- (<ATVHSKeybagRentalCheckoutOperationDelegate> *)delegate;
- (void)start;
- (void).cxx_destruct;
- (ATVDataClient *)dataClient;
- (void)setDataClient:(ATVDataClient *)arg0;
- (char)_isIdle;
- (void)_completeWithErrorCodeDelayed:(unsigned int)arg0;
- (ATVHSRentalInfo *)rentalInfo;
- (void)_checkoutDataItemOnHomeShare;
- (void)_completeWithError:(NSError *)arg0;
- (char)_isBusy;
- (ATVHSKeybagRentalCheckoutOperation *)initWithRentalInfo:(ATVHSRentalInfo *)arg0 dataClient:(ATVDataClient *)arg1;
- (void)setRentalInfo:(ATVHSRentalInfo *)arg0;
- (ATVDataQuery *)inflightHomeShareRentalQuery;
- (SSRentalCheckoutRequest *)inflightStoreCheckoutRequest;
- (void)_checkinDataItemOnHomeShare;
- (void)setInflightHomeShareRentalQuery:(ATVDataQuery *)arg0;
- (void)_checkoutDataItemOnITunesStore;
- (void)_completeIfIdle;
- (void)setInflightStoreCheckoutRequest:(SSRentalCheckoutRequest *)arg0;
- (NSError *)error;
- (void)setError:(NSError *)arg0;

@end
