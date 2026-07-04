/* Runtime dump - UITapGestureRecognizer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITapGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _locationInView;
    id _imp;
    unsigned int _delaysRecognitionForGreaterTapCounts;
    int _buttonType;
}

@property (nonatomic) unsigned int numberOfTapsRequired;
@property (nonatomic) unsigned int numberOfTouchesRequired;
@property (nonatomic) int _buttonType;
@property (readonly, nonatomic) struct CGPoint centroid;
@property (readonly, nonatomic) struct CGPoint location;
@property (readonly, nonatomic) NSArray * touches;

- (void)dealloc;
- (UITapGestureRecognizer *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UITapGestureRecognizer *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1;
- (struct CGPoint)locationInView:(struct CGPoint)arg0;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)_physicalButtonsBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)_physicalButtonsEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)_physicalButtonsCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (int)_buttonType;
- (struct CGPoint)_digitizerLocation;
- (void)_setButtonType:(int)arg0;
- (float)_touchSloppinessFactor;
- (unsigned int)numberOfTouches;
- (char)canPreventGestureRecognizer:(NSObject *)arg0;
- (unsigned int)numberOfTouchesRequired;
- (unsigned int)numberOfTapsRequired;
- (void)setNumberOfTapsRequired:(unsigned int)arg0;
- (void)setNumberOfTouchesRequired:(unsigned int)arg0;
- (struct CGPoint)location;
- (struct CGPoint)locationOfTouch:(unsigned int)arg0 inView:(struct CGSize)arg1;
- (void)setAllowableMovement:(float)arg0;
- (void)_resetGestureRecognizer;
- (void)_appendSubclassDescription:(NSString *)arg0;
- (char)_shouldRequireFailureOfGestureRecognizer:(NSObject *)arg0;
- (struct CGPoint)centroid;
- (NSArray *)touches;
- (double)maximumIntervalBetweenSuccessiveTaps;
- (char)tapIsPossibleForTapRecognizer:(NSObject *)arg0;
- (void)tapRecognizerRecognizedTap:(id)arg0;
- (void)tapRecognizerFailedToRecognizeTap:(id)arg0;
- (float)allowableMovement;
- (double)maximumSingleTapDuration;
- (void)setMaximumSingleTapDuration:(double)arg0;
- (void)setMaximumIntervalBetweenSuccessiveTaps:(double)arg0;
- (char)_delaysRecognitionForGreaterTapCounts;
- (void)_setDelaysRecognitionForGreaterTapCounts:(char)arg0;

@end
