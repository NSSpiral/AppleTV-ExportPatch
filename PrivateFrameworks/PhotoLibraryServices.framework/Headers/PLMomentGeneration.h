/* Runtime dump - PLMomentGeneration
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentGeneration : NSObject
{
    NSMutableSet * _pendingInsertsAndUpdates;
    NSMutableDictionary * _pendingDeletes;
    NSObject<OS_dispatch_queue> * _pendingIsolation;
    PLMomentAnalyzer * _pairedAnalyzer;
    PLMomentAnalyzer * _analyzer;
    <PLMomentGenerationDataManagement> * _momentGenerationDataManager;
}

@property (nonatomic) <PLMomentGenerationDataManagement> * momentGenerationDataManager;
@property (nonatomic) PLMomentAnalyzer * analyzer;

+ (NSArray *)_insertMomentsForAssets:(NSArray *)arg0 inManager:(NSObject *)arg1 withAffectedMoments:(id)arg2;
+ (PLMomentGeneration *)_insertMegaMomentListsForMoments:(id)arg0 inMomentDataManager:(NSObject *)arg1;
+ (PLMomentGeneration *)_insertYearMomentListsForMoments:(id)arg0 earliestDate:(NSDate *)arg1 latestDate:(NSDate *)arg2 inMomentDataManager:(NSObject *)arg3;
+ (char)_rebuildAllMomentListsWithDataManager:(TSPDataManager *)arg0 error:(id *)arg1;
+ (void)_updateMoment:(id)arg0 fromCluster:(MPCluster *)arg1 inManager:(NSObject *)arg2;
+ (PLMomentGeneration *)generateMergeCustomMomentUUID;
+ (PLMomentGeneration *)generateSplitCustomMomentUUID;

- (void)dealloc;
- (PLMomentGeneration *)init;
- (PLMomentAnalyzer *)analyzer;
- (void)saveChangesForAssetInsertsAndUpdates:(id)arg0 andDeletes:(id)arg1;
- (void)generateWithIncrementalDataCompletionHandler:(id /* block */)arg0;
- (char)rebuildAllMomentsWithManager:(NSObject *)arg0 error:(id *)arg1;
- (void)setMomentGenerationDataManager:(<PLMomentGenerationDataManagement> *)arg0;
- (void)setAnalyzer:(PLMomentAnalyzer *)arg0;
- (void)generateWithAssetInsertsAndUpdates:(id)arg0 andDeletes:(id)arg1 completionHandler:(id /* block */)arg2;
- (<PLMomentGenerationDataManagement> *)momentGenerationDataManager;
- (void)_appendAssetsToReplayLog:(id)arg0 forBatchUpdate:(char)arg1;
- (NSArray *)_newPublicGlobalUUIDsToAssetsMappingWithAssets:(NSArray *)arg0;
- (char)_isAsset:(NSSet *)arg0 identicalToAssetForMoments:(id)arg1;
- (id)affectedMomentsForAssetDateCreated:(id)arg0 inManager:(NSObject *)arg1;
- (NSArray *)_insertMomentsForAssets:(NSArray *)arg0 inManager:(NSObject *)arg1 withAffectedMoments:(id)arg2;
- (id)_insertMegaMomentListsForMoments:(id)arg0 inMomentDataManager:(NSObject *)arg1;
- (id)_insertYearMomentListsForMoments:(id)arg0 earliestDate:(NSDate *)arg1 latestDate:(NSDate *)arg2 inMomentDataManager:(NSObject *)arg3;
- (char)_deleteAllMomentDataInManager:(NSObject *)arg0 incremental:(char)arg1 error:(id *)arg2;
- (void)_clearReplayLog;
- (NSNumber *)_rangesForAssetsCount:(unsigned int)arg0 withOptions:(unsigned long long)arg1;
- (char)_rebuildAllMomentsInManager:(NSObject *)arg0 shouldAnalyze:(char)arg1 error:(id *)arg2;
- (NSArray *)_logEntryForAssets:(NSArray *)arg0 isBatchUpdate:(char)arg1;
- (NSSet *)_detailsForAsset:(NSSet *)arg0 simpleOnly:(char)arg1;
- (char)_writeDetails:(id)arg0 toFilepath:(id)arg1 withDefaultFilename:(NSString *)arg2;
- (NSObject *)_nameForMomentGenerationType:(short)arg0;
- (id)_detailsForMoment:(id)arg0;
- (void)rebuildAllMomentsWithOptions:(NSDictionary *)arg0 completionHandler:(id /* block */)arg1;
- (void)rebuildAllMomentLists:(id)arg0;
- (NSString *)allAssetMetadataWriteToFile:(NSString *)arg0;
- (NSString *)allMomentsMetadataWriteToFile:(NSString *)arg0;
- (void)clearUserInfluencedMoments;

@end
