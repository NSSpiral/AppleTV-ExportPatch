/* Runtime dump - PLCloudPruneAgent
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudPruneAgent : PLCloudScenarioProducer
{
    long _lastPruneRequest;
    NSObject<OS_dispatch_queue> * _agentQueue;
    id _walkStatus;
    PLPhotoLibrary * _localLibrary;
    PLCloudPhotoLibraryManager * _remoteLibrary;
}

@property (retain) PLPhotoLibrary * localLibrary;
@property (retain) PLCloudPhotoLibraryManager * remoteLibrary;

- (void)dealloc;
- (PLCloudPruneAgent *)init;
- (void)activate;
- (unsigned int)batchSize;
- (PLCloudPhotoLibraryManager *)remoteLibrary;
- (PLPhotoLibrary *)localLibrary;
- (int)typeToIndex:(unsigned int)arg0;
- (void)cplResourcesForFetchRequest:(NSURLRequest *)arg0 ofType:(unsigned int)arg1 startingAtOffset:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)systemStarted:(id)arg0;
- (void)appInForeground:(id)arg0;
- (void)setLocalLibrary:(PLPhotoLibrary *)arg0;
- (void)setRemoteLibrary:(PLCloudPhotoLibraryManager *)arg0;
- (void)resetWalkStatus;
- (char)spaceAvailable:(long long *)arg0 totalSpace:(long long *)arg1;
- (char)pruningEnabled;
- (void)_beginPruningResourcesOfType:(unsigned int)arg0 withFetchRequest:(NSURLRequest *)arg1 startingAtOffset:(unsigned int)arg2 then:(id)arg3;
- (void)pruneResources:(NSArray *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)beginPruningResourcesOfType:(unsigned int)arg0 withFetchRequest:(NSURLRequest *)arg1 then:(id)arg2;
- (void)pruneOlderMediums;
- (void)pruneResourcesOfType:(unsigned int)arg0 createdBeforeDate:(NSDate *)arg1 then:(id)arg2;
- (void)pruneOlderOriginals;
- (void)pruneResourcesOfType:(unsigned int)arg0 then:(id)arg1;
- (void)standardPruningKick:(id)arg0;
- (void)settingsChanged:(NSNotification *)arg0;
- (void)cacheDeleteRequestReceived:(id)arg0;
- (void)pruneResources;
- (void)emergencyPrune;

@end
