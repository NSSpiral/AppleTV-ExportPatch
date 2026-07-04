/* Runtime dump - ATVMusicStoreOffer
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVMusicStoreOffer : NSObject
{
    NSString * _storeOfferType;
    int _offerCategory;
    NSDictionary * _storeOfferInfo;
    char _didJaliscoQuery;
    char _isAvailableInJaliscoDatabase;
}

+ (NSDictionary *)storeOfferFromDictionary:(NSDictionary *)arg0 forType:(NSObject *)arg1;
+ (NSDictionary *)redownloadOffersDictionary:(NSDictionary *)arg0;
+ (NSDictionary *)offerListFromStoreOffersDictionary:(NSDictionary *)arg0;
+ (NSDictionary *)primaryOfferFromStoreOffersDictionary:(NSDictionary *)arg0;
+ (char)hasPROffer:(id)arg0;
+ (NSDictionary *)jaliscoMusicOffersDictionary:(NSDictionary *)arg0;
+ (NSDictionary *)normalizeOffersDictionary:(NSDictionary *)arg0;
+ (char)anyOfferHasDigitalExtras:(id)arg0;
+ (NSDictionary *)priceRangeFromStoreOffersDictionary:(NSDictionary *)arg0;
+ (NSDictionary *)normalizeOffersDictionary:(NSDictionary *)arg0 preferHD:(char)arg1;
+ (void)_swizzlePreviewsToSD:(id)arg0;
+ (NSDictionary *)offerListFromStoreOffersDictionary:(NSDictionary *)arg0 preferHD:(char)arg1;
+ (ATVMusicStoreOffer *)priceRangeFromStoreOffers:(id)arg0;

- (char)isHD;
- (char)isWideScreen;
- (char)supportsPlaybackResolution:(int)arg0;
- (char)isDolbyDigital;
- (char)isClosedCaptioned;
- (char)hasDigitalExtras;
- (char)hasAudioDescription;
- (char)hasSDH;
- (ATVMusicStoreOffer *)initWithStoreOfferDictionary:(NSDictionary *)arg0 forType:(NSObject *)arg1;
- (char)hasRedownload;
- (char)isJaliscoItem;
- (NSString *)storeOfferType;
- (char)usesStoreDrivenFlow;
- (char)isCMS:(char *)arg0;
- (id)preActionWarning;
- (char)hasPreview;
- (id)rentalParams;
- (id)rentalPrice;
- (char)hasPurchase;
- (id)purchaseParams;
- (id)purchasePrice;
- (int)offerCategory;
- (char)hasDownload;
- (char)hasDateAvailable;
- (id)dateAvailable;
- (NSArray *)dolbyDigitalLanguages;
- (NSArray *)stereoLanguages;
- (NSArray *)audioDescriptionLanguages;
- (NSArray *)sdhLanguages;
- (void)_queryJaliscoDatabase;
- (id)_flavorForPlaybackResolution:(int)arg0;
- (NSString *)_storeOfferObjectForKey:(NSString *)arg0;
- (NSString *)_storeOfferObjectForKey:(NSString *)arg0 playbackResolution:(int)arg1;
- (id)originalPurchasePrice;
- (NSArray *)subtitleLanguages;
- (NSNumber *)storeItemID;
- (char)isPreorder;
- (NSNumber *)price;
- (long)previewDuration;
- (NSString *)previewURL;
- (void)dealloc;
- (NSString *)description;
- (long)duration;
- (NSURL *)downloadURL;
- (char)hasRental;
- (long long)fileSize;
- (ATVMusicStoreOffer *)initWithStoreOfferDictionary:(NSDictionary *)arg0;
- (NSString *)actionDisplayName;
- (id)redownloadParams;

@end
