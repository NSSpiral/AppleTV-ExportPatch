/* Runtime dump - UIOldSliderControl
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIOldSliderControl : UIControl
{
    UIImage * _sliderLeftFillCap;
    id _sliderLeftFill;
    id _sliderRightFill;
    UIImage * _minValueImage;
    UIImage * _maxValueImage;
    int _numberOfTickMarks;
    float _hitOffset;
    UIImage * _sliderRightCap;
    UIImage * _sliderRightFullCap;
    UIImage * _sliderLeftCap;
    struct ? _sliderFlags;
    float _value;
    float _animationEndValue;
    float _minValue;
    float _maxValue;
    UIView * _knob;
    double _lastTrackingTime;
    double _idleTrackingTime;
    struct CGPoint _lastTrackingPoint;
    struct CGPoint _idleTrackingPoint;
}

- (UIOldSliderControl *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (UIOldSliderControl *)init;
- (void)setEnabled:(char)arg0;
- (float)value;
- (void)setValue:(float)arg0;
- (char)cancelTouchTracking;
- (char)cancelMouseTracking;
- (NSDictionary *)_scriptingInfo;
- (void)setHighlighted:(char)arg0;
- (char)beginTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (void)_controlTouchBegan:(UIControl *)arg0 withEvent:(Event *)arg1;
- (char)continueTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (void)_controlTouchMoved:(UIControl *)arg0 withEvent:(Event *)arg1;
- (void)endTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (void)_controlTouchEnded:(UIControl *)arg0 withEvent:(Event *)arg1;
- (void)_sendDelayedActions;
- (void)animator:(UIDynamicAnimator *)arg0 stopAnimation:(NSObject *)arg1;
- (void)setValue:(float)arg0 animated:(char)arg1;
- (void)_setValue:(float)arg0 andSendAction:(char)arg1;
- (void)setContinuous:(char)arg0;
- (char)isAnimatingValueChange;
- (void)setShowValue:(char)arg0;
- (UIOldSliderControl *)initWithFrame:(struct CGRect)arg0 layeredFill:(struct CGSize)arg1;
- (NSObject *)createSliderKnobView;
- (UIImage *)imageForSliderPiece:(int)arg0;
- (void)sliderBoundsChanged;
- (void)setMaxValue:(float)arg0;
- (struct CGRect)fillBounds;
- (void)drawSliderPiece:(int)arg0 inRect:(struct CGRect)arg1;
- (struct CGRect)sliderBounds;
- (void)setValue:(float)arg0 animated:(char)arg1 animationCurve:(int)arg2;
- (void)refreshImages;
- (void)_resetFillFrames;
- (void)_sliderBounds:(struct CGRect)arg0 getLeftCapRect:(struct CGSize)arg1 rightCapRect:(NSObject *)arg2 left:(struct CGRect *)arg3 right:(struct CGSize)arg4;
- (void)drawSliderInRect:(struct CGRect)arg0 dirtyRect:(struct CGSize)arg1;
- (struct CGRect)valueTextBounds;
- (struct CGRect)minValueImageBounds;
- (struct CGRect)maxValueImageBounds;
- (float)_validatedValue:(float)arg0;
- (void)drawSliderInRect:(struct CGRect)arg0;
- (void)setMinValue:(float)arg0;
- (void)setNumberOfTickMarks:(int)arg0;
- (void)setAllowsTickMarkValuesOnly:(char)arg0;
- (void)setMinValueImage:(UIImage *)arg0;
- (void)setMaxValueImage:(UIImage *)arg0;
- (float)_validatedValueForPoint:(struct CGPoint)arg0 includeTickMarks:(char)arg1;
- (void)setSendActionDuringAnimation:(char)arg0;

@end
