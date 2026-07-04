/* Runtime dump - ATVPodcastManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@class ATVKeyValueStore;
@interface ATVPodcastManager : BRSingleton
{
    ATVKeyValueStore * _kvStore;
    NSMutableArray * _atvSubscriptions;
    NSMutableArray * _allSubscriptions;
    NSMutableDictionary * _inflightSubscriptionStatus;
    NSMutableArray * _migrationCompletionBlocks;
    char _migrating;
    char _didAccountPreload;
}

@property char migrating;
@property char didAccountPreload;

+ (ATVPodcastManager *)singleton;
+ (void)setSingleton:(NSObject *)arg0;
+ (ATVPodcastManager *)_resolveSubscriptions:(id)arg0 yours:(id)arg1 theirs:(id)arg2;

- (void)saveWithOrder:(int)arg0;
- (void)fetchSubscriptions:(id)arg0;
- (void)touchFavorite:(id)arg0;
- (void)fetchSubscriptionsForStation:(id)arg0 completionBlock:(id /* block */)arg1;
- (char)isSubscribedToItemID:(NSObject *)arg0;
- (void)unsubscribe:(id)arg0;
- (NSObject *)subscribedDateForItemID:(NSObject *)arg0;
- (void)_kvsStoreAccountDidSignIn;
- (void)_kvsStoreAccountDidSignOut;
- (char)didAccountPreload;
- (void)setDidAccountPreload:(char)arg0;
- (void)setMigrating:(char)arg0;
- (void)_saveSubscriptionsToKVS;
- (void)_reallyUpdateSubscriptionsFromKVSWithCompletion:(id /* block */)arg0;
- (id)_existingFavoriteInSubscriptions:(id)arg0;
- (void)_updateSubscriptionsFromKVSWithCompletion:(id /* block */)arg0;
- (NSObject *)_subscriptionForItemID:(NSObject *)arg0;
- (void)_makeNonPersonalizedRequestForIdentifiers:(id)arg0 profile:(MCProfile *)arg1 completion:(id /* block */)arg2;
- (char)isMigrating;
- (void)_preloadSubscriptions;
- (void)fetchSubscriptionImageUrls:(id)arg0;
- (void)fetchStations:(id)arg0;
- (void)dealloc;
- (ATVPodcastManager *)init;
- (void).cxx_destruct;
- (void)subscribe:(id)arg0;
- (id)_callerValue;

@end
