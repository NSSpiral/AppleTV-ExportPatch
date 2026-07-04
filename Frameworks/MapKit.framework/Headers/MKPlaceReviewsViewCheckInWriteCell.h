/* Runtime dump - MKPlaceReviewsViewCheckInWriteCell
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceReviewsViewCheckInWriteCell : UITableViewCell
{
    UILabel * _checkInLabel;
    UILabel * _writeReviewLabel;
    <MKPlaceReviewsViewCheckInWriteCellDelegate> * _delegate;
    NSMutableArray * _scaledConstraints;
    NSArray * _marginConstraints;
}

@property (retain, nonatomic) NSAttributedString * checkInTitle;
@property (retain, nonatomic) NSAttributedString * writeReviewTitle;
@property (weak, nonatomic) <MKPlaceReviewsViewCheckInWriteCellDelegate> * delegate;
@property (retain, nonatomic) NSMutableArray * scaledConstraints;
@property (retain, nonatomic) NSArray * marginConstraints;

+ (float)intrinsicContentHeight;
+ (NSString *)reuseIdentifier;

- (void)contentSizeDidChange;
- (void)refreshMarginConstraints;
- (NSString *)newLabel;
- (void)cellTapped:(id)arg0;
- (NSArray *)marginConstraints;
- (void)setMarginConstraints:(NSArray *)arg0;
- (NSString *)updatedAttributedString:(NSString *)arg0 onlyUpdateColor:(char)arg1;
- (NSAttributedString *)checkInTitle;
- (NSAttributedString *)writeReviewTitle;
- (void)setCheckInTitle:(NSAttributedString *)arg0;
- (void)setWriteReviewTitle:(NSAttributedString *)arg0;
- (NSMutableArray *)scaledConstraints;
- (void)setScaledConstraints:(NSMutableArray *)arg0;
- (void)dealloc;
- (void)setDelegate:(<MKPlaceReviewsViewCheckInWriteCellDelegate> *)arg0;
- (MKPlaceReviewsViewCheckInWriteCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (<MKPlaceReviewsViewCheckInWriteCellDelegate> *)delegate;
- (void)layoutMarginsDidChange;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (void).cxx_destruct;

@end
