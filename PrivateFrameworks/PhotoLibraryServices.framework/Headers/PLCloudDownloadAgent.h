/* Runtime dump - PLCloudDownloadAgent
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudDownloadAgent : PLCloudScenarioProducer
{
    NSObject<OS_dispatch_queue> * _agentQueue;
    id _walkStatus;
    char _waitingForInitialDownloadDone;
    char _initialDownloadDone;
    PLPhotoLibrary * _localLibrary;
    PLCloudPhotoLibraryManager * _remoteLibrary;
}

@property (retain) PLPhotoLibrary * localLibrary;
@property (retain) PLCloudPhotoLibraryManager * remoteLibrary;

- (void)dealloc;
- (PLCloudDownloadAgent *)init;
- (void)activate;
- (unsigned int)batchSize;
- (PLCloudPhotoLibraryManager *)remoteLibrary;
- (PLPhotoLibrary *)localLibrary;
- (int)typeToIndex:(unsigned int)arg0;
- (void)_beginPopulatingResourcesOfType:(unsigned int)arg0 withFetchRequest:(NSURLRequest *)arg1 startingAtOffset:(unsigned int)arg2 then:(id)arg3;
- (void)downloadResources:(NSArray *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)beginPopulatingResourcesOfType:(unsigned int)arg0 withFetchRequest:(NSURLRequest *)arg1 then:(id)arg2;
- (void)cplResourcesForFetchRequest:(NSURLRequest *)arg0 ofType:(unsigned int)arg1 startingAtOffset:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)prefetchLastWeeksFull;
- (void)prefetchLastWeeksOriginals;
- (void)_checkWalkStatusIfNeeded;
- (void)prefetchAllThumbnails;
- (void)systemStarted:(id)arg0;
- (void)metadataChanged:(NSNotification *)arg0;
- (void)appInForeground:(id)arg0;
- (void)metadataStable:(id)arg0;
- (void)setLocalLibrary:(PLPhotoLibrary *)arg0;
- (void)setRemoteLibrary:(PLCloudPhotoLibraryManager *)arg0;
- (void)resetWalkStatus;
- (void)prefetchResources;
- (void)_waitForDownloadDoneIfNeeded;

@end
