/* Runtime dump - MPStoreOffer
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreOffer : NSObject
{
    NSDictionary * _offerDictionary;
    MPStoreOffer * _regularPriceOffer;
    NSDictionary * _mediaAssetDictionary;
    unsigned long long _entityPersistentID;
    int _entityType;
    NSString * _entityTitle;
    int _passType;
}

@property (readonly, nonatomic) int entityType;
@property (readonly, nonatomic) unsigned long long entityPersistentID;
@property (readonly, copy, nonatomic) NSString * entityTitle;
@property (readonly, nonatomic) int buyType;
@property (readonly, nonatomic) int passType;
@property (readonly, copy, nonatomic) NSString * buyParameters;
@property (readonly, copy, nonatomic) NSString * displayTitle;
@property (readonly, copy, nonatomic) NSString * actionDisplayTitle;
@property (readonly, nonatomic) char requiresConfirmation;
@property (readonly, copy, nonatomic) NSString * displayPrice;
@property (readonly, nonatomic) float price;
@property (readonly, copy, nonatomic) NSString * regularPriceDisplayPrice;
@property (readonly, nonatomic) unsigned long long downloadSize;
@property (readonly, copy, nonatomic) NSURL * previewURL;
@property (readonly, nonatomic) double previewDuration;

+ (int)bestOfferVariantInOfferDictionaries:(id)arg0 withPreferredVariant:(int)arg1;
+ (void)getBuyOfferDictionary:(id *)arg0 regularPriceOfferDictionary:(id *)arg1 inOfferDictionaries:(id)arg2 variant:(int)arg3;
+ (int)buyTypeForOfferDictionary:(NSDictionary *)arg0 regularPriceOffer:(MPStoreOffer *)arg1;
+ (MPStoreOffer *)offerVariantResponseKeyForOfferVariant:(int)arg0;
+ (void)getBuyOfferDictionary:(id *)arg0 regularPriceOfferDictionary:(id *)arg1 inOfferDictionaries:(id)arg2 variantString:(NSString *)arg3;
+ (NSDictionary *)_priceForOfferDictionary:(NSDictionary *)arg0;

- (NSString *)buyParameters;
- (float)price;
- (double)previewDuration;
- (NSURL *)previewURL;
- (int)buyType;
- (MPStoreOffer *)initWithStoreOfferDictionary:(NSDictionary *)arg0 regularPriceOfferDictionary:(NSDictionary *)arg1 passType:(int)arg2 entityType:(int)arg3 persistentID:(unsigned long long)arg4 title:(NSString *)arg5;
- (int)passType;
- (char)_isBuy;
- (NSString *)actionDisplayTitle;
- (NSString *)displayPrice;
- (NSURL *)buyURL;
- (char)requiresConfirmation;
- (NSString *)regularPriceDisplayPrice;
- (unsigned long long)downloadSize;
- (NSDictionary *)storeOfferDictionary;
- (unsigned long long)entityPersistentID;
- (NSString *)entityTitle;
- (NSString *)displayTitle;
- (void).cxx_destruct;
- (int)entityType;

@end
