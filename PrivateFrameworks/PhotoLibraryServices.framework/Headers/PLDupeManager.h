/* Runtime dump - PLDupeManager
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDupeManager : NSObject
{
    NSMutableArray * _normalAssetsObjectIDsToAnalyze;
    NSMutableDictionary * _cloudAssetsToAnalyze;
    NSMutableArray * _assetsWithUpdatedVisibility;
    char _doneWithCloudAssets;
    char _isRebuilding;
    NSMutableSet * _normalInserts;
    NSMutableSet * _cloudInserts;
    PLPhotoLibrary * _photoLibrary;
    long _once;
    NSCountedSet * _pauseReasons;
    NSSet * _softPauseReasons;
    double _rebuildStartTime;
}

@property (readonly, nonatomic) PLPhotoLibrary * photoLibrary;

+ (PLDupeManager *)sharedInstance;
+ (NSSet *)hashForAsset:(NSSet *)arg0;
+ (char)resetDupesAnalysisForOfflineStore:(NSObject *)arg0 resetHashes:(char)arg1;
+ (PLDupeManager *)placeholderHash;
+ (char)_resetDupesAnalysisInManagedObjectContext:(NSObject *)arg0 resetHashes:(char)arg1;
+ (NSString *)_hashForFileAtPath:(NSString *)arg0 utiType:(NSString *)arg1;
+ (void)_setPlaceHolderHashOnAsset:(NSSet *)arg0;
+ (char)_computeHashForAsset:(NSSet *)arg0;

- (void)dealloc;
- (PLDupeManager *)init;
- (void)pauseAnalysisWithReason:(NSString *)arg0;
- (void)resumeAnalysisWithReason:(NSString *)arg0;
- (PLPhotoLibrary *)photoLibrary;
- (void)resetDupesAnalysisResetHashes:(char)arg0;
- (void)analyzeDupesWithNormalInserts:(NSMutableSet *)arg0 cloudInserts:(NSMutableSet *)arg1 completionHandler:(id /* block */)arg2;
- (void)persistPublicGlobalUUIDsForAssets:(NSArray *)arg0 completionHandler:(id /* block */)arg1;
- (void)launchDupeAnalysisIfNeeded;
- (void)_updateVisibilityState:(short)arg0 forAsset:(NSObject *)arg1;
- (void)_noteAssetVisibilityDidChange:(NSDictionary *)arg0;
- (id)_duplicateCloudAssetForHash:(id)arg0 orPublicGlobalUUID:(id)arg1;
- (void)_removeCloudAssetFromAnalysis:(id)arg0;
- (char)_prepareCloudAssetsToAnalyzeForManagedObjectContext:(NSObject *)arg0;
- (void)_analyzeDupeForNormalAsset:(NSSet *)arg0;
- (void)_analyzeDupesForRebuild;
- (void)_continueAnalysisForRebuild;
- (short)_computeCloudAssetHashesForManagedObjectContext:(NSObject *)arg0;
- (void)_continueAnalysisForRebuildOrPause;
- (short)_analyzeNormalAssetsForManagedObjectContext:(NSObject *)arg0;
- (short)_computeAssetHashesForManagedObjectContext:(NSObject *)arg0;
- (short)_adjustCloudAssetVisibilityStateForManagedObjectContext:(NSObject *)arg0;
- (void)_performAnalysisTransaction:(NSObject *)arg0 completionHandler:(/* block */ id)arg1;
- (char)_analyzeDupeForCloudAssetsAndHashes:(id)arg0 andPublicGlobalUUIDs:(id)arg1 forManagedObjectContext:(NSObject *)arg2;
- (void)_analyzeDupes;
- (short)_analyzeDupesForNormalInsertsForManagedObjectContext:(NSObject *)arg0;
- (void)_continueAnalysis;
- (short)_analyzeDupesForCloudInsertsForManagedObjectContext:(NSObject *)arg0;
- (void)_resetSoftPauseReasons;

@end
