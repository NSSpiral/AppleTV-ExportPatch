/* Runtime dump - ATVHSKeybagStore
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSKeybagStore : NSObject <ATVHSKeybagRentalCheckinOperationDelegate, ATVHSKeybagRentalCheckoutOperationDelegate>
{
    char _haveRentalJournalCheckinsBeenAttempted;
    NSString * _rootPath;
    NSString * _keybagsPath;
    NSMutableDictionary * _keybagSynchronizers;
    NSTimer * _keybagCleanUpTimer;
    NSMutableArray * _rentalRequestQueue;
    NSMutableDictionary * _checkedOutRentals;
    NSString * _rentalJournalPath;
}

@property (copy, nonatomic) NSString * rootPath;
@property (copy, nonatomic) NSString * keybagsPath;
@property (retain, nonatomic) NSMutableDictionary * keybagSynchronizers;
@property (retain, nonatomic) NSTimer * keybagCleanUpTimer;
@property (retain, nonatomic) NSMutableArray * rentalRequestQueue;
@property (retain, nonatomic) NSMutableDictionary * checkedOutRentals;
@property (retain, nonatomic) NSString * rentalJournalPath;
@property (nonatomic) char haveRentalJournalCheckinsBeenAttempted;

+ (ATVHSKeybagStore *)sharedInstance;
+ (void)_eraseKeybagAtPath:(NSString *)arg0;
+ (void)_updateSentinelWithKeybagPath:(NSString *)arg0;
+ (NSDictionary *)_rentalJournalEntryForrentalInfo:(NSDictionary *)arg0;
+ (void)initializeWithKeybagRootPath:(NSString *)arg0;

- (void).cxx_destruct;
- (NSObject *)keybagPathForDataClient:(NSObject *)arg0;
- (void)_networkStateChanged:(NSNotification *)arg0;
- (void)rentalCheckinOperation:(NSObject *)arg0 didCheckinForRentalInfo:(NSDictionary *)arg1 error:(NSError *)arg2;
- (void)synchronizeKeybagWithDataClient:(NSObject *)arg0 completion:(id /* block */)arg1;
- (NSString *)_initWithKeybagRootPath:(NSString *)arg0;
- (NSObject *)_synchronizerForDataClient:(NSObject *)arg0;
- (NSMutableDictionary *)keybagSynchronizers;
- (NSString *)rootPath;
- (void)_eraseKeybags;
- (NSString *)keybagsPath;
- (char)_canRentalOperationBePerformedForRentalInfo:(NSDictionary *)arg0 dataClient:(ATVDataClient *)arg1 completion:(id /* block */)arg2;
- (void)_enqueueRentalRequest:(NSURLRequest *)arg0;
- (NSURLRequest *)_dequeueRentalRequest;
- (void)_removeRentalJournalEntryForrentalInfo:(NSDictionary *)arg0;
- (void)_startNextRentalRequest;
- (void)_addRentalJournalEntryForrentalInfo:(NSDictionary *)arg0;
- (void)_cleanupUnusedKeybagsTimerHandler;
- (void)_dataClientStatusChangedHandler:(id /* block */)arg0;
- (void)_dataClientKeybagDataUpdated:(id)arg0;
- (void)_checkinJournaledRenalsIfNessecary;
- (NSMutableArray *)rentalRequestQueue;
- (char)haveRentalJournalCheckinsBeenAttempted;
- (void)_checkinJournaledRenals;
- (void)setHaveRentalJournalCheckinsBeenAttempted:(char)arg0;
- (id)_readRentalJournal;
- (NSMutableDictionary *)checkedOutRentals;
- (void)_checkinRentalJournalEntry:(id)arg0;
- (void)_writeRentalJournal:(id)arg0;
- (NSString *)rentalJournalPath;
- (void)_autoSynchronizeWithDataClient:(NSObject *)arg0;
- (void)_eraseUnusedKeybags;
- (void)rentalCheckoutOperation:(NSObject *)arg0 willCheckoutRentalInfo:(NSDictionary *)arg1;
- (void)rentalCheckoutOperation:(NSObject *)arg0 didCheckoutForRentalInfo:(NSDictionary *)arg1 error:(NSError *)arg2;
- (char)isSynchronizingWithDataClient:(NSObject *)arg0;
- (void)eraseKeybagStore;
- (void)checkoutRentalInfo:(NSDictionary *)arg0 dataClient:(ATVDataClient *)arg1 completion:(id /* block */)arg2;
- (void)checkinRentalInfo:(NSDictionary *)arg0 dataClient:(ATVDataClient *)arg1 completion:(id /* block */)arg2;
- (void)setRootPath:(NSString *)arg0;
- (void)setKeybagsPath:(NSString *)arg0;
- (void)setKeybagSynchronizers:(NSMutableDictionary *)arg0;
- (NSTimer *)keybagCleanUpTimer;
- (void)setKeybagCleanUpTimer:(NSTimer *)arg0;
- (void)setRentalRequestQueue:(NSMutableArray *)arg0;
- (void)setCheckedOutRentals:(NSMutableDictionary *)arg0;
- (void)setRentalJournalPath:(NSString *)arg0;

@end
