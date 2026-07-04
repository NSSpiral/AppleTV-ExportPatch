/* Runtime dump - ATVHSKeybagRentalCheckinOperation
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSKeybagRentalCheckinOperation : NSObject <ATVHSKeybagRentalOperation>
{
    <ATVHSKeybagRentalCheckinOperationDelegate> * _delegate;
    ATVHSRentalInfo * _rentalInfo;
    ATVDataClient * _dataClient;
    ATVDataQuery * _inflightHomeShareCheckoutQuery;
    SSRentalCheckinRequest * _inflightStoreCheckinRequest;
}

@property (weak, nonatomic) <ATVHSKeybagRentalCheckinOperationDelegate> * delegate;
@property (retain, nonatomic) ATVHSRentalInfo * rentalInfo;
@property (retain, nonatomic) ATVDataClient * dataClient;
@property (retain, nonatomic) ATVDataQuery * inflightHomeShareCheckoutQuery;
@property (retain, nonatomic) SSRentalCheckinRequest * inflightStoreCheckinRequest;

- (void)cancel;
- (void)dealloc;
- (void)setDelegate:(<ATVHSKeybagRentalCheckinOperationDelegate> *)arg0;
- (ATVHSKeybagRentalCheckinOperation *)init;
- (<ATVHSKeybagRentalCheckinOperationDelegate> *)delegate;
- (void)start;
- (void).cxx_destruct;
- (ATVDataClient *)dataClient;
- (void)setDataClient:(ATVDataClient *)arg0;
- (SSRentalCheckinRequest *)inflightStoreCheckinRequest;
- (ATVDataQuery *)inflightHomeShareCheckoutQuery;
- (char)_isIdle;
- (void)_checkinRentalOnITunesStore;
- (void)_completeWithErrorCodeDelayed:(unsigned int)arg0;
- (ATVHSRentalInfo *)rentalInfo;
- (void)setInflightStoreCheckinRequest:(SSRentalCheckinRequest *)arg0;
- (void)_checkoutDataItemOnHomeShare;
- (void)_completeIfIdleWithError:(NSError *)arg0;
- (void)setInflightHomeShareCheckoutQuery:(ATVDataQuery *)arg0;
- (void)_completeWithError:(NSError *)arg0;
- (void)_completeWithErrorCode:(unsigned int)arg0;
- (char)_isBusy;
- (ATVHSKeybagRentalCheckinOperation *)initWithRentalInfo:(ATVHSRentalInfo *)arg0 dataClient:(ATVDataClient *)arg1;
- (void)setRentalInfo:(ATVHSRentalInfo *)arg0;

@end
