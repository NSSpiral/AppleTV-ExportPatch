/* Runtime dump - CPLEngineClientCache
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineClientCache : CPLEngineStorage <CPLAbstractObject>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) CPLPlatformObject * platformObject;

- (char)resetWithError:(id *)arg0;
- (NSObject *)resourceOfType:(unsigned int)arg0 forRecordWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (char)hasRecordWithIdentifier:(NSString *)arg0;
- (NSString *)recordWithIdentifier:(NSString *)arg0;
- (char)addRecord:(NSObject *)arg0 error:(id *)arg1;
- (char)updateRecord:(NSObject *)arg0 error:(id *)arg1;
- (char)deleteRecordWithIdentifier:(NSString *)arg0 error:(id *)arg1;
- (NSString *)relatedIdentifierForRecordWithIdentifier:(NSString *)arg0;
- (NSString *)_relatedIdentifierForRecordWithIdentifier:(NSString *)arg0;
- (NSString *)recordsWithRelatedIdentifier:(NSString *)arg0;
- (id)compactedBatchFromExpandedBatch:(id)arg0;
- (id)localChangeBatchFromCloudBatch:(id)arg0 usingMapping:(id)arg1 withError:(id *)arg2;
- (char)applyBatch:(id)arg0 withError:(id *)arg1;

@end
