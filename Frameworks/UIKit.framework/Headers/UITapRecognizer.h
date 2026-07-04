/* Runtime dump - UITapRecognizer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITapRecognizer : NSObject <NSCoding>
{
    unsigned int _numberOfTouchesRequired;
    unsigned int _numberOfTapsRequired;
    NSMutableSet * _activeTouches;
    int _currentNumberOfTouches;
    int _currentNumberOfTaps;
    struct CGPoint _location;
    struct CGPoint _startPoint;
    struct CGPoint _digitizerLocation;
    float _allowableMovement;
    double _maximumSingleTapDuration;
    double _maximumIntervalBetweenSuccessiveTaps;
    NSMutableArray * _touches;
    id _delegate;
    id _timerOn;
    id _noNewTouches;
}

@property (nonatomic) <UITapRecognizerDelegate> * delegate;
@property (nonatomic) unsigned int numberOfTapsRequired;
@property (nonatomic) unsigned int numberOfTouchesRequired;
@property (nonatomic) float allowableMovement;
@property (nonatomic) double maximumSingleTapDuration;
@property (nonatomic) double maximumIntervalBetweenSuccessiveTaps;
@property (readonly, nonatomic) NSArray * touches;

- (void)dealloc;
- (UITapRecognizer *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(<UITapRecognizerDelegate> *)arg0;
- (UITapRecognizer *)init;
- (<UITapRecognizerDelegate> *)delegate;
- (struct CGPoint)locationInView:(struct CGPoint)arg0;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)_physicalButtonsBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)_physicalButtonsEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)_physicalButtonsCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (struct CGPoint)_digitizerLocation;
- (unsigned int)numberOfTouchesRequired;
- (unsigned int)numberOfTapsRequired;
- (struct CGPoint)_locationInSceneReferenceSpace;
- (void)setNumberOfTapsRequired:(unsigned int)arg0;
- (void)setNumberOfTouchesRequired:(unsigned int)arg0;
- (void)setAllowableMovement:(float)arg0;
- (NSArray *)touches;
- (void)_reset;
- (double)maximumIntervalBetweenSuccessiveTaps;
- (float)allowableMovement;
- (void)clearTapTimer;
- (void)tooSlow:(UIDelayedAction *)arg0;
- (void)_updateDigitizerLocationForEvent:(NSObject *)arg0;
- (void)_beginInteraction;
- (float)_effectiveAllowableMovement;
- (void)_interactionEndedTouch:(char)arg0;
- (void)startTapTimer:(double)arg0;
- (double)maximumSingleTapDuration;
- (void)setMaximumSingleTapDuration:(double)arg0;
- (void)setMaximumIntervalBetweenSuccessiveTaps:(double)arg0;

@end
