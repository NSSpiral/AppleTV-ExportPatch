/* Runtime dump - PLCloudPhotoLibraryBatchManager
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudPhotoLibraryBatchManager : NSObject
{
    NSMutableArray * _batches;
    PLCloudPhotoLibraryBatchContainer * _currentBatch;
    char _wasDrained;
    NSMutableSet * _masterHistory;
    unsigned long long _resourceBudget;
}

- (void)dealloc;
- (PLCloudPhotoLibraryBatchManager *)init;
- (NSString *)description;
- (void)reset;
- (void)addRecord:(NSObject *)arg0;
- (int)currentBatchCount;
- (char)isAboveMaximumResourceBudget;
- (void)addRecord:(NSObject *)arg0 ignoreBatchSize:(char)arg1;
- (id)drainBatches;

@end
