/* Runtime dump - MKStarRatingView
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKStarRatingView : UIView
{
    float _rating;
    int _numLevels;
    float _padding;
    char _highlighted;
    UIImage * _fullStarImage;
    UIImage * _halfStarImage;
    UIImage * _emptyStarImage;
    UIImage * _fullStarHighlightedImage;
    UIImage * _halfStarHighlightedImage;
    UIImage * _emptyStarHighlightedImage;
    NSMutableArray * _ratingViews;
    int _numReviews;
    int _starStyle;
}

@property (nonatomic) int numberOfRatingLevels;
@property (nonatomic) float rating;
@property (nonatomic) char highlighted;
@property (retain, nonatomic) UIImage * fullStarImage;
@property (retain, nonatomic) UIImage * halfStarImage;
@property (retain, nonatomic) UIImage * emptyStarImage;
@property (retain, nonatomic) UIImage * fullStarHighlightedImage;
@property (retain, nonatomic) UIImage * halfStarHighlightedImage;
@property (retain, nonatomic) UIImage * emptyStarHighlightedImage;
@property (nonatomic) int starStyle;

- (void)setNumberOfRatingLevels:(int)arg0;
- (void)setStarStyle:(int)arg0;
- (void)setFullStarImage:(UIImage *)arg0;
- (void)setHalfStarImage:(UIImage *)arg0;
- (void)setEmptyStarImage:(UIImage *)arg0;
- (void)setFullStarHighlightedImage:(UIImage *)arg0;
- (void)setHalfStarHighlightedImage:(UIImage *)arg0;
- (void)setEmptyStarHighlightedImage:(UIImage *)arg0;
- (int)numberOfRatingLevels;
- (void)_layoutStarViewsCreatingIfNeeded:(char)arg0;
- (int)starStyle;
- (UIImage *)fullStarImage;
- (UIImage *)halfStarImage;
- (UIImage *)emptyStarImage;
- (UIImage *)fullStarHighlightedImage;
- (UIImage *)halfStarHighlightedImage;
- (UIImage *)emptyStarHighlightedImage;
- (MKStarRatingView *)initWithFrame:(struct CGRect)arg0;
- (MKStarRatingView *)initWithCoder:(NSCoder *)arg0;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (struct CGSize)intrinsicContentSize;
- (void)setHighlighted:(char)arg0;
- (char)isHighlighted;
- (void)setPadding:(float)arg0;
- (MKStarRatingView *)initWithStyle:(int)arg0;
- (void)commonInit;
- (void).cxx_destruct;
- (float)rating;
- (void)setRating:(float)arg0;

@end
