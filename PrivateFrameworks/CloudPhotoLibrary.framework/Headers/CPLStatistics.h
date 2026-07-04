/* Runtime dump - CPLStatistics
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLStatistics : NSObject <CPLEngineComponent>
{
    NSURL * _logfileURL;
    struct ? _currentSnapshot;
    long _lastServedAggregationWindow;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSObject<OS_dispatch_queue> * _persistanceQueue;
    char _closed;
    char _statisticsEnabled;
}

@property char statisticsEnabled;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)componentName;
- (void).cxx_destruct;
- (void)openWithCompletionHandler:(id /* block */)arg0;
- (void)closeAndDeactivate:(char)arg0 completionHandler:(id /* block */)arg1;
- (CPLStatistics *)initWithEngineLibrary:(CPLEngineLibrary *)arg0;
- (id)attachToDownloadStartHandler:(SEL)arg0 forResource:(NSObject *)arg1;
- (id)attachToDownloadProgressHandler:(SEL)arg0 forResource:(NSObject *)arg1;
- (id)attachToDownloadCompletionHandler:(SEL)arg0 forResource:(NSObject *)arg1;
- (void)recordSyncErrorForState:(unsigned int)arg0;
- (void)markAggregationWindowAsDirtyNow:(char)arg0;
- (void)recordDownloadingResource:(NSObject *)arg0;
- (void)recordDownloadingResource:(NSObject *)arg0 progress:(float)arg1;
- (void)recordDownloadedResource:(NSObject *)arg0 withPotentialError:(NSError *)arg1;
- (void)recordUploadedResource:(NSObject *)arg0 withPotentialError:(NSError *)arg1;
- (NSDate *)statisticsSnapshotSinceDate:(NSDate *)arg0;
- (id)attachToUploadRecordSaveHandler:(SEL)arg0;
- (void)recordUploadedBatchWithError:(NSError *)arg0;
- (void)recordDownloadedBatchWithError:(NSError *)arg0;
- (void)recordUploadingResource:(NSObject *)arg0;
- (void)recordUploadingResource:(NSObject *)arg0 progress:(float)arg1;
- (char)statisticsEnabled;
- (void)setStatisticsEnabled:(char)arg0;

@end
