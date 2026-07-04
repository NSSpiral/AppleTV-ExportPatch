/* Runtime dump - UIControl
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIControl : UIView
{
    NSMutableArray * _targetActions;
    struct CGPoint _previousPoint;
    double _downTime;
    struct ? _controlFlags;
}

@property (nonatomic) char enabled;
@property (nonatomic) char selected;
@property (nonatomic) char highlighted;
@property (nonatomic) int contentVerticalAlignment;
@property (nonatomic) int contentHorizontalAlignment;
@property (readonly, nonatomic) unsigned int state;
@property (readonly, nonatomic) char tracking;
@property (readonly, nonatomic) char touchInside;

- (void)addTarget:(NSObject *)arg0 action:(SEL)arg1 forControlEvents:(unsigned int)arg2;
- (UIControl *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (UIControl *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (unsigned int)state;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (char)isTracking;
- (char)cancelTouchTracking;
- (char)cancelMouseTracking;
- (char)canBecomeFirstResponder;
- (char)canBecomeFocused;
- (void)_didMoveFromWindow:(NSObject *)arg0 toWindow:(NSObject *)arg1;
- (NSObject *)hitTest:(struct CGPoint)arg0 forEvent:(struct __GSEvent *)arg1;
- (void)setHighlighted:(char)arg0;
- (void)sendActionsForControlEvents:(unsigned int)arg0;
- (void)setContentHorizontalAlignment:(int)arg0;
- (void)setContentVerticalAlignment:(int)arg0;
- (char)isHighlighted;
- (char)isSelected;
- (void)setSelected:(char)arg0;
- (void)setTracking:(char)arg0;
- (void)_cancelDelayedActions;
- (void)_sendActionsForEvents:(int)arg0 withEvent:(Event *)arg1;
- (void)cancelTrackingWithEvent:(NSObject *)arg0;
- (void)_unhighlight;
- (void)_setLastHighlightSuccessful:(char)arg0;
- (char)requiresDisplayOnTracking;
- (char)shouldTrack;
- (char)beginTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (char)continueTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (char)pointMostlyInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (char)isTouchInside;
- (void)endTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (void)_setTouchHasHighlighted:(char)arg0;
- (struct CGRect)_clippedHighlightBounds;
- (void)_sendDelayedActions:(char)arg0;
- (void)sendAction:(SEL)arg0 to:(NSObject *)arg1 forEvent:(struct __GSEvent *)arg2;
- (void)removeTarget:(NSObject *)arg0 action:(SEL)arg1 forControlEvents:(unsigned int)arg2;
- (int)contentVerticalAlignment;
- (int)contentHorizontalAlignment;
- (id)allTargets;
- (unsigned int)allControlEvents;
- (NSObject *)actionsForTarget:(NSObject *)arg0 forControlEvent:(unsigned int)arg1;
- (float)_highlightCornerRadius;
- (char)_hasActionForEventMask:(int)arg0;
- (void)_setHighlightOnMouseDown:(char)arg0;
- (void)_delayActions;
- (void)_sendDelayedActions;
- (char)_wasLastHighlightSuccessful;
- (char)_touchHasHighlighted;
- (char)touchDragged;
- (void)setRequiresDisplayOnTracking:(char)arg0;
- (char)hasOneOrMoreTargets;
- (void)addTarget:(NSObject *)arg0 action:(SEL)arg1 forEvents:(int)arg2;
- (void)removeTarget:(NSObject *)arg0 forEvents:(int)arg1;
- (void)_connectInterfaceBuilderEventConnection:(NSURLConnection *)arg0;

@end
