/* Runtime dump - BRParentalControlManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@protocol ATVSettingsMigration;

@class SETTINGSAppliance;
@interface BRParentalControlManager : BRSingleton <ATVSettingsMigration>
{
    <BRRatingInfoDatabase> * _ratingInfoDatabase;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BRParentalControlManager *)singleton;
+ (void)setSingleton:(NSObject *)arg0;
+ (char)storeAccessRestricted;

- (void)setRatingDatabase:(id)arg0;
- (void)setAccessMode:(int)arg0 forAppliance:(SETTINGSAppliance *)arg1 categoryIdentifier:(NSString *)arg2;
- (void)setAccessModeForPurchase:(int)arg0;
- (void)setDefaultRatingSystemID:(NSObject *)arg0;
- (id)ratingDatabase;
- (void)setMultipleAccessModes:(int)arg0 forMediaType:(NSObject *)arg1 withRatingSystemIDs:(id)arg2 withThresholdRank:(long)arg3;
- (void)setExplicitAccessMode:(int)arg0 forMediaType:(NSObject *)arg1;
- (int)accessModeForAppliance:(id)arg0 categoryIdentifier:(NSString *)arg1;
- (void)clearAccessModeforAppliance:(id)arg0 categoryIdentifier:(NSString *)arg1;
- (void)migrateFrom:(NSString *)arg0 to:(NSString *)arg1;
- (int)accessModeForMerchantIdentifier:(NSString *)arg0;
- (char)accessControlEnabled;
- (int)explicitAccessModeForMediaType:(NSObject *)arg0;
- (NSObject *)defaultRatingSystemID;
- (NSObject *)thresholdForMediaType:(NSObject *)arg0 withRatingSystemID:(NSObject *)arg1;
- (int)accessModeForPurchase;
- (void)setAccessMode:(int)arg0 forMerchantIdentifier:(NSString *)arg1;
- (int)computeAccessModeForAppliance:(id)arg0 withCategoryIdentifier:(NSString *)arg1;
- (int)computeAccessModeForPurchaseWithMediaType:(NSObject *)arg0 withRatingSystemID:(NSObject *)arg1 withRank:(id)arg2 isExplicit:(char)arg3;
- (int)computeAccessModeForPurchase;
- (void)setAccessControlEnabled:(char)arg0;
- (void)setAccessMode:(int)arg0 forMediaType:(NSObject *)arg1 withRatingSystemID:(NSObject *)arg2 withThresholdRank:(long)arg3;
- (int)computeAccessModeForAsset:(NSSet *)arg0;
- (id)_convertThreshold:(id)arg0 toThresholdForSystemID:(NSObject *)arg1 forMediaType:(NSObject *)arg2;
- (void)_delayedNotifyApplianceAccessChanged;
- (id)mediaAccessModesWithMode:(int)arg0 forMediaType:(NSObject *)arg1 withRatingSystemID:(NSObject *)arg2 withThresholdRank:(long)arg3 fromMediaAccessModes:(NSArray *)arg4;
- (void)_migrateParentalControlsForSundanceAndPrior;
- (void)_migrateParentalControlsForPriorToBrighton;
- (void)_migrateParentalControlsForPriorToSochi;
- (void)_migrateParentalControlsForPriorToAuburn;
- (int)accessModeForMediaType:(NSObject *)arg0 withRatingSystemID:(NSObject *)arg1 withRank:(id)arg2;
- (NSString *)pin;
- (void)setPin:(NSString *)arg0;
- (BRParentalControlManager *)init;

@end
