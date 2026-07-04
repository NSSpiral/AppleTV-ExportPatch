/* Runtime dump - PLCloudPhotoLibraryBatchContainer
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudPhotoLibraryBatchContainer : NSObject
{
    char _wasSplit;
    char _reachedMinSplit;
    CPLChangeBatch * _batch;
    unsigned int _retryCount;
}

@property (retain, nonatomic) CPLChangeBatch * batch;
@property (nonatomic) unsigned int retryCount;
@property (nonatomic) char wasSplit;
@property (nonatomic) char reachedMinSplit;

- (void)dealloc;
- (unsigned int)count;
- (PLCloudPhotoLibraryBatchContainer *)init;
- (NSString *)description;
- (void)addRecord:(NSObject *)arg0;
- (unsigned int)retryCount;
- (void)validateResourcesAvailability;
- (CPLChangeBatch *)batch;
- (char)wasSplit;
- (NSError *)batchesSplitForError;
- (char)reachedMinSplit;
- (void)incrementRetryCount;
- (void)setReachedMinSplit:(char)arg0;
- (void)setRetryCount:(unsigned int)arg0;
- (void)setWasSplit:(char)arg0;
- (NSObject *)lastAddedRecord;
- (void)setBatch:(CPLChangeBatch *)arg0;

@end
