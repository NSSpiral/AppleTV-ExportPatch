/* Runtime dump - UIWebTouchEventsGestureRecognizer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebTouchEventsGestureRecognizer : UIGestureRecognizer
{
    id _touchTarget;
    SEL _touchAction;
    <UIWebTouchEventsGestureRecognizerDelegate> * _webTouchDelegate;
    char _passedHitTest;
    char _defaultPrevented;
    char _dispatchingTouchEvents;
    float _originalGestureDistance;
    float _originalGestureAngle;
    struct _UIWebTouchEvent _lastTouchEvent;
}

@property (nonatomic) char defaultPrevented;
@property (readonly, nonatomic) struct _UIWebTouchEvent * lastTouchEvent;
@property (readonly, nonatomic) char dispatchingTouchEvents;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) struct CGPoint locationInWindow;
@property (readonly, nonatomic) NSMutableArray * touchLocations;
@property (readonly, nonatomic) NSMutableArray * touchIdentifiers;
@property (readonly, nonatomic) NSMutableArray * touchPhases;
@property (readonly, nonatomic) char inJavaScriptGesture;
@property (readonly, nonatomic) float scale;
@property (readonly, nonatomic) float rotation;

+ (void)initialize;

- (void)dealloc;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (float)scale;
- (int)type;
- (void)reset;
- (char)canBePreventedByGestureRecognizer:(NSObject *)arg0;
- (float)rotation;
- (void)_recordTouches:(NSArray *)arg0 type:(int)arg1;
- (void)_processTouches:(NSArray *)arg0 withEvent:(Event *)arg1 type:(int)arg2;
- (UIWebTouchEventsGestureRecognizer *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1 touchDelegate:(NSObject *)arg2;
- (struct _UIWebTouchEvent *)lastTouchEvent;
- (struct CGPoint)locationInWindow;
- (NSMutableArray *)touchLocations;
- (NSMutableArray *)touchIdentifiers;
- (NSMutableArray *)touchPhases;
- (char)inJavaScriptGesture;
- (char)isDefaultPrevented;
- (void)setDefaultPrevented:(char)arg0;
- (char)isDispatchingTouchEvents;

@end
