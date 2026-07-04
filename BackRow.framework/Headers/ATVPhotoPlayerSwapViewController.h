/* Runtime dump - ATVPhotoPlayerSwapViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRResponder;

@class ATVPhotoPlayerSwapView, ATVPhotoSwapView, BREvent, BRMediaPlayer, BRMediaPlayerEventHandler, BRTransportControl;
@interface ATVPhotoPlayerSwapViewController : NSObject <BRResponder>
{
    char _transportEnabled;
    ATVPhotoSwapView * _swapView;
    <BRMediaAsset> * _mediaAsset;
    BRMediaPlayer * _player;
    BRMediaPlayerEventHandler * _playerEventHandler;
    BRTransportControl * _transportControl;
    ATVPhotoPlayerSwapView * _playerSwapView;
    NSTimer * _beginPlaybackTimer;
    NSTimer * _spinnerTimer;
}

@property (retain, nonatomic) ATVPhotoSwapView * swapView;
@property (retain, nonatomic) <BRMediaAsset> * mediaAsset;
@property (nonatomic) char transportEnabled;
@property (retain, nonatomic) BRMediaPlayer * player;
@property (retain, nonatomic) BRMediaPlayerEventHandler * playerEventHandler;
@property (retain, nonatomic) BRTransportControl * transportControl;
@property (retain, nonatomic) ATVPhotoPlayerSwapView * playerSwapView;
@property (weak, nonatomic) NSTimer * beginPlaybackTimer;
@property (weak, nonatomic) NSTimer * spinnerTimer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)brEventAction:(BREvent *)arg0;
- (char)brKeyEvent:(BREvent *)arg0;
- (void)_playerStateChanged:(NSNotification *)arg0;
- (NSTimer *)spinnerTimer;
- (void)setSpinnerTimer:(NSTimer *)arg0;
- (void)_spinnerTimerHandler:(id /* block */)arg0;
- (void)_playerMediaCued:(id)arg0;
- (void)_playerProgressChanged:(NSNotification *)arg0;
- (void)_showSpinner:(char)arg0;
- (<BRMediaAsset> *)mediaAsset;
- (void)setTransportEnabled:(char)arg0;
- (void)switchToMediaAsset:(NSSet *)arg0 swapView:(ATVPhotoSwapView *)arg1;
- (void)setSwapView:(ATVPhotoSwapView *)arg0;
- (void)setMediaAsset:(<BRMediaAsset> *)arg0;
- (void)_showError;
- (void)_cueMedia;
- (ATVPhotoPlayerSwapView *)playerSwapView;
- (NSObject *)_imageControlForSwapView:(NSObject *)arg0;
- (struct ?)_shadowWidthForSwapView:(SEL)arg0;
- (BRTransportControl *)transportControl;
- (void)_showDelayedSpinner;
- (char)_isPlayerSeeking;
- (void)setPlayerSwapView:(ATVPhotoPlayerSwapView *)arg0;
- (void)setPlayerEventHandler:(BRMediaPlayerEventHandler *)arg0;
- (void)setTransportControl:(BRTransportControl *)arg0;
- (void)_beginDelayedPlayback;
- (char)transportEnabled;
- (NSTimer *)beginPlaybackTimer;
- (BRMediaPlayerEventHandler *)playerEventHandler;
- (void)_playerDidStartLoading;
- (void)_playerDidTogglePlaying;
- (char)_isPlayerReadyToBeSwappedBack;
- (void)_playerMediaCuedError:(NSError *)arg0;
- (ATVPhotoSwapView *)swapView;
- (void)_beginPlaybackTimerHandler:(id /* block */)arg0;
- (void)setBeginPlaybackTimer:(NSTimer *)arg0;
- (void)dealloc;
- (void)stop;
- (void).cxx_destruct;
- (void)_beginPlayback;
- (void)_teardown;
- (void)setPlayer:(BRMediaPlayer *)arg0;
- (BRMediaPlayer *)player;

@end
