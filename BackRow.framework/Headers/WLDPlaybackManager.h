/* Runtime dump - WLDPlaybackManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class WLDPlaybackObserver, WLDRateLimiter, WLKCache, WLKPlaybackSummary;
@interface WLDPlaybackManager : NSObject
{
    <WLDPlaybackReporterProtocol> * _reporter;
    WLDPlaybackObserver * _observer;
    NSOperationQueue * _queue;
    char _isPrompting;
    WLDRateLimiter * _rateLimiter;
    WLKCache * _recentSummaries;
    WLKPlaybackSummary * _lastSummary;
}

@property (retain) WLKPlaybackSummary * lastSummary;

+ (WLDPlaybackManager *)sharedManager;

- (void)setLastSummary:(WLKPlaybackSummary *)arg0;
- (WLKPlaybackSummary *)lastSummary;
- (void)_enqueuePendingReports;
- (void)_handlePlaybackSummary:(id)arg0;
- (void)_enqueuePlaybackSummary:(id)arg0 serialize:(char)arg1 retry:(char)arg2;
- (char)_validateEnvironment;
- (char)_serialize:(id)arg0;
- (<WLDPlaybackReporterProtocol> *)_reporter;
- (void)_catalogSummary:(id)arg0;
- (void)_cleanupSummary:(id)arg0;
- (void)_scanForPendingReports;
- (id)_queueDir;
- (id)_queuePathForSummary:(id)arg0;
- (NSObject *)reportedSummaryForID:(NSObject *)arg0;
- (void)dealloc;
- (WLDPlaybackManager *)init;
- (WLDPlaybackObserver *)observer;
- (void).cxx_destruct;
- (NSOperationQueue *)queue;

@end
