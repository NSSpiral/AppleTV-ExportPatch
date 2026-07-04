/* Runtime dump - WLKChannelDetails
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface WLKChannelDetails : NSObject
{
    char _subscribed;
    char _itunes;
    char _firstParty;
    char _watchListEnabled;
    char _requiresSubscriptionForConsent;
    char _requiresAccountLevelConsent;
    char _shouldPromptForConsentOnSubscriptionChange;
    char _shouldTrackPlayActivity;
    char _shouldIncludeInConsent;
    char _appInstalled;
    NSString * _channelID;
    NSString * _name;
    NSArray * _appAdamIDs;
    NSArray * _appBundleIDs;
    NSString * _appName;
    NSURL * _appStoreURL;
    NSDictionary * _rateLimit;
}

@property (readonly, copy, nonatomic) NSString * channelID;
@property (readonly, copy, nonatomic) NSString * name;
@property (readonly, copy, nonatomic) NSArray * appAdamIDs;
@property (readonly, copy, nonatomic) NSArray * appBundleIDs;
@property (readonly, copy, nonatomic) NSString * appName;
@property (readonly, copy, nonatomic) NSURL * appStoreURL;
@property (readonly, nonatomic) char subscribed;
@property (readonly, nonatomic) char itunes;
@property (readonly, nonatomic) char firstParty;
@property (readonly, nonatomic) char watchListEnabled;
@property (readonly, nonatomic) char requiresSubscriptionForConsent;
@property (readonly, nonatomic) char requiresAccountLevelConsent;
@property (readonly, nonatomic) char shouldPromptForConsentOnSubscriptionChange;
@property (readonly, nonatomic) NSDictionary * rateLimit;
@property (readonly, nonatomic) char shouldTrackPlayActivity;
@property (readonly, nonatomic) char shouldIncludeInConsent;
@property (readonly, nonatomic) char appInstalled;

- (NSString *)channelID;
- (char)isAppInstalled;
- (char)isiTunes;
- (NSArray *)appAdamIDs;
- (NSArray *)appBundleIDs;
- (NSURL *)appStoreURL;
- (char)isFirstParty;
- (char)isWatchListEnabled;
- (char)requiresSubscriptionForConsent;
- (char)requiresAccountLevelConsent;
- (char)shouldPromptForConsentOnSubscriptionChange;
- (NSDictionary *)rateLimit;
- (char)shouldTrackPlayActivity;
- (char)shouldIncludeInConsent;
- (char)isSubscribed;
- (NSString *)appName;
- (WLKChannelDetails *)init;
- (NSString *)description;
- (WLKChannelDetails *)initWithDictionary:(NSDictionary *)arg0;
- (NSString *)name;
- (void).cxx_destruct;

@end
