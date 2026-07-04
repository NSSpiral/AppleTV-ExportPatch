/* Runtime dump - CPLRemoveCloudLibraryTask
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLRemoveCloudLibraryTask : CPLEngineSyncEmergencyTask
{
    <CPLEngineTransportRemoveLibraryTask> * _removeLibraryTask;
}

+ (char)shouldCoalesceTasks;
+ (NSString *)taskIdentifier;

- (void)launch;
- (void)cancel;
- (unsigned int)priority;
- (void).cxx_destruct;
- (char)shouldStopSyncSession;

@end
