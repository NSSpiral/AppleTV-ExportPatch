/* Runtime dump - ATVMusicStoreCatalogAgent
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVCatalogAgent;

@class ATVCatalogHandler, ATVURLDocument, BRControl, BRController, BRMediaType, BRMerchant, BRScrollControl;
@interface ATVMusicStoreCatalogAgent : NSObject <ATVCatalogAgent>

+ (ATVCatalogHandler *)catalogHandler;
+ (ATVURLDocument *)controlForObject:(NSObject *)arg0 merchant:(BRMerchant *)arg1;
+ (void)playStoreItem:(NSDictionary *)arg0;
+ (id /* <BRMediaAsset> */)mediaAssetForStoreOffer:(NSDictionary *)arg0;
+ (int)itemType:(NSDictionary *)arg0;
+ (char)storeVersionIsCompatibileForPageDictionary:(NSDictionary *)arg0 redirectURL:(id *)arg1;
+ (void)sendPingForItem:(NSDictionary *)arg0;
+ (NSArray *)checkForPurchasesRequestsForPageDictionary:(NSDictionary *)arg0;
+ (void)augmentPageDictionaryWithPurchases:(NSDictionary *)arg0 purchaseCheckResponse:(NSData *)arg1 addAllOffers:(char)arg2;
+ (void)processResponseDocument:(ATVURLDocument *)arg0;
+ (BRControl *)controlForItem:(NSDictionary *)arg0;
+ (NSArray *)coverArtForItem:(NSDictionary *)arg0;
+ (BRMediaType *)mediaTypeForItem:(NSDictionary *)arg0;
+ (NSArray *)allLeafItemsForItem:(NSDictionary *)arg0;
+ (void)controlForObject:(NSObject *)arg0;
+ (int)extrasAccessLevelForStoreItem:(NSDictionary *)arg0 offerType:(NSString *)arg1;
+ (BRController *)extrasPageForStoreItem:(NSDictionary *)arg0 ignoreParentalControls:(char)arg1;
+ (void)registerClass:(Class)arg0 withTemplateName:(NSString *)arg1;
+ (char)handlePermissionRequest:(NSURLRequest *)arg0;
+ (NSURL *)_controlForURL:(NSURL *)arg0 identifier:(NSString *)arg1 merchant:(BRMerchant *)arg2;
+ (NSDictionary *)_controlForRequestParameters:(NSDictionary *)arg0 identifier:(NSString *)arg1 merchant:(BRMerchant *)arg2;
+ (NSObject *)_controlForItem:(NSObject *)arg0;
+ (void)_controlForMediaItem:(NSObject *)arg0;
+ (char)_canAccessExtrasForStoreItem:(NSObject *)arg0 offers:(NSArray *)arg1;
+ (NSObject *)_createItemTypeMap;
+ (ATVMusicStoreCatalogAgent *)_mediaTypeForStoreLink:(id)arg0;
+ (NSObject *)_mediaTypeForStoreMediaType:(NSObject *)arg0;
+ (long)itemIDForItem:(NSDictionary *)arg0;
+ (char)isTemplateParameterSet:(NSString *)arg0 forItem:(NSDictionary *)arg1;
+ (void)_playEventMediaAsset:(NSSet *)arg0 swapCatalogApplianceController:(char)arg1;
+ (void)_augmentStoreOffers:(id)arg0 itemID:(unsigned long long)arg1 purchaseOfferParams:(id)arg2 isCMS:(char)arg3 addAllOffers:(char)arg4;
+ (char)_checkForPurchases:(id)arg0 metadata:(NSData *)arg1 userInfo:(NSDictionary *)arg2;
+ (void)_displayDialogForPermissionRequest:(NSURLRequest *)arg0 fromResponder:(NSObject *)arg1;
+ (NSURL *)coverArtURLForItem:(NSObject *)arg0 featured:(char)arg1 thumbnail:(char)arg2;
+ (NSURL *)episodeArtURLForItem:(NSObject *)arg0;
+ (char)showAllTitles:(NSDictionary *)arg0;
+ (char)showTitleAndSubtitle:(NSDictionary *)arg0;
+ (char)isItemFeatured:(NSDictionary *)arg0;
+ (char)isItemOrdered:(NSDictionary *)arg0;
+ (NSArray *)configureRelatedControlsFromControl:(BRControl *)arg0 style:(int)arg1;
+ (NSObject *)_mediaTypeForStoreMediaCollectionType:(NSObject *)arg0;
+ (void)_playVideoClip:(id)arg0;
+ (NSObject *)_catalogPageControlForItem:(NSObject *)arg0;
+ (NSObject *)_tabbedPageForItem:(NSObject *)arg0;
+ (NSObject *)_roomPageForItem:(NSObject *)arg0;
+ (NSObject *)_supplementPageForItem:(NSObject *)arg0;
+ (NSObject *)_listPageForItem:(NSObject *)arg0;
+ (ATVMusicStoreCatalogAgent *)_setupScroller;
+ (NSObject *)_collectionControlsForPageItem:(NSObject *)arg0 requestedBy:(NSObject *)arg1 dividerSeparated:(char)arg2;
+ (NSObject *)_headerControlsForPageItem:(NSObject *)arg0;
+ (NSArray *)_scrollerControlsFromHeaderControls:(id)arg0 collectionControls:(id)arg1;
+ (NSObject *)_roomPageWithExtrasPreviewLayoutForItem:(NSObject *)arg0 collectionControls:(id)arg1 scroller:(BRScrollControl *)arg2;
+ (NSObject *)_roomPageWithMoreInfoLayoutForItem:(NSObject *)arg0 collectionControls:(id)arg1 scroller:(BRScrollControl *)arg2;
+ (NSObject *)_roomPageWithDefaultLayoutForItem:(NSObject *)arg0 collectionControls:(id)arg1 scroller:(BRScrollControl *)arg2;
+ (NSObject *)_extrasPreviewHeaderControlsForPageItem:(NSObject *)arg0;
+ (NSObject *)_extrasPreviewFooterControlsForPageItem:(NSObject *)arg0;
+ (NSObject *)_roomDescriptionControlsForPageItem:(NSObject *)arg0;
+ (NSObject *)_moreInfoHeaderControlsForPageItem:(NSObject *)arg0;
+ (NSObject *)_roomPageContainerForItem:(NSObject *)arg0 withScroller:(BRScrollControl *)arg1;
+ (NSObject *)_backgroundImageForItem:(NSObject *)arg0;
+ (NSObject *)_backgroundGradientImageForItem:(NSObject *)arg0;
+ (struct CGSize)_backgroundImageSizeForItem:(NSObject *)arg0 inset:(float *)arg1;
+ (NSString *)_formattedPageContentCountString:(NSString *)arg0;
+ (NSObject *)_firstControlOfType:(Class)arg0 inArray:(NSArray *)arg1;
+ (NSObject *)_backgroundImageForItem:(NSObject *)arg0 imageName:(NSString *)arg1;
+ (void)playItem:(NSDictionary *)arg0;
+ (void)initialize;

@end
