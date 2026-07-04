/* Runtime dump - MKPlaceReviewsViewCell
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceReviewsViewCell : UITableViewCell
{
    UIImageView * _pictureView;
    MKStarRatingAndLabelView * _starView;
    UILabel * _authorLabel;
    UILabel * _dateLabel;
    UILabel * _reviewLabel;
    NSDate * _date;
    NSLayoutConstraint * _authorLabelBaselineConstraint;
    NSLayoutConstraint * _dateLabelBaselineConstraint;
    NSLayoutConstraint * _reviewLabelBaselineConstraint;
    NSLayoutConstraint * _reviewLabelToBottomConstraint;
    NSLayoutConstraint * _reviewLabelHeightConstraint;
}

@property (weak, nonatomic) UIImage * picture;
@property (weak, nonatomic) NSString * author;
@property (weak, nonatomic) NSDate * date;
@property (weak, nonatomic) NSString * reviewText;
@property (nonatomic) unsigned int rating;

+ (float)intrinsicContentHeight;
+ (NSString *)reuseIdentifier;

- (void)contentSizeDidChange;
- (UIFont *)fontForAuthor;
- (void)refreshMarginConstraints;
- (void)setReviewText:(NSString *)arg0;
- (void)dealloc;
- (MKPlaceReviewsViewCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)layoutMarginsDidChange;
- (void)updateConstraints;
- (void)setDate:(NSDate *)arg0;
- (void).cxx_destruct;
- (void)setPicture:(UIImage *)arg0;
- (void)setRating:(unsigned int)arg0;
- (void)setAuthor:(NSString *)arg0;

@end
