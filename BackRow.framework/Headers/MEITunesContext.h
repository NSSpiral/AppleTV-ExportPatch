/* Runtime dump - MEITunesContext
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@protocol NSNetServiceBrowserDelegate;
@protocol NSNetServiceDelegate;
@interface MEITunesContext : BRSingleton <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    struct AppContext * _iTunesContext;
    <MEITunesPlayerMessageHandler> * _playerHandler;
    NSMutableDictionary * _drmSyncInfo;
    char _inRetailMode;
    NSMutableArray * _drmAccountQueries;
    NSMutableArray * _drmTokenQueries;
    NSMutableArray * _drmStoreKeysQueries;
    NSMutableArray * _rentalQueries;
    NSMutableSet * _importedKeybagUserDSIDs;
    NSTimer * _idleTimer;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct AppContext *)iTunesContext;
+ (void)initializeServer;
+ (MEITunesContext *)singleton;
+ (void)setSingleton:(NSObject *)arg0;
+ (void)initialize;

- (void)_cleanupContext;
- (void)_setStoreFront:(ATVStoreFront *)arg0;
- (void)_photoDBRequested:(id)arg0;
- (void)_mediaCued:(id)arg0;
- (void)_homeShareAccountChanged:(NSNotification *)arg0;
- (void)_dataClientStatusChanged:(NSNotification *)arg0;
- (void)_dataClientDRMDataUpdated:(id)arg0;
- (void)_userActivity:(NSUserActivity *)arg0;
- (void)_startIdleTimer;
- (void)_checkinOutstandingRentals;
- (void)_decrementDRMSyncCount:(NSObject *)arg0;
- (void)_postDRMCompleteDelayed;
- (NSSet *)_serverFromAsset:(NSSet *)arg0;
- (void)_stateMachineStateChanged:(NSNotification *)arg0;
- (char)drmSyncInProgressForServer:(NSObject *)arg0;
- (void)startDRMSyncForServer:(NSObject *)arg0;
- (void)forceCheckInForJournalObject:(NSObject *)arg0 asset:(NSSet *)arg1;
- (void)setPlayerMessageHandler:(id /* block */)arg0;
- (id /* block */)playerMessageHandler;
- (void)importKeybagData:(NSData *)arg0 forDSID:(NSNumber *)arg1;
- (void)deleteImportedKeybagData;
- (char)attemptAuthorizationForAsset:(id /* <BRMediaAsset> */)arg0 error:(id *)arg1;
- (void)deauthorizeAssetIfNecessary:(id /* <BRMediaAsset> */)arg0;
- (void)_incrementDRMSyncCount:(NSObject *)arg0;
- (void)_addStoreKeysRequest:(struct ATVStoreRequest *)arg0 userID:(NSNumber *)arg1 dataServerID:(NSObject *)arg2;
- (void)_checkoutHomeShareRentalDelayed:(id)arg0;
- (void)_idleTimerFired:(id)arg0;
- (void)_checkoutHomeShareRentalOnITunes:(id)arg0;
- (void)_drmAccountQueryHandler:(id /* block */)arg0;
- (void)_drmTokenQueryHandler:(id /* block */)arg0;
- (void)_rentalCheckinQueryHandler:(id /* block */)arg0;
- (void)_rentalCheckoutQueryHandler:(id /* block */)arg0;
- (void)_photoDBQueryHandler:(id /* block */)arg0;
- (void)_removeStoreKeysRequestWithID:(int)arg0;
- (void)dealloc;
- (MEITunesContext *)init;
- (struct AppContext *)context;
- (void)_networkStateChanged:(NSNotification *)arg0;

@end
