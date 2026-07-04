/* Runtime dump - UIDragRecognizer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDragRecognizer : UIGestureRecognizer
{
    double _maximumDeviation;
    double _minimumDistance;
    struct CGPoint _startPosition;
    char _restrictsToAngle;
    double _angle;
    UITouch * _touch;
    UIDelayedAction * _tooSlow;
    double _startAngle;
    double _quietPeriod;
    char _canBeginDrag;
    SEL _checkCanBeginDrag;
    UIDelayedAction * ignoreTouch;
}

@property (nonatomic) char restrictsToAngle;
@property (nonatomic) double angle;
@property (nonatomic) double maximumDeviation;
@property (nonatomic) double minimumDistance;
@property (nonatomic) struct CGPoint startPosition;
@property (nonatomic) double startAngle;
@property (retain, nonatomic) UITouch * touch;
@property (nonatomic) double quietPeriod;
@property (nonatomic) char canBeginDrag;
@property (nonatomic) SEL checkCanBeginDrag;
@property (retain, nonatomic) UIDelayedAction * ignoreTouch;

- (void)dealloc;
- (UIDragRecognizer *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (struct CGPoint)startPosition;
- (UITouch *)touch;
- (void)setTouch:(UITouch *)arg0;
- (void)_resetGestureRecognizer;
- (void)setCanBeginDrag:(char)arg0;
- (void)setMinimumDistance:(double)arg0;
- (void)setMaximumDeviation:(double)arg0;
- (void)setQuietPeriod:(double)arg0;
- (void)setCheckCanBeginDrag:(SEL)arg0;
- (void)clearTimer;
- (void)tooSlow:(UIDelayedAction *)arg0;
- (void)setRestrictsToAngle:(char)arg0;
- (void)setAngle:(double)arg0;
- (void)clearIgnoreTouch;
- (UIDelayedAction *)ignoreTouch;
- (void)setIgnoreTouch:(UIDelayedAction *)arg0;
- (void)setStartPosition:(struct CGPoint)arg0;
- (double)quietPeriod;
- (double)angle;
- (double)minimumDistance;
- (char)restrictsToAngle;
- (double)maximumDeviation;
- (SEL)checkCanBeginDrag;
- (char)canBeginDrag;
- (void)setStartAngle:(double)arg0;
- (double)startAngle;

@end
