/* Runtime dump - MPPlayerPlaybackLeaseController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlayerPlaybackLeaseController : NSObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    char _isAutomaticLeaseRefreshEnabled;
    char _isPlayerEffectivelyPlaying;
    char _isStartingLeaseForPlaybackResumption;
    NSMutableArray * _players;
    unsigned int _preventionState;
    char _shouldStartLeaseForAssets;
    char _shouldStartLeaseForUserAction;
    NSMutableArray * _startLeaseForPlaybackResumptionCompletionHandlers;
    char _usesSubscriptionLease;
}

+ (MPPlayerPlaybackLeaseController *)sharedController;

- (void)_updateUsesSubscriptionLease;
- (void)_subscriptionLeaseDidBeginNotification:(NSNotification *)arg0;
- (void)_subscriptionLeaseDidEndNotification:(NSNotification *)arg0;
- (void)_subscriptionStatusDidChangeNotification:(NSNotification *)arg0;
- (void)_shouldPlaybackRequireSubscriptionLeaseDidChangeNotification:(NSNotification *)arg0;
- (void)getFinalSubscriptionStatusWithCompletionHandler:(id /* block */)arg0;
- (void)_startLeaseIfNeededForPlaybackResumptionWithCompletionHandler:(id /* block */)arg0;
- (void)_playerStateDidChangeNotification:(NSNotification *)arg0;
- (void)_playerItemReadyToPlayNotification:(NSNotification *)arg0;
- (void)_playerItemWillChangeNotification:(NSNotification *)arg0;
- (void)_playerWillReloadWithPlaybackContextNotification:(RadioPlaybackContext *)arg0;
- (void)_updatePlayerEffectivelyPlaying;
- (void)_acquireSubscriptionLeaseForCurrentItemIfNeededWithPlayer:(id)arg0;
- (char)_shouldPausePlaybackReturningWasLeaseTaken:(char *)arg0;
- (char)_pausePlayerForLeaseEnd:(id)arg0;
- (void)_pausePlayersForLeaseEndWithNotification:(char)arg0;
- (void)_startLeaseIfNeededForCurrentPlayerItemsFromUserAction:(char)arg0 withCompletionHandler:(id /* block */)arg1;
- (char)_calculateEffectivelyPlayingForPlayer:(id)arg0;
- (void)startLeaseIfNeededForPlaybackResumptionWithCompletionHandler:(id /* block */)arg0;
- (void)acquireShouldStartLeaseForAssetCreationWithCompletionHandler:(id /* block */)arg0;
- (void)handleLeaseForErrorResolutionWithCompletionHandler:(id /* block */)arg0;
- (void)registerPlayer:(id)arg0;
- (void)dealloc;
- (MPPlayerPlaybackLeaseController *)init;
- (void).cxx_destruct;

@end
