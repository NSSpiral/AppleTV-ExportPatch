/* Runtime dump - GEOExperimentServerLocalProxy
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOExperimentServerLocalProxy : NSObject <GEOResourceManifestTileGroupObserver, GEOExperimentServerProxy>
{
    <GEOExperimentServerProxyDelegate> * _delegate;
    GEOABExperimentResponse * _experimentsInfo;
    NSLock * _experimentsInfoLock;
    NSObject<OS_dispatch_source> * _updateTimer;
    NSLock * _updateTimerLock;
    GEOABExperimentRequest * _currentRequest;
    NSLock * _currentRequestLock;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) <GEOExperimentServerProxyDelegate> * delegate;
@property (readonly, nonatomic) GEOABExperimentResponse * experimentsInfo;

- (void)dealloc;
- (void)setDelegate:(<GEOExperimentServerProxyDelegate> *)arg0;
- (<GEOExperimentServerProxyDelegate> *)delegate;
- (void)forceUpdate;
- (void)_debug_setQuerySubstring:(id)arg0 forExperimentType:(int)arg1 dispatcherRequestType:(int)arg2;
- (GEOABExperimentResponse *)experimentsInfo;
- (char)_removeOldExperimentsInfoIfNecessary;
- (void)_updateIfNecessary;
- (void)_invalidateTileCache:(char)arg0 placesCache:(char)arg1;
- (double)_timeToNextUpdate;
- (void)_scheduleUpdateTimer:(double)arg0;
- (GEOExperimentServerLocalProxy *)initWithDelegate:(<GEOExperimentServerProxyDelegate> *)arg0;
- (void)resourceManifestManager:(NSObject *)arg0 didChangeActiveTileGroup:(NSObject *)arg1 fromOldTileGroup:(NSObject *)arg2;

@end
