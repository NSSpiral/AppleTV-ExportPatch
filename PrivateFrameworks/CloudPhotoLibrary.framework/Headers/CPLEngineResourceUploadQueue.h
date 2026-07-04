/* Runtime dump - CPLEngineResourceUploadQueue
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineResourceUploadQueue : CPLEngineStorage <CPLAbstractObject>
{
    id _immediateUploads;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) CPLPlatformObject * platformObject;

- (char)openWithError:(id *)arg0;
- (char)resetWithError:(id *)arg0;
- (unsigned int)countOfOriginalImages;
- (unsigned int)countOfOriginalVideos;
- (unsigned int)countOfOriginalOthers;
- (char)markResourcesAsStaleForItemWithIdentifier:(NSString *)arg0 withResources:(NSArray *)arg1 error:(id *)arg2;
- (char)_markResourcesAsStaleForItemWithIdentifier:(NSString *)arg0 withResources:(NSArray *)arg1 includePending:(char)arg2 error:(id *)arg3;
- (unsigned int)availabilityOfResource:(NSObject *)arg0;
- (char)prepareCloudResourceForUpload:(id)arg0 fromLocalResource:(NSObject *)arg1 error:(id *)arg2;
- (char)markResourceAsSuccessfullyUploaded:(id)arg0 uploadURL:(NSURL *)arg1 error:(id *)arg2;
- (char)reenqueueResource:(NSObject *)arg0 uploadURL:(NSURL *)arg1 failedToUploadWithUploadError:(NSError *)arg2 error:(id *)arg3;
- (char)noteMedataWasUploadedForStaleOrNotAvailableResource:(NSObject *)arg0 error:(id *)arg1;
- (NSObject *)_uploadTaskForResource:(NSObject *)arg0 foreground:(char)arg1 withCompletionHandler:(id /* block */)arg2;
- (char)resetDequeuedBackgroundUploadTasksWithError:(id *)arg0;
- (unsigned int)countOfQueuedUploadTasks;
- (char)isResourceInQueue:(NSObject *)arg0;
- (char)shouldUploadResourceWithMetadata:(NSDictionary *)arg0;
- (char)enqueueResourcesForUploadForBatch:(id)arg0 error:(id *)arg1;
- (char)discardResourceForUpload:(id)arg0 error:(id *)arg1;
- (char)enqueueResourceForBackgroundUpload:(id)arg0 error:(id *)arg1;
- (NSObject *)dequeueBackgroundUploadTaskForResourceType:(unsigned int)arg0 foreground:(char)arg1 withCompletionHandler:(id /* block */)arg2;

@end
