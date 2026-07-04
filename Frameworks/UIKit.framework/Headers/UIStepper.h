/* Runtime dump - UIStepper
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStepper : UIControl
{
    char _isRtoL;
    UIImageView * _middleView;
    UIButton * _plusButton;
    UIButton * _minusButton;
    NSTimer * _repeatTimer;
    int _repeatCount;
    NSMutableDictionary * _dividerImages;
    char _continuous;
    char _autorepeat;
    char _wraps;
    double _value;
    double _minimumValue;
    double _maximumValue;
    double _stepValue;
}

@property (nonatomic) char continuous;
@property (nonatomic) char autorepeat;
@property (nonatomic) char wraps;
@property (nonatomic) double value;
@property (nonatomic) double minimumValue;
@property (nonatomic) double maximumValue;
@property (nonatomic) double stepValue;
@property (retain, nonatomic) UIColor * tintColor;

- (UIStepper *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (UIStepper *)initWithCoder:(NSCoder *)arg0;
- (void)_populateArchivedSubviews:(NSMutableArray *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (char)_contentHuggingDefault_isUsuallyFixedHeight;
- (char)_contentHuggingDefault_isUsuallyFixedWidth;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (char)gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg0;
- (double)value;
- (void)setValue:(double)arg0;
- (void)setTintColor:(UIColor *)arg0;
- (void)setBackgroundImage:(UIImage *)arg0 forState:(unsigned int)arg1;
- (NSObject *)backgroundImageForState:(unsigned int)arg0;
- (void)cancelTrackingWithEvent:(NSObject *)arg0;
- (char)beginTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (char)continueTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (void)endTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (double)minimumValue;
- (double)maximumValue;
- (char)isContinuous;
- (void)setContinuous:(char)arg0;
- (void)setMinimumValue:(double)arg0;
- (void)setMaximumValue:(double)arg0;
- (void)_updateImages;
- (char)wraps;
- (void)setWraps:(char)arg0;
- (void)_commonStepperInit;
- (void)_updateButtonEnabled;
- (void)_setBackgroundImage:(UIImage *)arg0 forState:(unsigned int)arg1;
- (void)_setDividerImage:(UIImage *)arg0 forLeftSegmentState:(unsigned int)arg1 rightSegmentState:(unsigned int)arg2;
- (void)setIncrementImage:(UIImage *)arg0 forState:(unsigned int)arg1;
- (void)setDecrementImage:(UIImage *)arg0 forState:(unsigned int)arg1;
- (void)_updateDividerImageForButtonState;
- (NSObject *)dividerImageForLeftSegmentState:(unsigned int)arg0 rightSegmentState:(unsigned int)arg1;
- (void)_startTimer;
- (void)_updateHighlightingAtPoint:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)_updateCount:(NSObject *)arg0;
- (void)_stopTimer;
- (void)_setIncrementImage:(UIImage *)arg0 forState:(unsigned int)arg1;
- (void)_setDecrementImage:(UIImage *)arg0 forState:(unsigned int)arg1;
- (void)setDividerImage:(UIImage *)arg0 forLeftSegmentState:(unsigned int)arg1 rightSegmentState:(unsigned int)arg2;
- (void)setStepValue:(double)arg0;
- (NSObject *)incrementImageForState:(unsigned int)arg0;
- (NSObject *)decrementImageForState:(unsigned int)arg0;
- (double)stepValue;
- (char)autorepeat;
- (void)setAutorepeat:(char)arg0;

@end
