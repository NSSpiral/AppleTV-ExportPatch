/* Runtime dump - ATVRadioPlayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol LTAVLeaseAgentAdaptor;

@class BRStateMachine, LTAVLeaseAgent;
@interface ATVRadioPlayer : NSObject <LTAVLeaseAgentAdaptor>
{
    char _resumeActivePlayerPlayback;
    ATVDataItem * _radioDataItem;
    float _progress;
    BRStateMachine * _stateMachine;
    id _completionHandler;
    LTAVLeaseAgent * _leaseAgent;
    AVURLAsset * _asset;
    AVPlayerItem * _playerItem;
    AVPlayer * _player;
    id _playbackObserver;
}

@property (retain) ATVDataItem * radioDataItem;
@property (nonatomic) float progress;
@property (nonatomic) char resumeActivePlayerPlayback;
@property (retain, nonatomic) BRStateMachine * stateMachine;
@property (copy, nonatomic) id completionHandler;
@property (weak, nonatomic) LTAVLeaseAgent * leaseAgent;
@property (retain, nonatomic) AVURLAsset * asset;
@property (retain, nonatomic) AVPlayerItem * playerItem;
@property (retain, nonatomic) AVPlayer * player;
@property (retain, nonatomic) id playbackObserver;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (struct __CFDictionary *)_adData;
- (ATVDataItem *)radioDataItem;
- (char)resumeActivePlayerPlayback;
- (void)setResumeActivePlayerPlayback:(char)arg0;
- (ATVRadioPlayer *)initWithRadioDataItem:(ATVDataItem *)arg0;
- (void)playWithCompletionBlock:(id /* block */)arg0;
- (void)_initializeStateMachine:(NSObject *)arg0;
- (char)_isItemRedownloadable;
- (NSURL *)_playbackURL;
- (void)setPlaybackObserver:(NSObject *)arg0;
- (NSObject *)playbackObserver;
- (void)_playerItemDidPlayToEndTime:(id)arg0;
- (void)_leaseAgentStateMachineStateChanged:(NSNotification *)arg0;
- (id)_callCompletionHandlerFinished:(char)arg0;
- (void)_setCookies;
- (void)_assetTracksDidFinishLoading;
- (char)_isItemAd;
- (void)_removePlaybackObserverIfNeeded;
- (char)_doesPlayerItemHaveSufficientBuffer;
- (NSNumber *)_startPlaying;
- (char)_isPlayerItemReadyToPlay;
- (void)_addPlaybackObserver;
- (NSObject *)_startPlayingIfPlayerHasSufficientBuffer;
- (id)_startAcquiringLease;
- (NSArray *)_startLoadingAssetTracks;
- (NSObject *)_startLoadingPlayerItem;
- (void)_playerItemStatusDidChange;
- (void)_playerItemPlaybackLikelyToKeepUpDidChange;
- (void)_playerItemPlaybackBufferFullDidChange;
- (void)leaseAgent:(LTAVLeaseAgent *)arg0 didAttemptToAcquireLeaseForItem:(ATVDataItem *)arg1 withError:(NSError *)arg2 wasCancelled:(char)arg3;
- (void)leaseAgent:(LTAVLeaseAgent *)arg0 failedToReacquireLeaseWithError:(NSError *)arg1;
- (char)leaseAgent:(LTAVLeaseAgent *)arg0 currentItemIsIdenticalToItem:(ATVDataItem *)arg1;
- (void)setRadioDataItem:(ATVDataItem *)arg0;
- (void)setPlayerItem:(AVPlayerItem *)arg0;
- (AVPlayerItem *)playerItem;
- (void)stop;
- (void)setProgress:(float)arg0;
- (id /* block */)completionHandler;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (float)progress;
- (void).cxx_destruct;
- (AVURLAsset *)asset;
- (void)setCompletionHandler:(id /* block */)arg0;
- (void)setAsset:(AVURLAsset *)arg0;
- (LTAVLeaseAgent *)leaseAgent;
- (void)setLeaseAgent:(LTAVLeaseAgent *)arg0;
- (BRStateMachine *)stateMachine;
- (void)setStateMachine:(BRStateMachine *)arg0;
- (void)_removeObserversForPlayerItem:(NSObject *)arg0;
- (void)_addObserversForPlayerItem:(NSObject *)arg0;
- (void)togglePlayPause;
- (void)setPlayer:(AVPlayer *)arg0;
- (AVPlayer *)player;

@end
