/* Runtime dump - UITapAndAHalfRecognizer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITapAndAHalfRecognizer : UIGestureRecognizer
{
    struct CGPoint _startPoint;
    float _allowableMovement;
    int _numberOfFullTaps;
    double _minimumFinalPressDuration;
    NSMutableSet * _activeTouches;
    int _currentNumberOfTaps;
    UITouch * _touch;
    UIDelayedAction * _tapTimer;
}

@property (nonatomic) int numberOfFullTaps;
@property (nonatomic) float allowableMovement;
@property (nonatomic) double minimumFinalPressDuration;
@property (retain, nonatomic) UITouch * touch;

- (void)dealloc;
- (UITapAndAHalfRecognizer *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (UITouch *)touch;
- (void)setAllowableMovement:(float)arg0;
- (void)setTouch:(UITouch *)arg0;
- (void)_resetGestureRecognizer;
- (float)allowableMovement;
- (void)clearTapTimer;
- (void)tooSlow:(UIDelayedAction *)arg0;
- (void)startTapTimer:(double)arg0;
- (int)numberOfFullTaps;
- (void)recognized:(AWDSiriSpeechRecognized *)arg0;
- (double)minimumFinalPressDuration;
- (void)startRecognitionTimer:(double)arg0;
- (void)_verifyMovementInAllowableRange;
- (void)setNumberOfFullTaps:(int)arg0;
- (void)setMinimumFinalPressDuration:(double)arg0;

@end
