/* Runtime dump - CPLBackgroundDownloadsTask
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLBackgroundDownloadsTask : CPLEngineSyncTask
{
    NSObject<OS_dispatch_queue> * _lock;
    NSMutableArray * _downloadTaskGroups;
    char _shouldStop;
    NSError * _badError;
    char _hasResetQueue;
    unsigned int _successfullyDownloadedResourcesCount;
    unsigned int _failedDownloadedResourcesCount;
    unsigned int _total;
}

- (void)launch;
- (void)cancel;
- (NSString *)description;
- (void)resume;
- (void).cxx_destruct;
- (void)pause;
- (CPLBackgroundDownloadsTask *)initWithEngineLibrary:(CPLEngineLibrary *)arg0;
- (void)taskDidFinishWithError:(NSError *)arg0;
- (void)_finishTaskLocked;
- (void)_enqueueTasksLocked;
- (void)_downloadTask:(NSObject *)arg0 didFinishWithError:(NSError *)arg1;
- (id)_downloadTasksSortedForBatching:(id)arg0;
- (void)_launchNecessaryDownloadTasksWithTransaction:(NSObject *)arg0;
- (unsigned int)_activeDownloadTaskCount;
- (NSString *)taskIdentifier;

@end
