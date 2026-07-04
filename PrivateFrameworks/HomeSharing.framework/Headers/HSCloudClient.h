/* Runtime dump - HSCloudClient
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSCloudClient : NSObject <HSCloudAvailability>
{
    char _active;
    HSConnectionConfiguration * _configuration;
    NSXPCConnection * _nsxpcConnection;
    unsigned long long _daemonConfiguration;
    NSMutableSet * _knownArtworkIDs;
    NSObject<OS_dispatch_queue> * _knownArtworkIDsQueue;
    NSMutableSet * _pendingArtworkRequests;
    NSObject<OS_dispatch_queue> * _pendingArtworkRequestsQueue;
    long long _preferredVideoQuality;
    id _updateInProgressChangedHandler;
}

@property (copy, nonatomic) id updateInProgressChangedHandler;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)resignActive;
- (char)isCellularDataRestricted;
- (void)addStoreItemWithAdamID:(long long)arg0 completionHandler:(id /* block */)arg1;
- (void)addStorePlaylistWithGlobalID:(PFUbiquityGlobalObjectID *)arg0 completionHandler:(id /* block */)arg1;
- (void)uploadCloudItemProperties;
- (void)setItemProperties:(void *)arg0 forSagaID:(long long)arg1;
- (void)setCollectionProperties:(NSDictionary *)arg0 forCollectionWithPersistentID:(long long)arg1 groupingType:(int)arg2 completionHandler:(id /* block */)arg3;
- (void)uploadCloudPlaylistProperties;
- (char)canShowCloudMusic;
- (char)canShowCloudVideo;
- (char)hasProperNetworkConditionsToPlayMedia;
- (void)loadGeniusItemsForSagaID:(long long)arg0 completionHandler:(id /* block */)arg1;
- (char)shouldProhibitActionsForCurrentNetworkConditions;
- (char)canShowCloudDownloadButtons;
- (void)updateSubscribedPlaylistsWithSagaIDs:(id)arg0 ignoreMinRefreshInterval:(char)arg1 completionHandler:(id /* block */)arg2;
- (void)createPlaylistWithPersistentID:(unsigned long long)arg0 properties:(NSDictionary *)arg1 trackList:(NSArray *)arg2 completionHandler:(id /* block */)arg3;
- (void)addGeniusPlaylistWithPersistentID:(unsigned long long)arg0 name:(NSString *)arg1 seedItemSagaIDs:(id)arg2 itemSagaIDs:(id)arg3 completionHandler:(id /* block */)arg4;
- (char)canSetPlaylistProperty:(NSObject *)arg0;
- (void)setPlaylistProperties:(NSDictionary *)arg0 trackList:(NSArray *)arg1 forPlaylistPersistentID:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)removePlaylistsWithSagaIDs:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)publishPlaylistWithSagaID:(long long)arg0 completionHandler:(id /* block */)arg1;
- (void)uploadArtworkForPlaylistWithPersistentID:(unsigned long long)arg0 completionHandler:(id /* block */)arg1;
- (char)canSetItemProperty:(NSObject *)arg0;
- (void)removeItemsWithSagaIDs:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)importItemArtworkForSagaID:(long long)arg0 completionHandler:(id /* block */)arg1;
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg0 completionHandler:(id /* block */)arg1;
- (void)importSubscriptionItemArtworkForPersistentID:(unsigned long long)arg0 completionHandler:(id /* block */)arg1;
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg0 completionHandler:(id /* block */)arg1;
- (void)importContainerArtworkForSagaID:(long long)arg0 completionHandler:(id /* block */)arg1;
- (void)importSubscriptionContainerArtworkForPersistentID:(unsigned long long)arg0 completionHandler:(id /* block */)arg1;
- (void)becomeActive;
- (void)loadIsJaliscoGeniusSupportedWithCompletionHandler:(id /* block */)arg0;
- (void)deauthenticateWithCompletionHandler:(id /* block */)arg0;
- (void)isExpiredWithCompletionHandler:(id /* block */)arg0;
- (void)isAuthenticatedWithCompletionHandler:(id /* block */)arg0;
- (void)loadUpdateProgressWithCompletionHandler:(id /* block */)arg0;
- (void)isAuthenticatedWithQueue:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)authenticateAndStartInitialImport:(char)arg0 mergeWithCloudLibrary:(char)arg1 completionHandler:(id /* block */)arg2;
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)setItemProperties:(void *)arg0 forPurchaseHistoryID:(unsigned long long)arg1;
- (void)evaluateKeepLocalRulesWithCompletionHandler:(id /* block */)arg0;
- (void)loadJaliscoGeniusCUIDWithCompletionHandler:(id /* block */)arg0;
- (void)setJaliscoGeniusCUID:(id)arg0 withCompletionHandler:(id /* block */)arg1;
- (id /* block */)updateInProgressChangedHandler;
- (void)loadIsUpdateInProgressWithCompletionHandler:(id /* block */)arg0;
- (void)setUpdateInProgressChangedHandler:(id /* block */)arg0;
- (void)dealloc;
- (HSCloudClient *)init;
- (void).cxx_destruct;
- (NSURLConnection *)connection;
- (void)authenticateWithCompletionHandler:(id /* block */)arg0;
- (void)loadArtworkDataForSagaID:(long long)arg0 completionHandler:(id /* block */)arg1;
- (void)loadArtworkDataForPurchaseHistoryIDs:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)setDaemonConfiguration:(unsigned long long)arg0;
- (void)updateJaliscoLibraryWithReason:(long long)arg0 completionHandler:(id /* block */)arg1;
- (void)updateSagaLibraryWithReason:(long long)arg0 completionHandler:(id /* block */)arg1;
- (void)loadArtworkInfoForSagaIDs:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)updateArtistHeroImages;
- (void)authenticateAndStartInitialImport:(char)arg0 completionHandler:(id /* block */)arg1;
- (void)_sendConfigurationToDaemon;
- (void)removeJaliscoLibraryWithCompletionHander:(NSString *)arg0;
- (void)updateJaliscoLibraryWithCompletionHandler:(id /* block */)arg0;
- (void)updateJaliscoAppsLibraryWithReason:(long long)arg0 completionHandler:(id /* block */)arg1;
- (void)searchJaliscoAppsLibrary:(NSObject *)arg0 searchMethod:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)jaliscoAppsImageDataForStoreID:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)redownloadPurchaseAppWithStoreID:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)setHidden:(char)arg0 purchasedAppWithStoreID:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
- (void)unhideAllPurchasedApps:(id)arg0;
- (void)updateJaliscoAppsLibraryForFamilyMemberStoreID:(NSObject *)arg0 withReason:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)updateSagaLibraryWithCompletionHandler:(id /* block */)arg0;
- (void)downloadGeniusDataWithCompletionHandler:(id /* block */)arg0;
- (void)loadJaliscoGeniusLearnMoreURLWithCompletionHandler:(id /* block */)arg0;
- (void)enableJaliscoGeniusWithCompletionHandler:(id /* block */)arg0;
- (void)updateJaliscoGeniusDataWithCompletionHandler:(id /* block */)arg0;
- (void)cancelUpdateJaliscoGeniusDataInProgressWithCompletionHandler:(id /* block */)arg0;
- (void)loadJaliscoGeniusOperationStatusWithCompletionHandler:(id /* block */)arg0;
- (void)disableJaliscoGeniusWithCompletionHandler:(id /* block */)arg0;
- (void)loadArtworkInfoForContainerSagaIDs:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)resetConfiguration:(NSDictionary *)arg0;
- (void)uploadItemProperties;
- (void)loadBooksForStoreIDs:(id)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)_serverDidLaunch;
- (void)_serverUpdateInProgressDidChange;
- (void)setPreferredVideoQuality:(long long)arg0;
- (HSCloudClient *)initWithConfiguration:(HSConnectionConfiguration *)arg0;

@end
