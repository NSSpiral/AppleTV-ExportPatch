/* Runtime dump - MPStoreCompletionOffering
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreCompletionOffering : NSObject <NSCopying>
{
    int _preferredStoreOfferVariant;
    MPStoreCompletionOfferResponse * _storeOfferResponse;
    MPMediaQuery * _localItemsQuery;
    MPStoreCollectionCompletionOffering * _collectionWithCompletionItemsOffering;
    int _presentationStyle;
    NSURL * _storeURL;
}

@property (nonatomic) int preferredStoreOfferVariant;
@property (readonly, nonatomic) int presentationStyle;
@property (readonly, copy, nonatomic) NSURL * storeURL;
@property (readonly, nonatomic) MPStoreOfferMediaItemCollection * collectionWithCompletionItems;

+ (int)defaultOfferVariant;
+ (void)setDefaultOfferVariant:(int)arg0;
+ (NSURLResponse *)offeringWithResponse:(NSURLResponse *)arg0 localItemsQuery:(MPMediaQuery *)arg1;

- (MPStoreCompletionOffering *)initWithResponse:(NSURLResponse *)arg0 localItemsQuery:(MPMediaQuery *)arg1;
- (void)_loadOfferingData;
- (NSObject *)copyByInvalidatingCalculatedContent;
- (void)setPreferredStoreOfferVariant:(int)arg0;
- (int)preferredStoreOfferVariant;
- (MPStoreOfferMediaItemCollection *)collectionWithCompletionItems;
- (NSURL *)storeURL;
- (MPStoreCompletionOffering *)copyWithZone:(struct _NSZone *)arg0;
- (int)presentationStyle;
- (void).cxx_destruct;

@end
