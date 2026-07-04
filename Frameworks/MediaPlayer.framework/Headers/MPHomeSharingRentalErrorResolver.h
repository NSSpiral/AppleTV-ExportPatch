/* Runtime dump - MPHomeSharingRentalErrorResolver
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPHomeSharingRentalErrorResolver : MPAVErrorResolver <SSRequestDelegate>
{
    unsigned long long _accountID;
    MPHomeSharingML3DataProvider * _dataProvider;
    NSError * _error;
    unsigned long long _itemID;
    unsigned long long _homeSharingID;
    unsigned long long _rentalID;
    SSRentalCheckoutRequest * _request;
}

@property (retain, nonatomic) MPHomeSharingML3DataProvider * dataProvider;
@property (readonly, nonatomic) unsigned long long itemID;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)resolveError:(NSError *)arg0;
- (MPHomeSharingRentalErrorResolver *)initWithItemID:(unsigned long long)arg0 homeSharingID:(unsigned long long)arg1 rentalID:(unsigned long long)arg2 accountID:(unsigned long long)arg3;
- (char)_errorIsFairPlayError:(NSError *)arg0;
- (void)request:(SSRentalCheckoutRequest *)arg0 didFailWithError:(NSError *)arg1;
- (void)requestDidFinish:(SKRequest *)arg0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setDataProvider:(MPHomeSharingML3DataProvider *)arg0;
- (MPHomeSharingML3DataProvider *)dataProvider;
- (unsigned long long)itemID;

@end
