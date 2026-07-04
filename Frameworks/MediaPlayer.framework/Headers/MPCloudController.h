/* Runtime dump - MPCloudController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPCloudController : NSObject
{
    NSObject<HSCloudAvailability> * _cloudAvailabilityController;
    SSVMediaContentTasteController * _contentTasteController;
    char _isUpdateInProgress;
    int _preferencesChangedNotifyToken;
    char _preferencesChangedNotifyTokenIsValid;
    NSObject<OS_dispatch_queue> * _queue;
    char _isInitialImport;
    char _isCloudEnabled;
    char _jaliscoGeniusEnabled;
    HSCloudClient * _cloudClient;
}

@property (readonly, nonatomic) char canShowCloudDownloadButtons;
@property (readonly, nonatomic) char canDefaultMediaLibraryShowCloudContent;
@property (readonly, nonatomic) char canShowCloudMusic;
@property (readonly, nonatomic) char canShowCloudVideo;
@property (readonly, nonatomic) char isCloudEnabled;
@property (readonly, nonatomic) char hasCloudLockerAccount;
@property (readonly, nonatomic) char hasPurchaseHistoryAccount;
@property (readonly, nonatomic) HSCloudClient * cloudClient;
@property (readonly, nonatomic) char isUpdateInProgress;
@property (readonly, nonatomic) char isInitialImport;
@property (readonly, nonatomic) char isGeniusEnabled;
@property (readonly, nonatomic) char jaliscoGeniusEnabled;
@property (readonly, nonatomic) char enablingJaliscoGeniusRequiresTerms;

+ (MPCloudController *)sharedCloudController;
+ (char)isMediaApplication;
+ (void)migrateCellularDataPreferencesIfNeeded;

- (void)resignActive;
- (void)setLikedState:(int)arg0 forAlbumWithStoreID:(long long)arg1;
- (void)setLikedState:(int)arg0 forEntityWithStoreID:(long long)arg1 withMediaType:(unsigned int)arg2;
- (char)isCellularDataRestricted;
- (char)isCloudEnabled;
- (void)uploadArtworkForPlaylist:(id)arg0 completionHandler:(id /* block */)arg1;
- (char)isGeniusEnabled;
- (void)addStoreItemWithAdamID:(long long)arg0 completionHandler:(id /* block */)arg1;
- (void)addStorePlaylistWithGlobalID:(PFUbiquityGlobalObjectID *)arg0 completionHandler:(id /* block */)arg1;
- (void)uploadCloudItemProperties;
- (void)setItemProperties:(void *)arg0 forSagaID:(unsigned long long)arg1;
- (void)setCollectionProperties:(NSDictionary *)arg0 forCollectionWithPersistentID:(long long)arg1 groupingType:(int)arg2 completionHandler:(id /* block */)arg3;
- (void)uploadCloudPlaylistProperties;
- (void)setPlaylistProperties:(NSDictionary *)arg0 trackList:(NSArray *)arg1 forPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setLikedState:(int)arg0 forPlaylistWithGlobalID:(PFUbiquityGlobalObjectID *)arg1;
- (char)canShowCloudMusic;
- (char)canShowCloudVideo;
- (char)hasProperNetworkConditionsToPlayMedia;
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg0 completionHandler:(id /* block */)arg1;
- (char)isCloudLibraryEnabled;
- (void)loadArtworkForEntityPersistentID:(long long)arg0 entityType:(int)arg1 artworkType:(int)arg2 artworkSourceType:(int)arg3 completionHandler:(id /* block */)arg4;
- (void)canShowCloudDownloadButtonsDidChangeNotification:(NSNotification *)arg0;
- (void)canShowCloudTracksDidChangeNotification:(NSNotification *)arg0;
- (void)isCellularDataRestrictedDidChangeNotification:(NSNotification *)arg0;
- (char)shouldProhibitActionsForCurrentNetworkConditions;
- (char)canShowCloudDownloadButtons;
- (void)createPlaylistWithPersistentID:(unsigned long long)arg0 properties:(NSDictionary *)arg1 trackList:(NSArray *)arg2 completionHandler:(id /* block */)arg3;
- (void)addGeniusPlaylistWithPersistentID:(unsigned long long)arg0 name:(NSString *)arg1 seedItemSagaIDs:(id)arg2 itemSagaIDs:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)removePlaylistsWithSagaIDs:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)publishPlaylistWithSagaID:(unsigned long long)arg0 completionHandler:(id /* block */)arg1;
- (void)removeItemsWithSagaIDs:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)becomeActiveAndWaitUntilDone:(char)arg0;
- (void)becomeActive;
- (void)_initializeUpdateInProgressState;
- (void)loadUpdateProgressWithCompletionHandler:(id /* block */)arg0;
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)setItemProperties:(void *)arg0 forPurchaseHistoryID:(unsigned long long)arg1;
- (void)evaluateKeepLocalRulesWithCompletionHandler:(id /* block */)arg0;
- (void)loadJaliscoGeniusTermsAndConditionsWithCompletionHandler:(id /* block */)arg0;
- (char)canDefaultMediaLibraryShowCloudContent;
- (void)updateSubscribedPlaylistWithSagaID:(unsigned long long)arg0 ignoreMinRefreshInterval:(char)arg1 completionHandler:(id /* block */)arg2;
- (char)hasPurchaseHistoryAccount;
- (char)hasCloudLockerAccount;
- (char)isInitialImport;
- (char)isUpdateInProgress;
- (void)enableCloudLibraryWithOptions:(NSDictionary *)arg0 completionHandler:(id /* block */)arg1;
- (void)disableCloudLibraryWithCompletionHandler:(id /* block */)arg0;
- (char)enablingJaliscoGeniusRequiresTerms;
- (void)acceptJaliscGeniusTermsAndConditionsVersion:(long long)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)fetchRecommendedContentWithSeedTrackID:(long long)arg0 seedTrackIDType:(int)arg1 count:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (HSCloudClient *)cloudClient;
- (char)isJaliscoGeniusEnabled;
- (void)dealloc;
- (MPCloudController *)init;
- (void).cxx_destruct;

@end
