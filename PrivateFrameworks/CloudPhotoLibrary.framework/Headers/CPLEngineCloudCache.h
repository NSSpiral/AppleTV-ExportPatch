/* Runtime dump - CPLEngineCloudCache
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineCloudCache : CPLEngineStorage <CPLAbstractObject>

@property (readonly) char hasDoneAFirstSynchronization;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) CPLPlatformObject * platformObject;

- (char)resetWithError:(id *)arg0;
- (char)discardStagedChangesWithError:(id *)arg0;
- (char)resetSyncAnchorWithError:(id *)arg0;
- (id)cloudChangeBatchFromBatch:(id)arg0 usingMapping:(id)arg1 isFinal:(char)arg2 withError:(id *)arg3;
- (char)applyBatch:(id)arg0 isFinal:(char)arg1 withError:(id *)arg2;
- (char)setSyncAnchor:(NSString *)arg0 error:(id *)arg1;
- (char)commitStagedChangesWithError:(id *)arg0;
- (NSString *)recordWithIdentifier:(NSString *)arg0 isFinal:(char)arg1;
- (char)updateRecord:(NSObject *)arg0 isFinal:(char)arg1 error:(id *)arg2;
- (NSObject *)resourceOfType:(unsigned int)arg0 forRecordWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (char)hasRecordWithIdentifier:(NSString *)arg0;
- (char)addRecord:(NSObject *)arg0 isFinal:(char)arg1 error:(id *)arg2;
- (char)deleteRecordWithIdentifier:(NSString *)arg0 isFinal:(char)arg1 error:(id *)arg2;
- (char)remapAllRecordsWithPreviousIdentifier:(NSString *)arg0 newIdentifier:(NSString *)arg1 error:(id *)arg2;
- (char)hasDoneAFirstSynchronization;
- (char)_remapRecord:(NSObject *)arg0 inBatch:(PLBBPendingBulletinsBatch *)arg1 error:(id *)arg2;
- (NSString *)recordsWithRelatedIdentifier:(NSString *)arg0 isFinal:(char)arg1;
- (NSObject *)recordsOfClass:(Class)arg0 isFinal:(char)arg1;
- (void)getCommittedRecord:(id *)arg0 stagedRecord:(id *)arg1 forIdentifier:(NSString *)arg2;
- (NSString *)syncAnchor;

@end
