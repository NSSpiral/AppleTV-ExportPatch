/* Runtime dump - MPStoreOfferMediaItemCollection
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreOfferMediaItemCollection : MPMediaItemCollection
{
    MPStoreCompletionOfferResponse * _storeOfferResponse;
    NSArray * _unmergedStoreMediaItems;
    MPMediaQuery * _localItemsQuery;
    MPMediaItemCollection * _localCollection;
    char _hasHiddenRestrictedContent;
    int _preferredStoreOfferVariant;
    MPStoreOfferContentRating * _collectionContentRating;
}

@property (readonly, nonatomic) NSArray * items;
@property (readonly, nonatomic) NSArray * itemsByRemovingStoreOffers;
@property (readonly, nonatomic) NSArray * itemsByRemovingLocalItems;
@property (readonly, nonatomic) char isCollectionOfferPresentable;

+ (MPStoreOfferMediaItemCollection *)defaultPropertyValues;
+ (NSArray *)offerDictionariesForLookupCollectionPropertyValues:(NSArray *)arg0;
+ (int)offerPassTypeForLookupCollectionPropertyValues:(NSArray *)arg0;
+ (NSArray *)albumOrderedChildItemIDsForLookupCollectionPropertyValues:(NSArray *)arg0;
+ (NSArray *)mediaValueForStoreLookupCollectionPropertyValues:(NSArray *)arg0 mediaProperty:(NSObject *)arg1;
+ (NSArray *)contentRatingForCollectionPropertyValues:(NSArray *)arg0;
+ (NSObject *)collectionLookupKeyForMediaProperty:(NSObject *)arg0;

- (MPMediaLibrary *)mediaLibrary;
- (NSDictionary *)valuesForProperties:(NSDictionary *)arg0;
- (MPStoreOfferMediaItemCollection *)initWithStoreOfferResponse:(MPStoreCompletionOfferResponse *)arg0 preferredStoreOfferVariant:(int)arg1;
- (NSArray *)itemsByRemovingLocalItems;
- (int)preferredStoreOfferVariant;
- (NSObject *)copyByOverlayingMediaItemsWithItemsQuery:(NSArray *)arg0 preferredStoreOfferVariant:(int)arg1;
- (id)buyOfferForVariant:(int)arg0;
- (char)_offeredItemAlreadyExists;
- (id)_lookupOfferDictionaries;
- (char)isDownloadable;
- (NSArray *)itemsByRemovingStoreOffers;
- (char)hasDownloadableStoreOfferItemsForVariant:(int)arg0;
- (char)hasPurchasableStoreOfferItemsForVariant:(int)arg0;
- (void)_loadLocalCollection;
- (char)_checkIsUsableOffer;
- (MPStoreOfferMediaItemCollection *)initWithStoreOfferResponse:(MPStoreCompletionOfferResponse *)arg0 preferredStoreOfferVariant:(int)arg1 offerMediaItems:(NSArray *)arg2 localItemsQuery:(MPMediaQuery *)arg3;
- (char)_hasRestrictedContent;
- (char)isCheaperToPurchaseIndividualItems;
- (int)countOfItemsByRemovingLocalItems;
- (char)isCollectionOfferPresentable;
- (MPStoreOfferMediaItemCollection *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)title;
- (MPStoreOfferMediaItemCollection *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void *)valueForProperty:(NSString *)arg0;
- (unsigned long long)persistentID;

@end
