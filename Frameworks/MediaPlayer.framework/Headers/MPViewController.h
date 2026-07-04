/* Runtime dump - MPViewController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPViewController : UIViewController <MPControllerProtocol, MPAVControllerNode>
{
    id _delegate;
    int _interfaceOrientation;
    MPAVItem * _item;
    MPAVController * _player;
    MPViewController * _pushedViewController;
    MPTransitionController * _pushedTransitionController;
    id _popViewControllerHandler;
    id _appearing;
    id _observesApplicationSuspendResumeEventsOnly;
    id _showOverlayWhileAppearingDisabled;
    char _registeredForPlayerNotifications;
    int _playerLockedCount;
    char _idleTimerDisabled;
}

@property (nonatomic) char registeredForPlayerNotifications;
@property (copy, nonatomic) id popViewControllerHandler;
@property (nonatomic) char observesApplicationSuspendResumeEventsOnly;
@property (nonatomic) char idleTimerDisabled;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) MPAVItem * item;
@property (nonatomic) int orientation;
@property (retain, nonatomic) MPAVController * player;
@property (readonly, retain, nonatomic) UIView * view;

- (void)clearWeakReferencesToObject:(NSObject *)arg0;
- (void)endIgnoringChangeTypes:(unsigned int)arg0;
- (void)beginIgnoringChangeTypes:(unsigned int)arg0;
- (void)willChangeToInterfaceOrientation:(int)arg0;
- (void)setOrientation:(int)arg0 animate:(char)arg1;
- (void)didChangeToInterfaceOrientation:(int)arg0;
- (void)noteIgnoredChangeTypes:(unsigned int)arg0;
- (id /* block */)popViewControllerHandler;
- (void)registerForPlayerNotifications;
- (void)unregisterForPlayerNotifications;
- (void)pushViewController:(BRController *)arg0 withTransition:(NSObject *)arg1;
- (void)setObservesApplicationSuspendResumeEventsOnly:(char)arg0;
- (void)setPopViewControllerHandler:(id /* block */)arg0;
- (void)stopTicking;
- (void)startTicking;
- (void)applicationDidSuspendEventsOnly;
- (void)applicationDidResumeEventsOnly;
- (void)applicationResumed;
- (void)_pushTransitionEnded:(id)arg0;
- (void)_popTransitionEnded:(id)arg0;
- (void)lockPlayer;
- (void)unlockPlayer;
- (void)setRegisteredForPlayerNotifications:(char)arg0;
- (void)incrementAggregateStatisticsDisplayCount;
- (char)canDisplayItem:(NSObject *)arg0 withInterfaceOrientation:(int)arg1;
- (NSObject *)copyOverlayViewForTransitionToItem:(NSObject *)arg0;
- (void)beginTransitionOverlayHidding;
- (void)endTransitionOverlayHidingWithTransferedOverlayView:(NSObject *)arg0;
- (int)displayableInterfaceOrientationForInterfaceOrientation:(int)arg0;
- (char)isAppearing;
- (char)observesApplicationSuspendResumeEventsOnly;
- (void)setAppearing:(char)arg0;
- (char)registeredForPlayerNotifications;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (MPViewController *)init;
- (NSObject *)delegate;
- (id)popViewControllerAnimated:(char)arg0;
- (MPAVItem *)item;
- (void)setIdleTimerDisabled:(char)arg0;
- (int)orientation;
- (void)setView:(UIView *)arg0;
- (void)addChildViewController:(BRController *)arg0;
- (void)viewWillAppear:(char)arg0;
- (char)_canReloadView;
- (void)viewDidAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void)removeChildViewController:(BRController *)arg0;
- (void)setItem:(MPAVItem *)arg0;
- (void)setOrientation:(int)arg0;
- (void).cxx_destruct;
- (char)idleTimerDisabled;
- (void)setPlayer:(MPAVController *)arg0;
- (MPAVController *)player;

@end
