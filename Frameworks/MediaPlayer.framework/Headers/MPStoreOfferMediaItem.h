/* Runtime dump - MPStoreOfferMediaItem
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreOfferMediaItem : MPNondurableMediaItem <NSSecureCoding, NSCopying>
{
    NSDictionary * _lookupCollectionPropertyValues;
    NSNumber * _itemID;
    int _preferredStoreOfferVariant;
    MPStoreOfferContentRating * _contentRating;
    MPStoreOfferMediaItemArtworkDescriptor * _offerArtworkDescriptor;
    long _offerArtworkDescriptorOnceToken;
    id _pid;
    id _discNumber;
    id _trackNumber;
    id _title;
}

+ (char)canFilterByProperty:(NSObject *)arg0;
+ (MPStoreOfferMediaItem *)defaultPropertyValues;
+ (char)canRequestStoreOfferForLocalMediaItems:(NSArray *)arg0;
+ (char)hasMediaItemValuesForStoreLookupCollectionPropertyValues:(NSArray *)arg0 itemID:(NSNumber *)arg1;
+ (NSArray *)mediaValueForStoreLookupCollectionPropertyValues:(NSArray *)arg0 itemID:(NSNumber *)arg1 mediaProperty:(NSObject *)arg2;
+ (NSArray *)contentRatingForCollectionPropertyValues:(NSArray *)arg0 itemID:(NSNumber *)arg1;
+ (char)canMergeStoreOfferWithLocalMediaItems:(NSArray *)arg0;
+ (NSArray *)offerArtworkDescriptorForLookupCollectionPropertyValues:(NSArray *)arg0 itemID:(NSNumber *)arg1;
+ (NSArray *)offerDictionariesForLookupCollectionPropertyValues:(NSArray *)arg0 itemID:(NSNumber *)arg1;
+ (NSArray *)mediaItemsWithStoreLookupCollectionPropertyValues:(NSArray *)arg0 preferredStoreOfferVariant:(int)arg1;
+ (NSArray *)mediaItemsByMergingStoreOfferMediaItems:(NSArray *)arg0 localItems:(NSArray *)arg1;
+ (NSArray *)mediaItemsByRemovingRestrictedContentFromMediaItems:(NSArray *)arg0;
+ (NSDictionary *)preferredAssetDictionaryInOfferDictionary:(NSDictionary *)arg0;
+ (NSObject *)collectionLookupKeyForMediaProperty:(NSObject *)arg0;
+ (NSObject *)itemLookupKeyForMediaProperty:(NSObject *)arg0;
+ (NSObject *)offerLookupKeyForItemMediaProperty:(NSObject *)arg0;
+ (NSDictionary *)offerDictionaryWithPreferredAssetDictionaryInItemResponseDictionary:(NSDictionary *)arg0;
+ (NSObject *)assetLookupKeyForItemMediaProperty:(NSObject *)arg0;
+ (NSObject *)localRepresentativeItemPropertyForMediaProperty:(NSObject *)arg0;
+ (char)supportsSecureCoding;

- (unsigned int)albumTrackNumber;
- (MPMediaLibrary *)mediaLibrary;
- (MPStoreOfferMediaItemArtworkDescriptor *)offerArtworkDescriptor;
- (id)screenshotArtworkCatalog;
- (int)preferredStoreOfferVariant;
- (MPStoreOfferMediaItem *)initWithLookupLookupCollectionPropertyValues:(NSArray *)arg0 preferredStoreOfferVariant:(int)arg1 itemID:(NSNumber *)arg2;
- (id)buyOfferForVariant:(int)arg0;
- (char)_offeredItemAlreadyExists;
- (id)_lookupOfferDictionaries;
- (char)isDownloadable;
- (MPStoreOfferMediaItem *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)title;
- (MPStoreOfferMediaItem *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void *)valueForProperty:(NSString *)arg0;
- (unsigned long long)persistentID;
- (unsigned int)discNumber;
- (char)setValue:(NSObject *)arg0 forProperty:(NSString *)arg1;

@end
