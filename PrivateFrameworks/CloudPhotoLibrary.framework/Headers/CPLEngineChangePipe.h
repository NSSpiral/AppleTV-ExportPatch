/* Runtime dump - CPLEngineChangePipe
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineChangePipe : CPLEngineStorage <CPLAbstractObject>

@property (nonatomic) char locked;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) CPLPlatformObject * platformObject;

- (char)isLocked;
- (void)setLocked:(char)arg0;
- (CPLEngineChangePipe *)initWithEngineStore:(CPLEngineStore *)arg0 name:(NSString *)arg1;
- (char)deleteAllChangeBatchesWithError:(id *)arg0;
- (unsigned int)countOfQueuedBatches;
- (char)appendChangeBatch:(id)arg0 error:(id *)arg1;
- (char)popChangeBatch:(id *)arg0 error:(id *)arg1;
- (char)markChangesWithIdentifier:(NSString *)arg0 withAlterationType:(unsigned int)arg1 error:(id *)arg2;
- (id)nextBatch;
- (char)popNextBatchWithError:(id *)arg0;
- (char)compactChangeBatchesWithError:(id *)arg0;
- (id)allChangeBatches;
- (NSError *)popAllChangeBatchesWithError:(id *)arg0;

@end
