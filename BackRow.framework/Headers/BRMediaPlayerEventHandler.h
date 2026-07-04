/* Runtime dump - BRMediaPlayerEventHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRResponder;

@class BREvent, BRMediaPlayer;
@interface BRMediaPlayerEventHandler : NSObject <BRResponder>
{
    BRMediaPlayer * _player;
    char _waitingForUp;
    char _inChapterSkipMode;
    double _virtualChapterMark;
    NSTimer * _chapterSelectionModeTimer;
    int _preShuttleState;
    long _shuttleSpeed;
    int _shuttleDirection;
    char _inShuttleMode;
    char _readyToInitiateShuttle;
    NSTimer * _shuttleChapterSkipTimer;
    struct CGPoint _initialTouchPosition;
    struct CGPoint _lastTouchPosition;
    struct CGPoint _lastTouchDelta;
    double _shuttleFinishedTime;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (CALayer *)handlerWithPlayer:(BRMediaPlayer *)arg0;

- (char)brEventAction:(BREvent *)arg0;
- (char)brKeyEvent:(BREvent *)arg0;
- (void)_playerAssetChanged:(NSNotification *)arg0;
- (void)_playerStateChanged:(NSNotification *)arg0;
- (char)_handleTouchEvent:(NSObject *)arg0;
- (char)performPreviousThingAction:(NSObject *)arg0;
- (char)_handleEventWhilePaused:(id)arg0;
- (char)_handleEventWhileLoading:(id)arg0;
- (char)_handleEventWhilePlaying:(id)arg0;
- (char)_handleEventWhileFF1:(id)arg0;
- (char)_handleEventWhileFF2:(id)arg0;
- (char)_handleEventWhileFF3:(id)arg0;
- (char)_handleEventWhileREW1:(id)arg0;
- (char)_handleEventWhileREW2:(id)arg0;
- (char)_handleEventWhileREW3:(id)arg0;
- (char)_handleEventWhileSlowForward1:(id)arg0;
- (char)_handleEventWhileSlowForward2:(id)arg0;
- (char)_handleEventWhileSlowForward3:(id)arg0;
- (char)_handleEventWhileSlowRewind1:(id)arg0;
- (char)_handleEventWhileSlowRewind2:(id)arg0;
- (char)_handleEventWhileSlowRewind3:(id)arg0;
- (char)_performPreviousThingButtonAction:(NSObject *)arg0;
- (void)_setInChapterSkipMode:(char)arg0;
- (void)_touchRepeatCancel;
- (char)showingChapterMarks;
- (char)_performSkipForwardAction:(NSObject *)arg0;
- (char)_performSkipBackwardAction:(NSObject *)arg0;
- (char)_changePlayerStateTo:(int)arg0 onButtonDown:(id)arg1;
- (char)_performNextThingButtonAction:(NSObject *)arg0;
- (char)_chapterSkipSupported;
- (char)_changePlayerStateTo:(int)arg0;
- (char)_handleForwardEvent:(NSObject *)arg0;
- (char)_handleRewindEvent:(NSObject *)arg0;
- (char)_handleEventWhileChapterSelecting:(id)arg0;
- (char)_handleRightEvent:(NSObject *)arg0;
- (char)_handleLeftEvent:(NSObject *)arg0;
- (char)_handleTouchSwipeEvent:(NSObject *)arg0;
- (char)_handleTouchMultiSwipeRightEvent:(NSObject *)arg0;
- (char)_handleTouchMultiSwipeLeftEvent:(NSObject *)arg0;
- (char)_defaultEventHandler:(id /* block */)arg0;
- (void)_playSoundForState:(int)arg0;
- (char)_handleTrickPlayWhileLoading:(id)arg0;
- (char)_handleRightEventWhileChapterSkipping:(id)arg0;
- (char)_handleLeftEventWhileChapterSkipping:(id)arg0;
- (void)_endChapterSelectionMode:(id)arg0;
- (char)_chapteringSupported;
- (char)_isFavoriteRadioStation;
- (void)_handleAccessibilityOutputForState:(int)arg0;
- (char)_performVolumeUpAction:(NSObject *)arg0;
- (char)_performVolumeDownAction:(NSObject *)arg0;
- (void)_performShuttleExit;
- (void)_performShuttle:(long)arg0;
- (void)_initiateShuttleAction;
- (void)_setShuttleSpeed:(int)arg0;
- (char)_handleTouchSwipeRightEvent:(NSObject *)arg0;
- (char)_handleTouchSwipeLeftEvent:(NSObject *)arg0;
- (void)_touchRepeatEvent;
- (BRMediaPlayerEventHandler *)initWithPlayer:(BRMediaPlayer *)arg0;
- (void)dealloc;

@end
