/* Runtime dump - RadioModel
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioModel : NSObject <NSFetchedResultsControllerDelegate>
{
    NSObject<OS_dispatch_queue> * _accessSerialQueue;
    NSOperationQueue * _backgroundCleanupQueue;
    BKSProcessAssertion * _backgroundProcessAssertion;
    int _backgroundTaskCount;
    NSObject<OS_dispatch_source> * _backgroundTaskInvalidateTimerSource;
    NSManagedObjectContext * _context;
    char _isBackgroundModel;
    NSManagedObjectModel * _model;
    int _modelChangedToken;
    char _modelChangedTokenIsValid;
    int _modelDeletedToken;
    char _modelDeletedTokenIsValid;
    NSFetchedResultsController * _stationFetchedResultsController;
    NSFetchRequest * _stationFetchRequest;
    NSMapTable * _stationToSkipControllerMapTable;
    NSPersistentStoreCoordinator * _storeCoordinator;
    int _transactionCount;
}

@property (nonatomic) unsigned long long authenticatedAccountIdentifier;
@property (nonatomic) unsigned long long globalVersion;
@property (copy, nonatomic) NSString * globalHash;
@property (readonly, nonatomic) NSArray * allStations;
@property (readonly, nonatomic) NSArray * stations;
@property (copy, nonatomic) NSArray * stationSortOrdering;
@property (readonly, nonatomic) NSArray * userStations;
@property (readonly, nonatomic) NSArray * featuredStations;
@property (readonly, nonatomic) NSArray * previewStations;
@property (readonly, copy, nonatomic) NSArray * reportProblemIssueTypes;

+ (RadioModel *)sharedModel;
+ (void)initialize;
+ (NSObject *)backgroundModel;
+ (NSString *)_radioDatabasePath;
+ (NSDictionary *)_persistentStoreConfigurationOptions;
+ (void)_postAccountDidDeauthenticateNotification;
+ (void)deleteAllData;
+ (NSString *)_radioDirectoryPath;

- (void)setDatabaseVersion:(long long)arg0;
- (long long)databaseVersion;
- (void)controller:(BRController *)arg0 didChangeObject:(NSObject *)arg1 atIndexPath:(NSIndexPath *)arg2 forChangeType:(unsigned int)arg3 newIndexPath:(NSIndexPath *)arg4;
- (void)controllerDidChangeContent:(NSObject *)arg0;
- (NSArray *)stations;
- (void)_beginBackgroundTaskAssertion;
- (void)_endBackgroundTaskAssertion;
- (NSArray *)userStations;
- (NSArray *)stationSortOrdering;
- (NSObject *)stationWithID:(long long)arg0;
- (NSString *)stationWithStationStringID:(NSString *)arg0;
- (id)stationWithHash:(id)arg0;
- (void)dealloc;
- (RadioModel *)init;
- (RadioModel *)_init;
- (NSManagedObjectContext *)context;
- (void).cxx_destruct;
- (void)performTransactionWithBlock:(id /* block */)arg0;
- (NSObject *)_initBackgroundModelWithPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg0;
- (void)_defaultRadioModelInitialization;
- (void)_prepareModel;
- (void)_postContextDidChangeNotification:(NSNotification *)arg0;
- (void)_resetModel;
- (NSArray *)_arrayByReplacingManagedObjectsInArray:(NSArray *)arg0;
- (NSString *)_databasePropertyValueForKey:(NSString *)arg0;
- (unsigned int)numberOfTracksSkippedForStation:(id)arg0;
- (NSObject *)convertObject:(NSObject *)arg0;
- (void)deleteAllData;
- (void)deleteStation:(id)arg0;
- (void)performWriteTransactionWithBlock:(id /* block */)arg0;
- (void)_insertRevisionWithStationID:(long long)arg0 revisionType:(int)arg1;
- (NSDictionary *)newStationWithDictionary:(NSDictionary *)arg0;
- (NSObject *)stationWithPersistentID:(long long)arg0;
- (void)noteTrackWasSkippedForStation:(id)arg0 onDate:(NSDate *)arg1;
- (NSString *)_newManagedSkipHistoryWithSkipIdentifier:(NSString *)arg0;
- (void)_addTimestamp:(double)arg0 toManagedSkipHistory:(NSArray *)arg1 withSkipIntervalForCulling:(double)arg2;
- (NSObject *)_newManagedSkipHistoryWithStationID:(long long)arg0;
- (id)_newManagedSkipHistoryWithStationHash:(NSString *)arg0;
- (unsigned int)numberOfTracksSkippedForStation:(id)arg0 returningEarliestSkipDate:(id *)arg1;
- (NSString *)_managedSkipHistoryWithSkipIdentifier:(NSString *)arg0;
- (unsigned int)_numberOfSkipsUsedWithSkipTimestamps:(NSArray *)arg0 currentTimestamp:(double)arg1 skipInterval:(double)arg2 returningEarliestSkipTimestamp:(double *)arg3;
- (NSObject *)_managedSkipHistoryWithStationID:(long long)arg0;
- (id)_managedSkipHistoryWithStationHash:(NSString *)arg0;
- (void)_performTransactionAndSave:(char)arg0 withBlock:(id /* block */)arg1;
- (NSArray *)allStations;
- (void)_setDatabasePropertyValue:(id)arg0 forKey:(NSString *)arg1;
- (unsigned long long)globalVersion;
- (void)_contextDidSaveNotification:(NSNotification *)arg0;
- (NSSet *)convertObjectsInSet:(NSSet *)arg0;
- (NSSet *)_setByReplacingManagedObjectsInSet:(NSSet *)arg0;
- (void)_createRadioDirectoryAndDatabaseIfNecessary;
- (char)canSkipTracksForStation:(id)arg0;
- (NSArray *)convertObjects:(NSArray *)arg0;
- (void)deletePreviewStation:(id)arg0;
- (void)deleteStationWithID:(long long)arg0;
- (void)enumerateRevisionsSinceRevisionID:(long long)arg0 usingBlock:(id /* block */)arg1;
- (NSArray *)featuredStations;
- (NSString *)globalHash;
- (NSDictionary *)newFeaturedStationWithDictionary:(NSDictionary *)arg0;
- (NSDictionary *)newPreviewStationWithDictionary:(NSDictionary *)arg0;
- (void)noteTrackWasSkippedForStation:(id)arg0;
- (NSArray *)previewStations;
- (void)removeTrackPlaybackDescriptor:(NSObject *)arg0 fromStation:(ATVRadioStation *)arg1;
- (void)removeTrackPlaybackDescriptorQueuesForAllStations;
- (NSArray *)reportProblemIssueTypes;
- (void)setGlobalHash:(NSString *)arg0;
- (void)setGlobalVersion:(unsigned long long)arg0;
- (void)setReportProblemIssueTypes:(NSArray *)arg0;
- (void)setStationSortOrdering:(NSArray *)arg0;
- (void)setTrackPlaybackDescriptorQueue:(NSArray *)arg0 forStation:(ATVRadioStation *)arg1;
- (id)skipControllerForStation:(id)arg0;
- (void)copySkipHistoryFromStationHash:(id)arg0 toStationID:(long long)arg1;
- (void)_registerStationSkipController:(BRController *)arg0;
- (void)_unregisterStationSkipController:(BRController *)arg0;
- (unsigned long long)authenticatedAccountIdentifier;
- (void)setAuthenticatedAccountIdentifier:(unsigned long long)arg0;

@end
