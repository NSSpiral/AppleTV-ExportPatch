/* Runtime dump - CPLGetAssetCountsTask
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLGetAssetCountsTask : CPLEngineSyncTask
{
    <CPLEngineTransportGetAssetCountsTask> * _transportTask;
}

- (void)launch;
- (void)cancel;
- (void)resume;
- (void).cxx_destruct;
- (void)pause;
- (NSString *)taskIdentifier;

@end
