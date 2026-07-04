/* Runtime dump - BRMerchantInfo
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVVendorBag;
@interface BRMerchantInfo : NSObject
{
    ATVVendorBag * _vendorBag;
    char _enabled;
    NSString * _featureName;
    NSDictionary * metadata;
    NSDictionary * feedResources;
    int _iconBadgeCount;
}

@property (retain) NSString * featureName;
@property char enabled;
@property (readonly, nonatomic) char isReadFromLocalBag;
@property (readonly, nonatomic) char isLoadedByAddSite;
@property (readonly, nonatomic) NSString * merchantID;
@property (readonly, nonatomic) NSString * menuTitle;
@property (readonly, nonatomic) NSURL * menuIconURL;
@property (readonly, nonatomic) NSString * menuIconURLVersion;
@property (nonatomic) int iconBadgeCount;
@property (readonly, nonatomic) NSString * rootURL;
@property (readonly, nonatomic) NSString * topShelfControllerClassName;
@property (readonly, nonatomic) NSString * authType;
@property (nonatomic) NSDictionary * metadata;
@property (nonatomic) NSDictionary * feedResources;
@property (readonly, nonatomic) char hasBeenRemoved;
@property (readonly, nonatomic) char isPrimary;
@property (readonly, nonatomic) char isFeedMerchant;
@property (readonly, nonatomic) char isITunesFeedMerchant;
@property (readonly, nonatomic) char isSDKMerchant;
@property (readonly, retain, nonatomic) NSString * bootstrapResourceURL;
@property (readonly, nonatomic) NSString * bootstrapResourceVersion;
@property (readonly, nonatomic) NSString * javascriptURL;
@property (readonly, nonatomic) float preferredOrder;
@property (readonly, nonatomic) char usesParentalControls;
@property (readonly, nonatomic) int defaultParentalControlsAccessMode;
@property (readonly, nonatomic) NSString * supportURL;
@property (readonly, nonatomic) NSDictionary * appDictionary;
@property (readonly, nonatomic) NSArray * screensaverDictionaries;
@property (readonly, nonatomic) char pinToMerchant;
@property (readonly, nonatomic) NSArray * excludedMerchantIDs;
@property (readonly, nonatomic) char useShortNowPlayingIdlePresentationTime;
@property (readonly, nonatomic) char allowsPlaybackOnExit;
@property (readonly, nonatomic) char allowsAskToBuy;
@property (readonly, nonatomic) NSDictionary * privacyDictionary;
@property (readonly, nonatomic) char hasOnboarding;
@property (readonly, nonatomic) NSString * settingsControllerClassName;

+ (BRMerchantInfo *)infoWithVendorBag:(ATVVendorBag *)arg0;

- (NSDictionary *)privacyDictionary;
- (NSString *)merchantID;
- (char)isLoadedByAddSite;
- (char)shouldAllowRemoteInspectionOfJSContext;
- (NSString *)menuIconURLVersion;
- (char)isITunesFeedMerchant;
- (char)pinToMerchant;
- (NSString *)supportURL;
- (int)iconBadgeCount;
- (NSArray *)screensaverDictionaries;
- (NSString *)bootstrapResourceURL;
- (NSString *)bootstrapResourceVersion;
- (NSString *)javascriptURL;
- (char)allowsPlaybackOnExit;
- (NSString *)authType;
- (char)useShortNowPlayingIdlePresentationTime;
- (char)allowsAskToBuy;
- (NSString *)topShelfControllerClassName;
- (void)setIconBadgeCount:(int)arg0;
- (NSDictionary *)appDictionary;
- (NSDictionary *)feedResources;
- (id)javascript;
- (char)isFeedMerchant;
- (float)preferredOrder;
- (NSString *)settingsControllerClassName;
- (char)hasOnboarding;
- (int)defaultParentalControlsAccessMode;
- (NSArray *)excludedMerchantIDs;
- (char)isSDKMerchant;
- (char)isReadFromLocalBag;
- (char)hasBeenRemoved;
- (BRMerchantInfo *)initWithVendorBag:(ATVVendorBag *)arg0;
- (void)setFeedResources:(NSDictionary *)arg0;
- (void)useDefaultEnablement;
- (id)_featureCode;
- (NSURL *)menuIconURL;
- (char)usesParentalControls;
- (void)dealloc;
- (void)setEnabled:(char)arg0;
- (char)enabled;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (NSString *)menuTitle;
- (NSString *)rootURL;
- (char)isPrimary;
- (void)setMetadata:(NSDictionary *)arg0;
- (NSDictionary *)metadata;
- (void)setFeatureName:(NSString *)arg0;
- (NSString *)featureName;

@end
