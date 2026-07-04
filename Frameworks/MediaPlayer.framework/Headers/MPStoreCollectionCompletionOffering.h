/* Runtime dump - MPStoreCollectionCompletionOffering
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreCollectionCompletionOffering : NSObject
{
    MPMediaQuery * _localItemsQuery;
    int _preferredStoreOfferVariant;
    MPStoreOfferMediaItemCollection * _offeredCollection;
    MPStoreOfferMediaItemCollection * _mergedCollection;
}

@property (readonly, nonatomic) MPStoreOfferMediaItemCollection * itemsWithCompletionsCollection;
@property (readonly, nonatomic) NSArray * localItems;
@property (readonly, nonatomic) int preferredStoreOfferVariant;
@property (readonly, nonatomic) MPStoreOfferMediaItemCollection * offeredCollection;
@property (readonly, nonatomic) MPStoreOfferMediaItemCollection * mergedCollection;

- (MPStoreCollectionCompletionOffering *)initWithOfferedCollection:(MPStoreOfferMediaItemCollection *)arg0 localItemsQuery:(MPMediaQuery *)arg1 preferredStoreOfferVariant:(int)arg2;
- (MPStoreOfferMediaItemCollection *)mergedCollection;
- (MPStoreOfferMediaItemCollection *)itemsWithCompletionsCollection;
- (int)preferredStoreOfferVariant;
- (NSArray *)localItems;
- (MPStoreOfferMediaItemCollection *)offeredCollection;
- (void).cxx_destruct;

@end
