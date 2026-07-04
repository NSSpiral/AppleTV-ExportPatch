/* Runtime dump - ATVMerchantCoordinator
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVSettingsSaver;

@class BRMerchantInfo;
@interface ATVMerchantCoordinator : NSObject <ATVSettingsSaver>
{
    NSDictionary * _merchantsByIdentifier;
    unsigned int _invalidationField;
    NSArray * _enabledMerchants;
    NSArray * _allMerchants;
}

@property (copy, nonatomic) NSArray * enabledMerchants;
@property (copy, nonatomic) NSArray * allMerchants;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)automaticallyNotifiesObserversOfEnabledMerchants;
+ (ATVMerchantCoordinator *)sharedInstance;

- (NSArray *)enabledMerchants;
- (void)addPathsToSaveTo:(NSMutableSet *)arg0;
- (NSString *)merchantWithIdentifier:(NSString *)arg0;
- (void)merchantChanged:(NSNotification *)arg0;
- (NSArray *)screensaverDictionaries;
- (char)isITMSFeedCollectionReadFromLocal:(id)arg0;
- (NSString *)rootControllerForMerchantIdentifier:(NSString *)arg0;
- (id)_screensaverDictionariesFromVendorBags;
- (NSObject *)_screensaverDictionariesFromResource;
- (NSArray *)allMerchants;
- (void)_musicStorePartnerDataUpdated;
- (void)_handleLanguageChangedNotification:(NSNotification *)arg0;
- (void)_handleFeatureEnabledNotification:(NSNotification *)arg0;
- (void)_handleFeatureDisabledNotification:(NSNotification *)arg0;
- (NSDictionary *)_newMerchantWithMerchantInfo:(BRMerchantInfo *)arg0;
- (void)_handleITMSMerchantDidInstallResources;
- (void)_setNeedsUpdateMerchants;
- (void)_merchantsChanged:(NSNotification *)arg0;
- (void)_updateMerchantsWithVendorBags:(NSArray *)arg0 shouldNotifyEnabledMerchantObservers:(char)arg1;
- (void)_registerAccountAndAuthenticatorForMerchant:(id)arg0;
- (NSPredicate *)_enabledMerchantsFilterPredicate;
- (void)setAllMerchants:(NSArray *)arg0;
- (void)setEnabledMerchants:(NSArray *)arg0;
- (id)_localBags;
- (void)_updateMerchantServices;
- (void)_cleanupAfterMerchantsHaveBeenRemoved;
- (void)_loadAddSiteMerchantsWithCompletionHandler:(id /* block */)arg0;
- (void)_updateMerchantsWithVendorBags:(NSArray *)arg0;
- (void)_cleanUpAfterLegacyMerchant:(id)arg0;
- (void)_updateMerchants;
- (void)dealloc;
- (ATVMerchantCoordinator *)init;

@end
