/* Runtime dump - CPLEngineTransientRepository
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineTransientRepository : CPLEngineStorage <CPLAbstractObject>
{
    unsigned int _popState;
    NSMutableArray * _remainingClassesToBePopped;
    unsigned int _maximumCountOfRecordsInBatches;
}

@property (nonatomic) unsigned int maximumCountOfRecordsInBatches;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) CPLPlatformObject * platformObject;

+ (CPLEngineTransientRepository *)orderedClassesForDelete;
+ (CPLEngineTransientRepository *)orderedClassesForChangesForLargeSync;
+ (CPLEngineTransientRepository *)orderedClassesForChanges;

- (void).cxx_destruct;
- (char)openWithError:(id *)arg0;
- (CPLEngineTransientRepository *)initWithEngineStore:(CPLEngineStore *)arg0 name:(NSString *)arg1;
- (char)resetTransientRepositoryWithError:(id *)arg0;
- (char)prepareForMinglingWithError:(id *)arg0;
- (char)popChangeBatch:(id *)arg0 error:(id *)arg1;
- (id)transientSyncAnchor;
- (char)storeTransientSyncAnchor:(id)arg0 error:(id *)arg1;
- (char)hasRecordWithIdentifier:(NSString *)arg0;
- (unsigned int)countOfAssetChanges;
- (NSString *)_changeWithIdentifier:(NSString *)arg0;
- (char)appendBatch:(id)arg0 alreadyMingled:(char)arg1 error:(id *)arg2;
- (char)_appendBatchToStorage:(id)arg0 alreadyMingled:(char)arg1 error:(id *)arg2;
- (char)_popChangeBatchOfDeletedRecords:(id *)arg0 maximumCount:(unsigned int)arg1 error:(id *)arg2;
- (char)_popChangeBatchOfChangedRecords:(id *)arg0 maximumCount:(unsigned int)arg1 error:(id *)arg2;
- (char)resetMingledRecordsWithError:(id *)arg0;
- (char)deleteMingledRecordsWithError:(id *)arg0;
- (unsigned int)countOfUnmingledRecords;
- (unsigned int)maximumCountOfRecordsInBatches;
- (void)setMaximumCountOfRecordsInBatches:(unsigned int)arg0;

@end
