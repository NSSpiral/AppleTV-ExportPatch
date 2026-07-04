/* Runtime dump - UITouchesEvent
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITouchesEvent : UIInternalEvent
{
    NSMutableSet * _touches;
    struct __CFDictionary * _keyedTouches;
    struct __CFDictionary * _keyedTouchesByWindow;
    struct __CFDictionary * _gestureRecognizersByWindow;
    NSMapTable * _latentSystemGestureWindows;
}

@property (readonly, nonatomic) double _initialTouchTimestamp;
@property (readonly, nonatomic) unsigned int _windowServerHitTestContextId;

- (void)dealloc;
- (NSString *)description;
- (UITouchesEvent *)_init;
- (void)_addTouch:(UITouch *)arg0 forDelayedDelivery:(char)arg1;
- (int)type;
- (NSObject *)touchesForGestureRecognizer:(NSObject *)arg0;
- (void)_clearViewForTouch:(id)arg0;
- (void)_removeTouch:(UITouch *)arg0;
- (NSArray *)allTouches;
- (NSArray *)_windows;
- (UIWindow *)_windowsAwaitingLatentSystemGestureNotificationDeliveredToEventWindow:(NSObject *)arg0;
- (NSArray *)_allTouches;
- (void)_clearTouches;
- (void)_dismissSharedCalloutBarIfNeeded;
- (char)_addGestureRecognizersForView:(NSObject *)arg0 toTouch:(UITouch *)arg1 currentTouchMap:(struct __CFDictionary *)arg2 newTouchMap:(struct __CFDictionary *)arg3;
- (NSString *)_touchesForKey:(NSString *)arg0;
- (struct CGPoint)_digitizerLocation;
- (UIWindow *)_gestureRecognizersForWindow:(NSObject *)arg0;
- (void)_touchesForGesture:(NSObject *)arg0 withPhase:(int)arg1 intoSet:(NSSet *)arg2;
- (UIWindow *)_viewsForWindow:(NSObject *)arg0;
- (NSObject *)_touchesForView:(NSObject *)arg0 withPhase:(int)arg1;
- (void)_invalidateGestureRecognizerForWindowCache;
- (NSObject *)_firstTouchForView:(NSObject *)arg0;
- (NSObject *)_cloneEvent;
- (UIWindow *)touchesForWindow:(NSObject *)arg0;
- (NSObject *)touchesForView:(NSObject *)arg0;
- (NSObject *)_initWithEvent:(struct __GSEvent *)arg0 touches:(NSMutableSet *)arg1;
- (NSObject *)_touchesForGestureRecognizer:(NSObject *)arg0;
- (UIWindow *)_touchesForWindow:(NSObject *)arg0;
- (void)_removeTouchesForKey:(NSString *)arg0;
- (void)_removeTouchesForWindow:(NSObject *)arg0;
- (void)_removeTouch:(UITouch *)arg0 fromGestureRecognizer:(NSObject *)arg1;
- (NSObject *)_touchesForGesture:(NSObject *)arg0 withPhase:(int)arg1;
- (void)_moveTouchesFromView:(NSObject *)arg0 toView:(UIView *)arg1;
- (double)_initialTouchTimestamp;
- (unsigned int)_windowServerHitTestContextId;
- (void)_addWindowAwaitingLatentSystemGestureNotification:(NSNotification *)arg0 deliveredToEventWindow:(NSObject *)arg1;
- (void)_windowNoLongerAwaitingSystemGestureNotification:(NSNotification *)arg0;

@end
