/* Runtime dump - PHPhotoLibrary
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHPhotoLibrary : NSObject
{
    char _unknownMergeEvent;
    char _isChangeProcessingPending;
    NSObject<OS_dispatch_queue> * _queue;
    PLPhotoLibrary * _photoLibrary;
    PLPhotoLibrary * _changeHandlingPhotoLibrary;
    NSObject<OS_dispatch_queue> * _transactionQueue;
    NSMutableSet * _inserts;
    NSMutableSet * _updates;
    NSMutableSet * _deletes;
    NSMutableDictionary * _saveTokensToKnownUUIDs;
    NSMutableDictionary * _changeRequests;
    NSHashTable * _fetchResults;
    NSHashTable * _observers;
    NSMutableDictionary * _changeNotificationInfo;
    double _lastChangeProcessingStarted;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (retain, nonatomic) PLPhotoLibrary * photoLibrary;
@property (retain, nonatomic) PLPhotoLibrary * changeHandlingPhotoLibrary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * transactionQueue;
@property (retain, nonatomic) NSMutableSet * inserts;
@property (retain, nonatomic) NSMutableSet * updates;
@property (retain, nonatomic) NSMutableSet * deletes;
@property (retain, nonatomic) NSMutableDictionary * saveTokensToKnownUUIDs;
@property (retain, nonatomic) NSMutableDictionary * changeRequests;
@property (retain, nonatomic) NSHashTable * fetchResults;
@property (retain, nonatomic) NSHashTable * observers;
@property (retain, nonatomic) NSMutableDictionary * changeNotificationInfo;
@property (nonatomic) char unknownMergeEvent;
@property (nonatomic) char isChangeProcessingPending;
@property (nonatomic) double lastChangeProcessingStarted;

+ (PHPhotoLibrary *)uniquedOID:(id)arg0;
+ (NSArray *)uniquedOIDsFromObjects:(NSArray *)arg0;
+ (void)_forceUserInterfaceReload;
+ (void)requestAuthorization:(NSObject *)arg0;
+ (Class)PHObjectClassForEntityName:(NSString *)arg0;
+ (Class)classForFetchType:(NSObject *)arg0;
+ (Class)PHObjectClassForOID:(id)arg0;
+ (NSObject *)_effectiveRootEntity:(NSObject *)arg0;
+ (PHPhotoLibrary *)uniquedOIDs:(NSMutableSet *)arg0;
+ (int)authorizationStatus;
+ (PHPhotoLibrary *)sharedPhotoLibrary;

- (void)registerUUID:(id)arg0 forSaveToken:(NSString *)arg1;
- (NSObject *)fetchUpdatedObject:(NSObject *)arg0;
- (void)assertTransaction;
- (void)recordDeleteRequest:(CKDPRecordDeleteRequest *)arg0;
- (id)changeRequestForUUID:(id)arg0;
- (void)setChangeRequest:(NSURLRequest *)arg0 forUUID:(NSUUID *)arg1;
- (void)recordInsertRequest:(NSURLRequest *)arg0;
- (void)recordUpdateRequest:(NSURLRequest *)arg0;
- (NSArray *)pl_syncProgressAlbums;
- (NSString *)removeUuidForSaveToken:(NSString *)arg0;
- (PHPhotoLibrary *)initSharedLibrary;
- (void)handleMergeNotification:(NSNotification *)arg0;
- (NSMutableSet *)inserts;
- (NSMutableSet *)deletes;
- (NSString *)transactionContext;
- (NSObject *)transactionPLPhotoLibrary;
- (NSMutableDictionary *)changeRequests;
- (void)_commitTransaction:(NSObject *)arg0;
- (NSMutableDictionary *)saveTokensToKnownUUIDs;
- (id)fetchPHObjectsForOIDs:(id)arg0 propertyHint:(unsigned int)arg1 includeTrash:(char)arg2;
- (PLPhotoLibrary *)changeHandlingPhotoLibrary;
- (void)registerFetchResult:(NSObject *)arg0;
- (void)unregisterFetchResult:(NSObject *)arg0;
- (char)isApplyingRequestedChanges;
- (NSObject *)queryForType:(NSObject *)arg0 withIdentifiers:(PCPersistentIdentifiers *)arg1 local:(char)arg2;
- (id)fetchPHObjectsForUUIDs:(id)arg0 entityName:(NSString *)arg1;
- (void)setChangeHandlingPhotoLibrary:(PLPhotoLibrary *)arg0;
- (NSObject<OS_dispatch_queue> *)transactionQueue;
- (void)setTransactionQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setInserts:(NSMutableSet *)arg0;
- (void)setUpdates:(NSMutableSet *)arg0;
- (void)setDeletes:(NSMutableSet *)arg0;
- (void)setSaveTokensToKnownUUIDs:(NSMutableDictionary *)arg0;
- (void)setChangeRequests:(NSMutableDictionary *)arg0;
- (NSHashTable *)fetchResults;
- (void)setFetchResults:(NSHashTable *)arg0;
- (NSMutableDictionary *)changeNotificationInfo;
- (void)setChangeNotificationInfo:(NSMutableDictionary *)arg0;
- (char)unknownMergeEvent;
- (void)setUnknownMergeEvent:(char)arg0;
- (char)isChangeProcessingPending;
- (void)setIsChangeProcessingPending:(char)arg0;
- (double)lastChangeProcessingStarted;
- (void)setLastChangeProcessingStarted:(double)arg0;
- (PHPhotoLibrary *)init;
- (void).cxx_destruct;
- (NSString *)managedObjectContext;
- (void)setObservers:(NSHashTable *)arg0;
- (NSHashTable *)observers;
- (void)registerChangeObserver:(NSObject *)arg0;
- (void)unregisterChangeObserver:(NSObject *)arg0;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)_beginTransaction;
- (void)performChanges:(id)arg0 completionHandler:(/* block */ id)arg1;
- (char)performChangesAndWait:(id)arg0 error:(/* block */ id)arg1;
- (id)fetchPHObjectsForOIDs:(id)arg0;
- (PLPhotoLibrary *)photoLibrary;
- (void)setPhotoLibrary:(PLPhotoLibrary *)arg0;
- (void)_processPendingChanges;
- (NSMutableSet *)updates;

@end
