/* Runtime dump - UIPanGestureRecognizer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPanGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _firstSceneReferenceLocation;
    struct CGPoint _lastSceneReferenceLocation;
    double _lastTouchTime;
    id _velocitySample;
    id _previousVelocitySample;
    NSMutableArray * _touches;
    unsigned int _lastTouchCount;
    unsigned int _minimumNumberOfTouches;
    unsigned int _maximumNumberOfTouches;
    float _hysteresis;
    struct CGPoint _lastUnadjustedSceneReferenceLocation;
    id _failsPastMaxTouches;
    id _canPanHorizontally;
    id _canPanVertically;
    id _ignoresStationaryTouches;
    NSMutableArray * _movingTouches;
    struct CGPoint _digitizerLocation;
}

@property (nonatomic) unsigned int minimumNumberOfTouches;
@property (nonatomic) unsigned int maximumNumberOfTouches;
@property (readonly) UIPanGestureVelocitySample * _velocitySample;
@property (readonly) UIPanGestureVelocitySample * _previousVelocitySample;

+ (void)_setPanGestureRecognizersEnabled:(char)arg0;

- (void)dealloc;
- (UIPanGestureRecognizer *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setMaximumNumberOfTouches:(unsigned int)arg0;
- (struct CGPoint)translationInView:(NSObject *)arg0;
- (struct CGPoint)velocityInView:(NSObject *)arg0;
- (UIPanGestureRecognizer *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1;
- (float)_hysteresis;
- (void)_setHysteresis:(float)arg0;
- (struct CGPoint)locationInView:(struct CGPoint)arg0;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)_physicalButtonsBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (struct CGPoint)_digitizerLocation;
- (void)_setIgnoresStationaryTouches:(char)arg0;
- (void)setFailsPastMaxTouches:(char)arg0;
- (void)setTranslation:(struct CGPoint)arg0 inView:(struct CGSize)arg1;
- (unsigned int)numberOfTouches;
- (void)_setCanPanVertically:(char)arg0;
- (unsigned int)minimumNumberOfTouches;
- (void)setMinimumNumberOfTouches:(unsigned int)arg0;
- (struct CGPoint)locationOfTouch:(unsigned int)arg0 inView:(struct CGSize)arg1;
- (void)_resetGestureRecognizer;
- (void)_willBeginAfterSatisfyingFailureRequirements;
- (UIPanGestureVelocitySample *)_velocitySample;
- (UIPanGestureVelocitySample *)_previousVelocitySample;
- (void)_resetVelocitySamples;
- (struct CADoublePoint)_convertPoint:(struct CGPoint)arg0 fromSceneReferenceCoordinatesToView:(NSObject *)arg1;
- (struct CADoublePoint)_convertPoint:(struct CGPoint)arg0 toSceneReferenceCoordinatesFromView:(NSObject *)arg1;
- (struct CADoublePoint)_convertVelocitySample:(NSObject *)arg0 fromSceneReferenceCoordinatesToView:(NSObject *)arg1;
- (struct UIOffset)_offsetInViewFromSceneReferenceLocation:(struct CGPoint)arg0 toSceneReferenceLocation:(struct CGPoint)arg1;
- (struct CGPoint)_shiftPanLocationToNewSceneReferenceLocation:(struct CGPoint)arg0 lockingToAxis:(int)arg1;
- (struct CGPoint)_adjustSceneReferenceLocation:(struct CGPoint)arg0;
- (char)_willScrollX;
- (char)_willScrollY;
- (void)_updateDigitizerLocationWithEvent:(NSObject *)arg0;
- (void)_touchesListChangedFrom:(NSObject *)arg0 to:(NSObject *)arg1;
- (char)_updateMovingTouchesArraySavingOldArray:(id *)arg0;
- (void)_centroidMovedTo:(struct CGPoint)arg0 atTime:(double)arg1;
- (void)_processTouchesMoved:(id)arg0 withEvent:(Event *)arg1;
- (char)_shouldTryToBeginWithEvent:(NSObject *)arg0;
- (void)_removeHysteresisFromTranslation;
- (void)_handleEndedTouches:(NSArray *)arg0 withFinalStateAdjustments:(id)arg1;
- (char)failsPastMaxTouches;
- (int)_lastTouchCount;
- (char)_ignoresStationaryTouches;
- (char)_canPanHorizontally;
- (char)_canPanVertically;
- (void)_setCanPanHorizontally:(char)arg0;
- (unsigned int)maximumNumberOfTouches;

@end
