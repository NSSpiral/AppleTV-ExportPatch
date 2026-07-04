/* Runtime dump - ATVDataMediaItem
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVDataMediaItem : ATVBaseMediaItem
{
    char _ignoreLeaseAgentStateChanges;
    ATVDataItem * _dataItem;
    ATVDataItem * _storeDataItem;
    ATVLeaseAgent * _leaseAgent;
    id _acquisitionToken;
    ATVSecureKeyDeliveryCoordinator * _secureKeyDeliveryCoordinator;
}

@property (retain, nonatomic) ATVDataItem * dataItem;
@property (retain, nonatomic) ATVDataItem * storeDataItem;
@property (retain, nonatomic) ATVLeaseAgent * leaseAgent;
@property (retain, nonatomic) id acquisitionToken;
@property (nonatomic) char ignoreLeaseAgentStateChanges;
@property (retain, nonatomic) ATVSecureKeyDeliveryCoordinator * secureKeyDeliveryCoordinator;

- (void).cxx_destruct;
- (NSObject *)_dataItemValueForProperty:(NSString *)arg0;
- (ATVDataItem *)dataItem;
- (char)_hasVideoContent;
- (char)_supportsBookmarkProperty;
- (NSObject *)mediaItemMetadataForProperty:(NSString *)arg0;
- (id)_mappings;
- (void)setMediaItemMetadata:(NSData *)arg0 forProperty:(NSString *)arg1;
- (void)_startLeaseIfNecessary:(id)arg0;
- (char)_requiresStoreTransaction;
- (void)_acquireItemWithCompletion:(id /* block */)arg0;
- (void)setStoreDataItem:(ATVDataItem *)arg0;
- (char)_requiresRentalKeys;
- (ATVDataItem *)storeDataItem;
- (ATVSecureKeyDeliveryCoordinator *)secureKeyDeliveryCoordinator;
- (void)setSecureKeyDeliveryCoordinator:(ATVSecureKeyDeliveryCoordinator *)arg0;
- (NSURL *)mediaItemURL;
- (void)_clearDownloadResponse;
- (NSString *)acquisitionToken;
- (void)setAcquisitionToken:(NSString *)arg0;
- (void)_augmentMediaItemWithDownloadResponse:(SSDownload *)arg0;
- (char)_requiresLease;
- (char)ignoreLeaseAgentStateChanges;
- (void)setIgnoreLeaseAgentStateChanges:(char)arg0;
- (ATVDataMediaItem *)initWithDataItem:(ATVDataItem *)arg0;
- (char)isEqualToMediaItem:(NSObject *)arg0;
- (char)hasTrait:(UIKBRenderFactoryiPadHWR_Portrait *)arg0;
- (void)prepareForLoadingWithCompletion:(id /* block */)arg0;
- (void)prepareForPlaybackInitiationWithCompletion:(id /* block */)arg0;
- (void)loadStreamingKeyForRequest:(NSURLRequest *)arg0;
- (void)cleanUpMediaItem;
- (void)setDataItem:(ATVDataItem *)arg0;
- (ATVLeaseAgent *)leaseAgent;
- (void)setLeaseAgent:(ATVLeaseAgent *)arg0;

@end
