/* Runtime dump - WLDPlaybackObserver
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class WLKPlaybackSummary;
@interface WLDPlaybackObserver : NSObject
{
    char _isObserving;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSObject<OS_dispatch_queue> * _lookupQueue;
    WLKPlaybackSummary * _lastSummary;
    id _updateHandler;
}

@property (copy, nonatomic) id updateHandler;

- (void)_nowPlayingInfoDidChangeNotification:(NSNotification *)arg0;
- (void)_playerWillStop:(id)arg0;
- (id)_generateStoppedEventWithSummary:(NSString *)arg0;
- (void)_updateWithInfo:(NSDictionary *)arg0;
- (NSError *)_nowPlayingSummaryWithError:(id *)arg0;
- (char)_isSummary:(CKDPZoneRetrieveResponseZoneSummary *)arg0 signifantChangeFromSummary:(id)arg1;
- (NSObject *)_nowPlayingBundleID;
- (WLDPlaybackObserver *)initWithUpdateHandler:(id /* block */)arg0;
- (id)nowPlayingSummary;
- (char)_nowPlayingAppIsPlaying;
- (void)startObserving;
- (void)setUpdateHandler:(id /* block */)arg0;
- (void)dealloc;
- (void).cxx_destruct;
- (id /* block */)updateHandler;
- (void)stopObserving;

@end
