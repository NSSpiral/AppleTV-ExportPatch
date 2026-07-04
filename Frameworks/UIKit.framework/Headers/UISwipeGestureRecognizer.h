/* Runtime dump - UISwipeGestureRecognizer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISwipeGestureRecognizer : UIGestureRecognizer
{
    double _maximumDuration;
    float _minimumPrimaryMovement;
    float _maximumPrimaryMovement;
    float _minimumSecondaryMovement;
    float _maximumSecondaryMovement;
    float _rateOfMinimumMovementDecay;
    float _rateOfMaximumMovementDecay;
    unsigned int _numberOfTouchesRequired;
    NSMutableArray * _touches;
    unsigned int _direction;
    struct CGPoint _startLocation;
    struct CGPoint * _startLocations;
    double _startTime;
    id _failed;
}

@property (nonatomic) unsigned int numberOfTouchesRequired;
@property (nonatomic) unsigned int direction;
@property (nonatomic) double maximumDuration;
@property (nonatomic) float minimumPrimaryMovement;
@property (nonatomic) float maximumPrimaryMovement;
@property (nonatomic) float minimumSecondaryMovement;
@property (nonatomic) float maximumSecondaryMovement;
@property (nonatomic) float rateOfMinimumMovementDecay;
@property (nonatomic) float rateOfMaximumMovementDecay;
@property (readonly, nonatomic) struct CGPoint startPoint;

- (void)dealloc;
- (UISwipeGestureRecognizer *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UISwipeGestureRecognizer *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1;
- (struct CGPoint)locationInView:(struct CGPoint)arg0;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)setDirection:(unsigned int)arg0;
- (unsigned int)numberOfTouches;
- (unsigned int)direction;
- (void)setMaximumDuration:(double)arg0;
- (struct CGPoint)startPoint;
- (unsigned int)numberOfTouchesRequired;
- (void)setNumberOfTouchesRequired:(unsigned int)arg0;
- (struct CGPoint)locationOfTouch:(unsigned int)arg0 inView:(struct CGSize)arg1;
- (void)setMinimumPrimaryMovement:(float)arg0;
- (void)_resetGestureRecognizer;
- (void)_appendSubclassDescription:(NSString *)arg0;
- (char)_checkForSwipeWithDelta:(struct CGPoint)arg0 time:(double)arg1;
- (double)maximumDuration;
- (float)minimumPrimaryMovement;
- (float)maximumPrimaryMovement;
- (void)setMaximumPrimaryMovement:(float)arg0;
- (float)minimumSecondaryMovement;
- (void)setMinimumSecondaryMovement:(float)arg0;
- (float)maximumSecondaryMovement;
- (void)setMaximumSecondaryMovement:(float)arg0;
- (float)rateOfMinimumMovementDecay;
- (void)setRateOfMinimumMovementDecay:(float)arg0;
- (float)rateOfMaximumMovementDecay;
- (void)setRateOfMaximumMovementDecay:(float)arg0;

@end
