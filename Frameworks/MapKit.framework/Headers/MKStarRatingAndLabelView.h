/* Runtime dump - MKStarRatingAndLabelView
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKStarRatingAndLabelView : UIView
{
    MKStarRatingView * _starRatingView;
    UILabel * _reviewsLabel;
    NSString * _sourceName;
    unsigned int _numberOfReviews;
    char _displaysSourceOfReviews;
    NSArray * _reviewsLabelConstraints;
}

@property (readonly, nonatomic) MKStarRatingView * starRatingView;
@property (readonly, nonatomic) UILabel * reviewsLabel;
@property (nonatomic) unsigned int numberOfReviews;
@property (retain, nonatomic) NSString * sourceName;

- (MKStarRatingView *)starRatingView;
- (void)_mapkit_setCalloutTextColor:(UIColor *)arg0;
- (void)_updateFonts;
- (void)setDisplaysSourceOfReviews:(char)arg0;
- (UILabel *)reviewsLabel;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (struct CGSize)intrinsicContentSize;
- (MKStarRatingAndLabelView *)initWithStyle:(int)arg0;
- (NSObject *)viewForBaselineLayout;
- (void).cxx_destruct;
- (void)setNumberOfReviews:(unsigned int)arg0;
- (unsigned int)numberOfReviews;
- (void)setSourceName:(NSString *)arg0;
- (NSString *)sourceName;

@end
