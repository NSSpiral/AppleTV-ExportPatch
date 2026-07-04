/* Runtime dump - ATVJSPlayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVInterstitialGroup, ATVJSContext, ATVJSPlayerMoreAssetsSpinnerController, BRMediaPlayer, BRStateMachine;
@interface ATVJSPlayer : NSObject
{
    BRMediaPlayer * _activePlayer;
    unsigned int _playlistID;
    BRStateMachine * _playlistStateMachine;
    ATVJSPlayerMoreAssetsSpinnerController * _moreAssetsSpinner;
    NSArray * _timedMetadataKeys;
    char _shouldObserveTimedMetadata;
    ATVJSContext * context;
    ATVInterstitialGroup * interstitialGroup;
    NSOperationQueue * _timedMetadataQueue;
}

@property (retain, nonatomic) ATVJSContext * context;
@property (retain) ATVInterstitialGroup * interstitialGroup;
@property (retain, nonatomic) NSOperationQueue * timedMetadataQueue;

- (void)_playerStateChanged:(NSNotification *)arg0;
- (void)_playerCurrentAssetChanged:(NSNotification *)arg0;
- (void)_playerWillStop:(id)arg0;
- (void)_playerStartedBuffering:(id)arg0;
- (void)_playerBufferSufficientToPlay:(id)arg0;
- (void)_playerPlaybackError:(NSError *)arg0;
- (void)_playerStallDuringPlayback:(id)arg0;
- (void)_playerQualityOfServiceReport:(id)arg0;
- (void)_playerPlaybackEnded:(id)arg0;
- (void)_playerTransportDisplayChange:(NSDictionary *)arg0;
- (void)_playerControllerWillPresentRelatedPlaybackOptions:(NSDictionary *)arg0;
- (void)_playerAssetHasTimedMetadata:(NSData *)arg0;
- (void)_registerPlaylistHandlers;
- (void)setInterstitialGroup:(ATVInterstitialGroup *)arg0;
- (void)_updateAsset:(NSSet *)arg0;
- (void)_sendNowPlayingNotification:(NSNotification *)arg0 withArguments:(NSDictionary *)arg1;
- (char)_isNotificationForMyMerchant:(id)arg0;
- (NSOperationQueue *)timedMetadataQueue;
- (void)_updateEventGroupsNotification:(NSNotification *)arg0;
- (void)_updateEventGroupsForEventMediaAsset:(NSSet *)arg0;
- (char)_loadAssetsActivity;
- (void)_setupSpinnerActivity;
- (void)setShouldObserveTimedMetadata:(char)arg0;
- (void)setTimedMetatadataKeys:(NSArray *)arg0;
- (void)_changeToAsset:(NSSet *)arg0;
- (void)_stopWithReason:(NSString *)arg0 suggestion:(LSBestAppSuggestion *)arg1;
- (void)_setSubtitleFilterWithLanguages:(id)arg0 andAllowsOffOption:(char)arg1;
- (void)_clearSubtitleFilter;
- (ATVInterstitialGroup *)interstitialGroup;
- (void)setTimedMetadataQueue:(NSOperationQueue *)arg0;
- (void)_play;
- (ATVJSContext *)context;
- (void)setContext:(ATVJSContext *)arg0;
- (void).cxx_destruct;
- (void)_stop;
- (void)tearDown;
- (void)setup;

@end
