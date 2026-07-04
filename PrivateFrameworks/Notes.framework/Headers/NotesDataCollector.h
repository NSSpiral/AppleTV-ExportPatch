/* Runtime dump - NotesDataCollector
 * Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NotesDataCollector : NSObject
{
    char _automaticCollectionOn;
    NotesDataCollectorLogger * _logger;
    ACAccountStore * _accountStore;
    NSDictionary * _accountTypesPerIdentifierCache;
    NSObject<OS_dispatch_group> * _logDispatchGroup;
}

@property (retain, nonatomic) NotesDataCollectorLogger * logger;
@property (nonatomic) char automaticCollectionOn;
@property (retain, nonatomic) ACAccountStore * accountStore;
@property (copy) NSDictionary * accountTypesPerIdentifierCache;
@property (retain, nonatomic) NSObject<OS_dispatch_group> * logDispatchGroup;

+ (NotesDataCollector *)sharedCollector;
+ (void)clearSharedCollector;

- (void)dealloc;
- (NotesDataCollector *)init;
- (void).cxx_destruct;
- (ACAccountStore *)accountStore;
- (void)setAccountStore:(ACAccountStore *)arg0;
- (void)startAutomaticCollection;
- (char)isAutomaticCollectionOn;
- (void)setAutomaticCollectionOn:(char)arg0;
- (void)noteContextWillSaveNotification:(NSNotification *)arg0;
- (void)performInitialCollectionIfNeeded;
- (NSObject<OS_dispatch_group> *)logDispatchGroup;
- (void)logTotalNoteCount;
- (void)logStoreCount;
- (void)logNoteCountPerStore;
- (NSDictionary *)accountTypesPerIdentifierCache;
- (char)isAppleAccountIdentifier:(NSString *)arg0;
- (void)setAccountTypesPerIdentifierCache:(NSDictionary *)arg0;
- (NSObject *)existingAccountForStore:(NSObject *)arg0;
- (NSObject *)storeTypeForAccountType:(int)arg0 accountIdentifier:(NSString *)arg1;
- (void)logDeltaCountForChangedNotesInContext:(NSObject *)arg0;
- (void)logDeltaCountForChangedStoresInContext:(NSObject *)arg0;
- (id)existingStoreForNote:(NSNotification *)arg0;
- (void)browseAddedAndDeletedObjectsWithEntity:(NSObject *)arg0 inManagedObjectContext:(NSObject *)arg1 objectHandler:(id /* block */)arg2;
- (void)logChanges:(char)arg0;
- (void)logNoteDeltaCount:(int)arg0;
- (void)logNoteCreationDeltaCountWithAppIdentifier:(int)arg0;
- (void)logNoteDeltaCount:(int)arg0 forStoreType:(NSObject *)arg1;
- (void)logStoreDeltaCount:(int)arg0 forType:(NSObject *)arg1;
- (NSString *)freshContext;
- (NSObject *)classifyStoresByType:(NSObject *)arg0;
- (void)stopAutomaticCollection;
- (void)logNoteActivityType:(NSObject *)arg0;
- (void)setLogDispatchGroup:(NSObject<OS_dispatch_group> *)arg0;
- (NotesDataCollectorLogger *)logger;
- (void)setLogger:(NotesDataCollectorLogger *)arg0;

@end
