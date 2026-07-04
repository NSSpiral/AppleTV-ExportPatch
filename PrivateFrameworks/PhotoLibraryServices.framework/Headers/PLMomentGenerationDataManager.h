/* Runtime dump - PLMomentGenerationDataManager
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentGenerationDataManager : NSObject <PLMomentGenerationDataManagement_Private>
{
    PLXPCTransaction * _keepAliveTransaction;
    id _reachabilityBlock;
    void * _addressBook;
    PLMomentGeneration * _generator;
    PLMomentAnalyzer * _analyzer;
    NSDictionary * _generationOptions;
    char _observingReachability;
    char _isLightweightMigrationManager;
    NSManagedObjectContext * _managedObjectContext;
    PLPhotoLibrary * _momentGenerationLibrary;
}

@property (retain, nonatomic) NSManagedObjectContext * managedObjectContext;
@property (readonly, nonatomic) void * _addressBook;
@property (retain, nonatomic) PLPhotoLibrary * momentGenerationLibrary;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (PLMomentGenerationDataManager *)sharedMomentGenerationDataManager;
+ (void)setManagerMomentarilyBlessed:(id)arg0;
+ (void)_setManagedObjectContextMomentarilyBlessed:(id)arg0;
+ (char)isManagedObjectContextMomentarilyBlessed:(id)arg0;
+ (char)isManagerMomentarilyBlessed:(id)arg0;

- (void)dealloc;
- (NSManagedObjectContext *)managedObjectContext;
- (char)save:(id *)arg0;
- (char)isNetworkReachable;
- (PLMomentAnalyzer *)analyzer;
- (void)setManagedObjectContext:(NSManagedObjectContext *)arg0;
- (char)hasChanges;
- (void)refreshAllObjects;
- (void)setMomentAnalysisNeeded:(char)arg0;
- (char)isMomentAnalysisNeeded;
- (void)refreshObject:(NSObject *)arg0 mergeChanges:(char)arg1;
- (PLMomentGeneration *)generator;
- (NSError *)allMomentsWithError:(id *)arg0;
- (void)performDataTransaction:(NSObject *)arg0 synchronously:(/* block */ id)arg1 completionHandler:(char)arg2;
- (PLMomentGenerationDataManager *)initWithManagedObjectContextForLightweightMigration:(id)arg0;
- (NSError *)orphanedAssetIDsWithError:(id *)arg0;
- (void)setMomentGenerationLibrary:(PLPhotoLibrary *)arg0;
- (void)stopObservingNetworkReachabilityChanges;
- (void)reloadGenerationOptions;
- (void)_finalizeInit;
- (void)setupPhotoLibrary;
- (PLPhotoLibrary *)momentGenerationLibrary;
- (NSArray *)insertedObjects;
- (NSArray *)updatedObjects;
- (NSArray *)deletedObjects;
- (NSString *)_serverVersionInfoFilePath;
- (NSString *)_metadataPath;
- (void)_updateKeepAlive;
- (void)_removeKeepAlive;
- (void)_networkReachabilityDidChange:(NSDictionary *)arg0;
- (void *)_addressBook;
- (NSObject *)_addressDictionaryForABRecord:(void *)arg0 identifier:(int)arg1;
- (NSDictionary *)_currentHomeAddressDictionary;
- (void)performBlock:(id /* block */)arg0 synchronously:(/* block */ id)arg1 completionHandler:(char)arg2;
- (NSObject *)allMomentsInLibrary;
- (void)removeMomentFromAllMoments:(id)arg0;
- (void)insertMomentIntoAllMoments:(id)arg0 atIndex:(unsigned int)arg1;
- (void)invalidateLocationDataForAssetsInMoment:(id)arg0;
- (NSDictionary *)generationOptions;
- (char)isMomentsSupportedOnPlatform;
- (NSDictionary *)serverVersionInfo;
- (char)saveServerVersionInfo:(NSDictionary *)arg0;
- (NSDictionary *)analysisMetadata;
- (char)saveAnalysisMetadata:(NSDictionary *)arg0;
- (NSObject *)assetWithUniqueID:(NSObject *)arg0 error:(id *)arg1;
- (id)assetsWithUniqueIDs:(id)arg0 error:(id *)arg1;
- (NSObject *)momentWithUniqueID:(NSObject *)arg0 error:(id *)arg1;
- (NSObject *)momentListWithUniqueID:(NSObject *)arg0 forLevel:(short)arg1 error:(id *)arg2;
- (NSDate *)momentsSinceDate:(NSDate *)arg0;
- (NSDate *)momentsBetweenDate:(NSDate *)arg0 andDate:(NSDate *)arg1 sorted:(char)arg2;
- (NSDate *)momentListContainingDate:(NSDate *)arg0 forLevel:(short)arg1 wantsEarliest:(char)arg2;
- (id)yearMomentListForYear:(int)arg0 wantsEarliest:(char)arg1;
- (id)findOrCreateYearMomentListForYear:(int)arg0;
- (Class)momentListDataClassForGranularityLevel:(short)arg0;
- (Class)momentDataClass;
- (Class)momentAssetDataClass;
- (id)insertNewMomentListForGranularityLevel:(short)arg0;
- (id)insertNewMoment;
- (void)resetOnFailure;
- (NSData *)allMomentsWithInvalidReverseLocationData;
- (id)allMomentListsForLevel:(short)arg0;
- (id)allMomentListsWithInvalidReverseLocationDataForLevel:(short)arg0;
- (NSError *)allAssetsToBeIncludedInMomentsWithError:(id *)arg0;
- (NSError *)allAssetIDsToBeIncludedInMomentsWithError:(id *)arg0;
- (void)beginObservingNetworkReachabilityChangesWithBlock:(id /* block */)arg0;
- (NSDictionary *)homeAddressDictionary;
- (void)pendingChangesUpdated:(unsigned int)arg0;
- (unsigned int)hardGenerationBatchSizeLimit;
- (char)wantsMomentReplayLogging;
- (NSString *)replayLogPath;
- (void)verifyAndRepairOrphanedAssets:(NSArray *)arg0;

@end
