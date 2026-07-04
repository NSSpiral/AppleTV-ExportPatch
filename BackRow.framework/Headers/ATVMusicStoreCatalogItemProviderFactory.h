/* Runtime dump - ATVMusicStoreCatalogItemProviderFactory
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVMusicStoreCatalogItemProviderFactory : NSObject
{
    NSDictionary * _catalogItem;
    NSDictionary * _actionItems;
    NSDictionary * _dateItems;
    <BRProvider> * _previewProvider;
    char _purchased;
}

@property (nonatomic) char purchased;

+ (NSObject *)providerFactoryWithCatalogItem:(NSDictionary *)arg0;

- (ATVMusicStoreCatalogItemProviderFactory *)initWithCatalogItem:(NSDictionary *)arg0;
- (NSObject *)storeOffersProvider;
- (<BRMetadataProvider> *)metadataProvider;
- (NSObject *)storeOffersSansPreviewsProvider;
- (NSArray *)listProviders;
- (id)_decomposeStoreOffers;
- (id)_decomposeDateAvailableStoreOffers;
- (NSObject *)_initWithCatalogItem:(NSDictionary *)arg0;
- (NSString *)_metadataProviderWithAbbreviatedForm:(char)arg0;
- (NSArray *)_actionButtonProviders;
- (NSArray *)_mapActionTypes:(NSArray *)arg0 toProviderData:(NSData *)arg1;
- (NSObject *)_itemDetailExtrasProvider;
- (void)_addActionItems:(NSArray *)arg0 toProviderArray:(NSArray *)arg1;
- (NSArray *)_providerItemArrayWithActionTypes:(NSArray *)arg0 fromTypeMap:(NSObject *)arg1;
- (NSObject *)_itemDetailWishListProvider;
- (NSObject *)itemDetailMoreInfoProvider;
- (id)metadataProviderWithExpandedSummary:(char)arg0;
- (NSObject *)abbreviatedMetadataProvider;
- (NSObject *)moreInfoProvider;
- (NSObject *)dateAvailableProvider;
- (NSArray *)actionProviders;
- (NSObject *)rentalActionProvidersForItem:(NSObject *)arg0;
- (NSObject *)copyrightProvider;
- (NSObject *)relatedProvider;
- (<BRProvider> *)previewBrowserProvider;
- (char)purchased;
- (void)setPurchased:(char)arg0;
- (id)_largestSizeInCollection;
- (NSObject *)_storeOfferMetadataProvider;
- (NSDictionary *)actionItems;
- (void)dealloc;
- (id /* <BRImageProxy> */)imageProxy;

@end
