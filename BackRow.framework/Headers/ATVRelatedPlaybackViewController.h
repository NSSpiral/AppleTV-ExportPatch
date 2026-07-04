/* Runtime dump - ATVRelatedPlaybackViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVRelatedPlaybackViewDelegate;
@protocol BRAsynchronousControllerViewLoading;

@class ATVRelatedPlaybackView, BREvent, BRKeyValueObservingRegistry, BRMediaPlayer;
@interface ATVRelatedPlaybackViewController : NSObject <ATVRelatedPlaybackViewDelegate, BRAsynchronousControllerViewLoading>
{
    BRMediaPlayer * _player;
    int _viewAvailability;
    <ATVRelatedPlaybackViewControllerDelegate> * _delegate;
    ATVRelatedPlaybackView * _view;
    BRKeyValueObservingRegistry * _kvoRegistry;
    ATVStateMachine * _stateMachine;
    NSTimer * _overrunCountdownTimer;
    double _remainingPlaybackTime;
    double _remainingOverrunTime;
}

@property (readonly, retain, nonatomic) BRMediaPlayer * player;
@property (nonatomic) int viewAvailability;
@property (weak, nonatomic) <ATVRelatedPlaybackViewControllerDelegate> * delegate;
@property (nonatomic) double remainingPlaybackTime;
@property (retain, nonatomic) ATVRelatedPlaybackView * view;
@property (retain, nonatomic) BRKeyValueObservingRegistry * kvoRegistry;
@property (retain, nonatomic) ATVStateMachine * stateMachine;
@property (retain, nonatomic) NSTimer * overrunCountdownTimer;
@property (nonatomic) double remainingOverrunTime;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)_playerAssetChanged:(NSNotification *)arg0;
- (void)_playerProgressChanged:(NSNotification *)arg0;
- (int)viewAvailability;
- (void)setViewAvailability:(int)arg0;
- (BRKeyValueObservingRegistry *)kvoRegistry;
- (void)_didPrepareRelatedPlaybackWithView:(ATVRelatedPlaybackView *)arg0;
- (double)remainingPlaybackTime;
- (void)_cancelPreparation;
- (void)_presentationDidBegin;
- (void)_remainingPlaybackTimeDidChange;
- (void)_configureStateMachine;
- (double)_remainingPlayerTime;
- (double)remainingOverrunTime;
- (void)setRemainingOverrunTime:(double)arg0;
- (void)setOverrunCountdownTimer:(NSTimer *)arg0;
- (NSTimer *)overrunCountdownTimer;
- (double)_remainingUpNextDuration;
- (void)setRemainingPlaybackTime:(double)arg0;
- (void)_presentationDidEnd;
- (void)_cleanupView;
- (id)_endRelatedPlayback:(char)arg0;
- (void)_decrementDurationCountdown:(id)arg0;
- (void)relatedPlaybackView:(ATVRelatedPlaybackView *)arg0 didReceiveEvent:(BREvent *)arg1 wasHandled:(char *)arg2;
- (void)prepareRelatedPlayback;
- (NSObject *)viewWithPlayerView:(BRMediaPlayer *)arg0;
- (void)setKVORegistry:(id)arg0;
- (ATVRelatedPlaybackViewController *)initWithPlayer:(BRMediaPlayer *)arg0;
- (void)dealloc;
- (void)setDelegate:(<ATVRelatedPlaybackViewControllerDelegate> *)arg0;
- (<ATVRelatedPlaybackViewControllerDelegate> *)delegate;
- (ATVRelatedPlaybackView *)view;
- (void)setView:(ATVRelatedPlaybackView *)arg0;
- (void).cxx_destruct;
- (ATVStateMachine *)stateMachine;
- (void)setStateMachine:(ATVStateMachine *)arg0;
- (BRMediaPlayer *)player;

@end
