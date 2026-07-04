/* Runtime dump - MKPlaceSectionHeaderView
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceSectionHeaderView : UIView
{
    char _showSeeMoreButton;
    char _showSeparator;
    NSString * _sectionHeaderText;
    UILabel * _sectionHeaderLabel;
    _MKRightImageButton * _seeMoreButton;
    UIView * _separator;
    NSArray * _seeMoreButtonConstraints;
    NSArray * _marginConstraints;
    NSMutableArray * _scaledConstraints;
    SEL _action;
    id _target;
}

@property (nonatomic) char showSeeMoreButton;
@property (copy, nonatomic) NSString * sectionHeaderText;
@property (nonatomic) char showSeparator;
@property (retain, nonatomic) UILabel * sectionHeaderLabel;
@property (retain, nonatomic) _MKRightImageButton * seeMoreButton;
@property (retain, nonatomic) UIView * separator;
@property (retain, nonatomic) NSArray * seeMoreButtonConstraints;
@property (retain, nonatomic) NSArray * marginConstraints;
@property (retain, nonatomic) NSMutableArray * scaledConstraints;
@property (nonatomic) SEL action;
@property (weak, nonatomic) id target;

+ (float)intrinsicContentHeight;

- (void)setShowSeparator:(char)arg0;
- (char)showSeparator;
- (void)setSeparator:(UIView *)arg0;
- (void)contentSizeDidChange;
- (void)refreshMarginConstraints;
- (NSArray *)marginConstraints;
- (void)setMarginConstraints:(NSArray *)arg0;
- (NSMutableArray *)scaledConstraints;
- (void)setScaledConstraints:(NSMutableArray *)arg0;
- (UIImage *)chevronImage;
- (void)setSeeMoreButtonConstraints:(NSArray *)arg0;
- (char)showSeeMoreButton;
- (NSArray *)seeMoreButtonConstraints;
- (_MKRightImageButton *)seeMoreButton;
- (void)setShowSeeMoreButton:(char)arg0;
- (void)setSectionHeaderText:(NSString *)arg0;
- (NSString *)sectionHeaderText;
- (UILabel *)sectionHeaderLabel;
- (void)setSectionHeaderLabel:(UILabel *)arg0;
- (void)setSeeMoreButton:(_MKRightImageButton *)arg0;
- (MKPlaceSectionHeaderView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setTarget:(NSObject *)arg0;
- (SEL)action;
- (NSObject *)target;
- (void)layoutMarginsDidChange;
- (void)setAction:(SEL)arg0;
- (void)updateConstraints;
- (void)setTarget:(NSObject *)arg0 action:(SEL)arg1;
- (void).cxx_destruct;
- (UIView *)separator;

@end
