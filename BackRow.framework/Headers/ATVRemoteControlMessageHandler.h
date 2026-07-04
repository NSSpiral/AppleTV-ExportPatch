/* Runtime dump - ATVRemoteControlMessageHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVDirectionalRemoteConnectionHandler;
@interface ATVRemoteControlMessageHandler : NSObject
{
    int _touchDirection;
    struct CGPoint _startPoint;
    double _lastTimeStamp;
    struct CGPoint _lastPoint;
    NSTimer * _swipeTimer;
    NSTimer * _easeOutTimer;
    double _easeOutInterval;
    double _easeOutDecelerationFactor;
    char _easeOutRepeat;
    struct CGPoint _autoScrollStartPoint;
    double _autoScrollStartInterval;
    NSTimer * _autoScrollContinueTimer;
    char _isReallyReallyAutoScrolling;
    double _autoScrollInterval;
    struct CGPoint _velocityAdjustOffset;
    struct CGPoint _lastVelocityRefPoint;
    struct CGPoint _velocityVector;
    NSMutableArray * _velocitySet;
    int _touchCount;
    NSMutableArray * _throttledEventQueue;
    NSTimer * _throttleEventTimer;
    char _prohibitSelect;
    char _activelyScrolling;
    struct CGSize _selectionChange;
    ATVDirectionalRemoteConnectionHandler * _connectionHandler;
    NSTimer * _connectionTimeoutTimer;
}

- (char)handleDirectionalRemoteMessage:(unsigned long)arg0 value:(unsigned long)arg1 eventDictionary:(NSDictionary *)arg2;
- (void)_scrollStartNotification;
- (void)_scrollEndNotification;
- (void)_refreshConnectionTimeoutTimer;
- (char)_processTouchEvent:(unsigned long)arg0 value:(unsigned long)arg1 eventDictionary:(NSDictionary *)arg2;
- (void)_postEvent:(NSObject *)arg0;
- (char)_isReallyReallyAutoScrolling;
- (char)_easeOutInProgress;
- (void)_finishEaseOut;
- (void)_swipeTimeout;
- (void)_resetTrackingCoordinates;
- (void)_clearEventQueue;
- (void)_updateVelocitySet:(struct CGPoint)arg0 velocity:(struct CGPoint)arg1;
- (char)_updateAutoScroll;
- (void)_processLastTouchMove;
- (char)_swipeActive;
- (void)_processSwipeMovement;
- (char)_startEaseOut;
- (void)_sendDirectionEvent:(int)arg0 value:(int)arg1;
- (void)_finishAutoScroll;
- (void)_connectionTimedOut:(id)arg0;
- (struct CGSize)_initialSelectionChangeDistance;
- (void)_resetVelocitySet;
- (char)_isAutoScrolling;
- (struct CGPoint)_adjustPoint:(struct CGPoint)arg0 forVelocity:(struct CGPoint)arg1;
- (struct CGPoint)_getSelectionPosition:(struct CGPoint)arg0;
- (void)_processSelectionChange:(int)arg0 delta:(int)arg1;
- (double)_velocitySetTotalDistance;
- (double)_calculateVelocityAverage;
- (struct CGSize)_repeatSelectionChangeDistance;
- (void)_postThrottledEvent:(NSObject *)arg0;
- (void)_invalidateSwipeAction;
- (void)_updateAutoScrollInterval;
- (void)_autoScrollContinueTimerCallback:(id /* block */)arg0;
- (void)_beginAutoScroll;
- (void)_easeOutTimerCallback:(id /* block */)arg0;
- (void)_throttleEventTimerCallback;
- (void)dealloc;
- (ATVRemoteControlMessageHandler *)init;
- (void)invalidate;

@end
