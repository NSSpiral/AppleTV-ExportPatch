/* Runtime dump - UILongPressGestureRecognizer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UILongPressGestureRecognizer : UIGestureRecognizer
{
    NSArray * _touches;
    NSMutableSet * _activeTouches;
    unsigned int _numberOfTouchesRequired;
    double _minimumPressDuration;
    float _allowableMovement;
    struct CGPoint _startPointScreen;
    id _enoughTimeElapsed;
    id _tooMuchTimeElapsed;
    id _imp;
    id _gotTouchEnd;
    id _gotTooMany;
    id _gotEnoughTaps;
    id _cancelPastAllowableMovement;
    int _buttonType;
}

@property (nonatomic) unsigned int numberOfTapsRequired;
@property (nonatomic) unsigned int numberOfTouchesRequired;
@property (nonatomic) double minimumPressDuration;
@property (nonatomic) float allowableMovement;
@property (nonatomic) double delay;
@property (readonly, retain, nonatomic) NSArray * touches;
@property (readonly, nonatomic) struct CGPoint startPoint;
@property (readonly, nonatomic) struct CGPoint centroid;
@property (nonatomic) char cancelPastAllowableMovement;
@property (nonatomic) int _buttonType;

- (void)dealloc;
- (UILongPressGestureRecognizer *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UILongPressGestureRecognizer *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1;
- (struct CGPoint)locationInView:(struct CGPoint)arg0;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)invalidate;
- (void)setDelay:(double)arg0;
- (void)_physicalButtonsBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)_physicalButtonsEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)_physicalButtonsCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (double)delay;
- (int)_buttonType;
- (void)setView:(UIView *)arg0;
- (void)_setButtonType:(int)arg0;
- (float)_touchSloppinessFactor;
- (unsigned int)numberOfTouches;
- (char)canPreventGestureRecognizer:(NSObject *)arg0;
- (void)setMinimumPressDuration:(double)arg0;
- (struct CGPoint)startPoint;
- (unsigned int)numberOfTouchesRequired;
- (unsigned int)numberOfTapsRequired;
- (void)setNumberOfTapsRequired:(unsigned int)arg0;
- (void)setNumberOfTouchesRequired:(unsigned int)arg0;
- (struct CGPoint)locationOfTouch:(unsigned int)arg0 inView:(struct CGSize)arg1;
- (void)setAllowableMovement:(float)arg0;
- (void)_resetGestureRecognizer;
- (struct CGPoint)centroid;
- (NSArray *)touches;
- (void)clearTimer;
- (void)setTouches:(NSArray *)arg0;
- (void)enoughTimeElapsed:(id)arg0;
- (void)tooMuchElapsed:(id)arg0;
- (struct CGPoint)centroidScreen;
- (void)startTimer;
- (void)_interactionsEndedWithValidTouches:(char)arg0;
- (void)_startTapFinishedTimer;
- (double)minimumPressDuration;
- (char)cancelPastAllowableMovement;
- (void)setCancelPastAllowableMovement:(char)arg0;
- (char)tapIsPossibleForTapRecognizer:(NSObject *)arg0;
- (void)tapRecognizerRecognizedTap:(id)arg0;
- (void)tapRecognizerFailedToRecognizeTap:(id)arg0;
- (float)allowableMovement;

@end
