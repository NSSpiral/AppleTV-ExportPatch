/* Runtime dump - GEOReachability
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOReachability : NSObject <GEOResourceManifestTileGroupObserver>
{
    char _networkReachable;
    unsigned int _errorCount;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (GEOReachability *)sharedReachability;

- (void)dealloc;
- (GEOReachability *)init;
- (void)_resetErrors;
- (char)anyFailures;
- (char)networkAvailable;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;
- (void)reportLoadFailure:(id)arg0;
- (void)reportTileLoadSuccess:(id)arg0;
- (void)_reachabilityChanged:(NSNotification *)arg0;

@end
