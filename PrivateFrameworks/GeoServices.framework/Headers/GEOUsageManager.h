/* Runtime dump - GEOUsageManager
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUsageManager : NSObject <PBRequesterDelegate>
{
    GEORequester * _requester;
    GEOUsageCollectionRequest * _request;
    NSLock * _requestLock;
    NSTimer * _updateTimer;
    id _backgroundTaskStart;
    id _backgroundTaskEnd;
    NSMapTable * _requesterToBackgroundTask;
    NSMutableDictionary * _stateData;
    NSMutableDictionary * _stateTimingData;
}

@property (copy, nonatomic) id backgroundTaskStart;
@property (copy, nonatomic) id backgroundTaskEnd;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (GEOUsageManager *)sharedManager;

- (void)dealloc;
- (GEOUsageManager *)init;
- (void)captureUsageDataForTiles:(id)arg0;
- (void)captureUsageDataForRequest:(NSURLRequest *)arg0 service:(int)arg1;
- (void)requesterDidFinish:(NSObject *)arg0;
- (void)requesterDidCancel:(NSObject *)arg0;
- (void)requester:(GEORequester *)arg0 didFailWithError:(char)arg1;
- (void)captureSuggestionsFeedbackCollection:(id)arg0;
- (void)captureRequestsForPlaceDataCache:(NSObject *)arg0 appIdentifier:(NSString *)arg1;
- (NSURL *)_usageURL;
- (void)captureTraits:(NSArray *)arg0 mapItem:(MKMapItem *)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
- (void)captureTraits:(NSArray *)arg0 flyoverAnimationID:(unsigned long long)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
- (void)_updateTimerFired:(id)arg0;
- (void)captureDirectionsFeedbackCollection:(id)arg0;
- (void)_applicationDeactivating;
- (void)_cleanupRequester;
- (void)_cleanupTimer;
- (void)_scheduleUpdateTimer;
- (void)captureUsageDataForRequest:(NSURLRequest *)arg0 service:(int)arg1 requestType:(int)arg2;
- (char)shouldIgnoreCollectionForCountry;
- (void)_prepareRequest;
- (NSObject *)createTileSetStateForType:(int)arg0 newCoverage:(double)arg1 oldCoverage:(double)arg2 seconds:(double)arg3;
- (void)_sendUsageToServer;
- (void)_startBackgroundTaskForRequester:(id)arg0;
- (void)_endBackgroundTaskForRequester:(id)arg0;
- (void)captureMapsLaunchURLScheme:(NSString *)arg0 sourceApplication:(id)arg1;
- (void)captureTransitAppLaunchFeedbackCollection:(id)arg0;
- (void)captureMapsUsageFeedbackCollection:(id)arg0;
- (void)captureStateTimingFeedbackCollection:(id)arg0;
- (void)captureLeaveNowFeedbackCollection:(id)arg0;
- (id)backgroundTaskStart;
- (void)setBackgroundTaskStart:(id)arg0;
- (id)backgroundTaskEnd;
- (void)setBackgroundTaskEnd:(id)arg0;
- (void)captureStateTransition:(NSObject *)arg0 force:(char)arg1;
- (void)clearStateTimingData;
- (void)captureTileStateForLoadCoverage:(double)arg0 oldCoverage:(double)arg1 durationInLastState:(double)arg2;
- (void)captureTileStateForGridCoverage:(double)arg0 oldCoverage:(double)arg1 durationInLastState:(double)arg2;

@end
