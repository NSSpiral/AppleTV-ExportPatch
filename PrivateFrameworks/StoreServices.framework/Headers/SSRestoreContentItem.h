/* Runtime dump - SSRestoreContentItem
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRestoreContentItem : NSObject
{
    NSNumber * _accountID;
    NSNumber * _originalPurchaserAccountID;
    NSString * _appleID;
    NSString * _bundleID;
    NSNumber * _cloudMatchStatus;
    char _isRestore;
    NSMutableDictionary * _properties;
}

@property (copy, nonatomic) NSString * bundleID;
@property (retain, nonatomic) NSNumber * cloudItemID;
@property (retain, nonatomic) NSNumber * cloudMatchStatus;
@property (copy, nonatomic) NSString * downloadKind;
@property (copy, nonatomic) NSString * podcastEpisodeGUID;
@property (nonatomic) char restoreDownload;
@property (copy, nonatomic) NSString * storeAccountAppleID;
@property (retain, nonatomic) NSNumber * storeAccountID;
@property (retain, nonatomic) NSNumber * storeOriginalPurchaserAccountID;
@property (copy, nonatomic) NSString * storeFrontID;
@property (retain, nonatomic) NSNumber * storeItemID;
@property (copy, nonatomic) NSString * storeSoftwareVersionID;
@property (nonatomic) char DRMFree;
@property (copy, nonatomic) NSString * storeFlavor;
@property (copy, nonatomic) NSString * videoDimensions;

- (NSString *)videoDimensions;
- (NSNumber *)storeItemID;
- (void)setValue:(NSObject *)arg0 forDownloadProperty:(NSObject *)arg1;
- (void)dealloc;
- (SSRestoreContentItem *)init;
- (void)_setValue:(NSValue *)arg0 forProperty:(NSString *)arg1;
- (NSString *)bundleID;
- (void)setBundleID:(NSString *)arg0;
- (NSString *)podcastEpisodeGUID;
- (NSNumber *)storeAccountID;
- (void)setStoreAccountID:(NSNumber *)arg0;
- (SSRestoreContentItem *)initWithRestoreDownload:(char)arg0;
- (char)isEligibleForRestore:(id *)arg0;
- (void)setPodcastEpisodeGUID:(NSString *)arg0;
- (SSRestoreContentItem *)_initSSRestoreContentItem;
- (void)setValue:(NSObject *)arg0 forAssetProperty:(NSObject *)arg1;
- (NSObject *)_restoreKeyForAssetProperty:(NSObject *)arg0;
- (NSObject *)_restoreKeyForDownloadProperty:(NSObject *)arg0;
- (void)setStoreAccountAppleID:(NSString *)arg0;
- (void)setCloudMatchStatus:(NSNumber *)arg0;
- (NSNumber *)cloudItemID;
- (NSNumber *)cloudMatchStatus;
- (NSDictionary *)copyRestoreDictionary;
- (NSString *)downloadKind;
- (char)isDRMFree;
- (void)setCloudItemID:(NSNumber *)arg0;
- (void)setDownloadKind:(NSString *)arg0;
- (void)setDRMFree:(char)arg0;
- (void)setStoreOriginalPurchaserAccountID:(NSNumber *)arg0;
- (void)setStoreFlavor:(NSString *)arg0;
- (void)setStoreFrontID:(NSString *)arg0;
- (void)setStoreItemID:(NSNumber *)arg0;
- (void)setStoreSoftwareVersionID:(NSString *)arg0;
- (void)setVideoDimensions:(NSString *)arg0;
- (NSString *)storeAccountAppleID;
- (NSString *)storeFlavor;
- (NSString *)storeFrontID;
- (NSNumber *)storeOriginalPurchaserAccountID;
- (NSString *)storeSoftwareVersionID;
- (char)isRestoreDownload;
- (void)setRestoreDownload:(char)arg0;

@end
