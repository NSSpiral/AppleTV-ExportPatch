/* Runtime dump - SKStarRatingControl
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKStarRatingControl : UIControl
{
    UIImageView * _backgroundImageView;
    UILabel * _explanationLabel;
    UIImageView * _foregroundImageView;
    struct CGSize _hitPadding;
    float _starWidth;
    struct CGPoint _trackingLastPoint;
    struct CGPoint _trackingStartPoint;
    float _value;
}

@property (copy, nonatomic) NSString * explanationText;
@property (nonatomic) float starWidth;
@property (nonatomic) float value;

- (void)setExplanationText:(NSString *)arg0;
- (NSString *)explanationText;
- (struct CGRect)_foregroundImageClipBounds;
- (NSString *)_newExplanationLabel;
- (void)_updateValueForPoint:(struct CGPoint)arg0;
- (float)starWidth;
- (SKStarRatingControl *)initWithBackgroundImage:(UIImage *)arg0 foregroundImage:(UIImage *)arg1;
- (void)setHitPadding:(struct CGSize)arg0;
- (char)canHandleSwipes;
- (void)setStarWidth:(float)arg0;
- (void)dealloc;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)layoutSubviews;
- (float)value;
- (void)setValue:(float)arg0;
- (struct CGRect)hitRect;
- (void)sizeToFit;
- (char)_alwaysHandleScrollerMouseEvent;
- (char)beginTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (char)continueTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (void)endTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;

@end
