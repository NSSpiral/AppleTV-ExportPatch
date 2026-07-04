/* Runtime dump - CPLEngineResourceDownloadQueue
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineResourceDownloadQueue : CPLEngineStorage <CPLAbstractObject>
{
    NSObject<OS_dispatch_queue> * _downloadQueue;
    NSMutableArray * _highPriorityTasksQueue;
    NSMutableArray * _highPriorityActiveTasks;
    NSMutableArray * _highPriorityActiveTaskGroups;
    NSMutableArray * _lowPriorityTasksQueue;
    NSMutableArray * _lowPriorityActiveTasks;
    NSMutableArray * _lowPriorityActiveTaskGroups;
    NSMutableArray * _backgroundActiveTasks;
    unsigned int _totalClientRequests;
    unsigned int _totalClientRequestErrors;
    unsigned int _totalPutInBackground;
    char _shouldRequestABackgroundDownloadSyncPhase;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) CPLPlatformObject * platformObject;

- (void).cxx_destruct;
- (CPLEngineResourceDownloadQueue *)initWithEngineStore:(CPLEngineStore *)arg0 name:(NSString *)arg1;
- (char)resetWithError:(id *)arg0;
- (char)removeAllBackgroundDownloadTasksForItemWithIdentifier:(NSString *)arg0 error:(id *)arg1;
- (id)_failedTaskWithCompletionHandler:(id /* block */)arg0 error:(/* block */ id)arg1;
- (NSObject *)_downloadTaskForLocalResource:(NSObject *)arg0 clientBundleID:(NSString *)arg1 highPriority:(char)arg2 background:(char)arg3 backgroundTaskIdentifier:(unsigned int)arg4 didStartHandler:(id /* block */)arg5 progressHandler:(/* block */ id)arg6 completionHandler:(id /* block */)arg7;
- (void)_downloadTaskDidFail:(id)arg0 withError:(NSError *)arg1 completionHandler:(id /* block */)arg2;
- (void)_downloadTaskDidSucceed:(id)arg0 completionHandler:(id /* block */)arg1;
- (NSObject *)_resourceStorageCopyTaskForResource:(NSObject *)arg0 clientBundleID:(NSString *)arg1 didStartHandler:(id /* block */)arg2 progressHandler:(/* block */ id)arg3 completionHandler:(id /* block */)arg4;
- (NSObject *)_realDownloadTaskForCloudResource:(NSObject *)arg0 clientBundleID:(NSString *)arg1 didStartHandler:(id /* block */)arg2 progressHandler:(/* block */ id)arg3 completionHandler:(id /* block */)arg4;
- (char)enqueueBackgroundDownloadTaskForResource:(NSObject *)arg0 taskIdentifier:(unsigned int)arg1 error:(id *)arg2;
- (id)dequeueBackgroundDownloadTasks:(unsigned int)arg0 forResourceType:(unsigned int)arg1 eachWithCompletionHandler:(id /* block */)arg2;
- (char)dequeueNextBackgroundDownloadTasks:(unsigned int)arg0 resourceType:(unsigned int)arg1 localResources:(id *)arg2 taskIdentifiers:(id *)arg3 error:(id *)arg4;
- (char)removeBackgroundDownloadTaskForResource:(NSObject *)arg0 taskIdentifier:(unsigned int)arg1 error:(id *)arg2;
- (void)_enqueueDownloadTasks:(id)arg0;
- (void)_enqueueDownloadTask:(NSObject *)arg0;
- (char)_cancelDownloadTask:(NSObject *)arg0;
- (NSURLSessionTask *)_finishDownloadTask:(NSObject *)arg0 inError:(NSError *)arg1;
- (void)_reallyDispatchDownloadTasks:(id)arg0 lowPriorityTaskGroups:(id)arg1 highPriorityTaskGroups:(id)arg2;
- (id)_transport:(HMDIDSMessageTransport *)arg0 setupTransportTaskIfNeededForTask:(NSObject *)arg1;
- (unsigned int)_availableSlotsForDownloadTaskGroupsOfHighPriority:(char)arg0;
- (char)_deferOneLowPriorityActiveTaskGroup;
- (void)_dequeueTasks:(id *)arg0 taskGroups:(id *)arg1 maxTaskGroupCount:(unsigned int)arg2 ofHighPriority:(char)arg3;
- (char)_hasActiveForegroundTasks;
- (void)_addTask:(NSObject *)arg0 toPrioritizedQueue:(NSObject *)arg1;
- (void)_processQueuedDownloadTasks;
- (char)markBackgroundDownloadTaskForResourceAsSuceeded:(id)arg0 taskIdentifier:(unsigned int)arg1 error:(id *)arg2;
- (char)reenqueueBackgroundDownloadTaskForResource:(NSObject *)arg0 taskIdentifier:(unsigned int)arg1 bumpRetryCount:(char)arg2 didDiscard:(char *)arg3 error:(id *)arg4;
- (char)dequeueNextBackgroundDownloadTask:(id *)arg0 resourceType:(unsigned int)arg1 taskIdentifier:(unsigned int *)arg2 error:(id *)arg3;
- (char)resetDequeuedBackgroundDownloadTasksWithError:(id *)arg0;
- (NSArray *)enumeratorForDownloadedResources;
- (unsigned int)countOfQueuedDownloadTasks;
- (NSObject *)downloadTaskForLocalResource:(NSObject *)arg0 clientBundleID:(NSString *)arg1 highPriority:(char)arg2 didStartHandler:(id /* block */)arg3 progressHandler:(/* block */ id)arg4 completionHandler:(id /* block */)arg5;
- (NSObject *)dequeueBackgroundDownloadTaskForResourceType:(unsigned int)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)launchDownloadTasks:(id)arg0;
- (void)_reallyDispatchDownloadTask:(NSObject *)arg0;

@end
