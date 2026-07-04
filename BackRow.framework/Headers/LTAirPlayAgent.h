/* Runtime dump - LTAirPlayAgent
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@protocol AirPlayReceiverUIDelegate;
@protocol BRFailedURLHandling;

@class BRMediaPlayer, LTAirPlayPINControl;
@interface LTAirPlayAgent : BRSingleton <AirPlayReceiverUIDelegate, BRFailedURLHandling>
{
    char _audioStarted;
    NSMutableDictionary * _failedURLRequests;
    char _playerStateObserving;
    char _videoPlaybackEnded;
    char _videoStarted;
    char _isAudioPlaybackSession;
    int _cloudAvailabilityNotifyToken;
    char _hasCloudAvailabilityNotifyToken;
    LTAirPlayPINControl * _dialog;
    NSTimer * _dialogTimer;
    char _sessionStartupMetricsAvailable;
    char _videoPlayerFirstItemReady;
    char _videoPlayerWaitingForNextItemState;
    id _currentRequestToken;
    NSNumber * _currentArtworkUID;
    NSMutableDictionary * _sessionPlaybackMetaData;
    NSMutableDictionary * _sessionXmlPlaybackMetaData;
    NSMutableDictionary * _sessionStartupMetrics;
    BRMediaPlayer * _videoPlayer;
    NSDictionary * _videoPlayerPlaybackOptions;
    NSTimer * _videoPlayerWaitingForNextItemTimer;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) id currentRequestToken;
@property (retain, nonatomic) NSNumber * currentArtworkUID;
@property (retain, nonatomic) NSMutableDictionary * sessionPlaybackMetaData;
@property (retain, nonatomic) NSMutableDictionary * sessionXmlPlaybackMetaData;
@property (retain, nonatomic) NSMutableDictionary * sessionStartupMetrics;
@property (nonatomic) char sessionStartupMetricsAvailable;
@property (retain, nonatomic) BRMediaPlayer * videoPlayer;
@property (nonatomic) char videoPlayerFirstItemReady;
@property (nonatomic) char videoPlayerWaitingForNextItemState;
@property (retain, nonatomic) NSDictionary * videoPlayerPlaybackOptions;
@property (retain, nonatomic) NSTimer * videoPlayerWaitingForNextItemTimer;

+ (LTAirPlayAgent *)singleton;
+ (void)setSingleton:(NSObject *)arg0;
+ (NSDictionary *)_playbackOptionsForParameters:(NSDictionary *)arg0 error:(id *)arg1;
+ (NSDictionary *)_offerForParameters:(NSDictionary *)arg0 error:(id *)arg1;
+ (NSDictionary *)_vodka2InfoForParameters:(NSDictionary *)arg0 error:(id *)arg1;
+ (NSDictionary *)_playbackMetadataForParameters:(NSDictionary *)arg0 error:(id *)arg1;
+ (NSDictionary *)_dataItemForParameters:(NSDictionary *)arg0 error:(id *)arg1;

- (void)_internetAvailabilityChanged:(NSNotification *)arg0;
- (void)_playerStateChanged:(NSNotification *)arg0;
- (BRMediaPlayer *)videoPlayer;
- (void)_authorizationAttemptComplete:(id)arg0;
- (void)_airPlaySettingsChanged:(NSNotification *)arg0;
- (void)_updateCloudConnectivityState;
- (NSString *)currentRequestToken;
- (void)setCurrentRequestToken:(NSString *)arg0;
- (NSNumber *)currentArtworkUID;
- (void)setCurrentArtworkUID:(NSNumber *)arg0;
- (NSMutableDictionary *)sessionPlaybackMetaData;
- (void)setSessionPlaybackMetaData:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)sessionXmlPlaybackMetaData;
- (void)setSessionXmlPlaybackMetaData:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)sessionStartupMetrics;
- (void)setSessionStartupMetrics:(NSMutableDictionary *)arg0;
- (char)sessionStartupMetricsAvailable;
- (void)setSessionStartupMetricsAvailable:(char)arg0;
- (void)setVideoPlayer:(BRMediaPlayer *)arg0;
- (char)videoPlayerFirstItemReady;
- (void)setVideoPlayerFirstItemReady:(char)arg0;
- (char)videoPlayerWaitingForNextItemState;
- (void)setVideoPlayerWaitingForNextItemState:(char)arg0;
- (NSDictionary *)videoPlayerPlaybackOptions;
- (void)setVideoPlayerPlaybackOptions:(NSDictionary *)arg0;
- (NSTimer *)videoPlayerWaitingForNextItemTimer;
- (void)setVideoPlayerWaitingForNextItemTimer:(NSTimer *)arg0;
- (NSDictionary *)_timedMetadataFromAVTimedMetadata:(NSData *)arg0;
- (long)_setVideoPosition:(float)arg0;
- (long)_setVideoRate:(float)arg0;
- (void)_updateVideoPlayerMetadata;
- (NSDictionary *)_errorToDictionary:(NSDictionary *)arg0;
- (void)_showPIN:(id)arg0 deviceName:(NSString *)arg1;
- (void)_dismissOnScreenCode:(id)arg0;
- (NSDictionary *)_assetForParameters:(NSDictionary *)arg0 error:(id *)arg1;
- (void)_startVideoPlaybackWithPlayer:(id)arg0 options:(NSDictionary *)arg1;
- (short)_videoPlayerFirstItemRemovedDuringInitialization;
- (void)_videoPlayerWaitingForNextItemTimeout:(id)arg0;
- (long)_allowInterruption:(id *)arg0;
- (void)airplayUIActivity:(char)arg0;
- (void)_updatePlayerStateObserving;
- (void)_updateStartupMetrics:(id)arg0;
- (void)_cueBackgroundAudioPlayback;
- (void)_videoMetadataChanged:(NSNotification *)arg0;
- (void)_videoPlaybackEnded:(id)arg0;
- (void)_videoPlaybackError:(NSError *)arg0;
- (void)_videoContentAcquisitionError:(NSError *)arg0;
- (void)_videoPlaybackTimeSkipped:(id)arg0;
- (void)_videoPlaybackPreviousAction:(NSObject *)arg0;
- (void)_videoPlaybackNextAction:(NSObject *)arg0;
- (void)_playlistItemHitEnd:(id)arg0;
- (void)_videoPlayerItemRemoved:(id)arg0;
- (void)_videoPlayerCurrentAssetChanged:(NSNotification *)arg0;
- (void)_videoPlayerMediaCued:(id)arg0;
- (void)_videoAccessLogChanged:(NSNotification *)arg0;
- (void)_prepareBackgroundPlaybackWithOptions:(NSDictionary *)arg0;
- (char)_isFinancialTransactionInProgress;
- (void)_videoPlayerStateChanged:(NSNotification *)arg0;
- (void)_autoDismissOnScreenCode:(id)arg0;
- (char)handleFailedURLRequest:(NSURLRequest *)arg0;
- (void)dealloc;
- (LTAirPlayAgent *)init;
- (void).cxx_destruct;
- (long)airplayUIUpdateAudioProgress:(double)arg0 duration:(double)arg1;
- (long)airplayUIUpdateAudioMetaData:(NSDictionary *)arg0;
- (long)airplayUIStopAudio:(NSDictionary *)arg0;
- (long)airplayUIStartAudio:(NSDictionary *)arg0 outputParams:(id *)arg1;
- (long)airplayUIStopVideo:(NSDictionary *)arg0;
- (long)airplayUIStartVideo:(NSDictionary *)arg0 outputParams:(id *)arg1;
- (long)airplayUIHideProgress;
- (long)airplayUIShowProgress;
- (long)airplayUIStopPresentation:(NSDictionary *)arg0;
- (long)airplayUIStartPresentation:(NSDictionary *)arg0 outputParams:(id *)arg1;
- (long)airplayUIPerform:(NSString *)arg0 inputParams:(id)arg1 outputParams:(id *)arg2;
- (long)airplayUISetProperty:(NSString *)arg0 qualifier:(TSDGLShaderQualifier *)arg1 value:(NSObject *)arg2;
- (void)airplayUIActivity;
- (NSObject *)airplayUIGetProperty:(NSString *)arg0 qualifier:(TSDGLShaderQualifier *)arg1 error:(int *)arg2;

@end
