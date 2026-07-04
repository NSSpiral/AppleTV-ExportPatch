/* Runtime dump - MKPlaceHeaderView
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceHeaderView : UIView <MKStackingViewControllerSizableView, MKPlaceHeaderViewCinematics, MKPlaceHeaderBackgroundViewDelegate>
{
    MKPlaceHeaderBackgroundView * _background;
    UIView * _screen;
    UIImageView * _vignette;
    MKDistanceDetailProvider * _distanceMonitor;
    char _showBusinessDetails;
    MKStarRatingView * _ratingView;
    struct UILabel * _titleLabel;
    struct UILabel * _distanceToPlaceLabel;
    struct ? _headerViewFlags;
    char _needsToUpdateTitleLabel;
    MKMapItem * _mapItem;
    int _backgroundTypeOverride;
    <MKPlaceHeaderViewDelegate> * _delegate;
    NSLayoutConstraint * _titleLabelBaselineConstraint;
    NSArray * _labelWidthConstraints;
    NSMutableArray * _viewDidAppearBlocks;
}

@property (retain, nonatomic) MKMapItem * mapItem;
@property (nonatomic) int backgroundTypeOverride;
@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * subTitle;
@property (nonatomic) float rating;
@property (readonly, nonatomic) UIFont * subtitleFont;
@property (weak, nonatomic) <MKPlaceHeaderViewDelegate> * delegate;
@property (nonatomic) char needsToUpdateTitleLabel;
@property (retain, nonatomic) NSLayoutConstraint * titleLabelBaselineConstraint;
@property (retain, nonatomic) NSArray * labelWidthConstraints;
@property (retain, nonatomic) NSMutableArray * viewDidAppearBlocks;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setViewDidAppearBlocks:(NSMutableArray *)arg0;
- (NSMutableArray *)viewDidAppearBlocks;
- (void)setSubTitle:(NSString *)arg0;
- (void)setBackgroundTypeOverride:(int)arg0;
- (void)resetAnimations;
- (void)restartAnimations;
- (void)setBackgroundViewTransform:(struct CATransform3D)arg0;
- (void)pauseAnimations;
- (void)resumeAnimations;
- (void)prepareForPresentation;
- (void)headerViewBackgroundDidFinishLoading:(MKPlaceHeaderBackgroundView *)arg0;
- (void)refreshContent;
- (void)addContent;
- (void)addConstraints;
- (NSLayoutConstraint *)titleLabelBaselineConstraint;
- (void)setNeedsToUpdateTitleLabel:(char)arg0;
- (void)_configureLabelForHeader:(NSString *)arg0;
- (struct UILabel *)newInfoLabel;
- (void)setTitleLabelBaselineConstraint:(NSLayoutConstraint *)arg0;
- (void)presentBackgroundIfNeeded;
- (void)fadeOutScreen;
- (NSString *)subTitle;
- (int)backgroundTypeOverride;
- (NSArray *)labelWidthConstraints;
- (void)setLabelWidthConstraints:(NSArray *)arg0;
- (char)needsToUpdateTitleLabel;
- (void)updateTitleLabel;
- (id)viewsForPresentation;
- (void)resetVignette;
- (void)headerViewBackground:(MKPlaceHeaderBackgroundView *)arg0 willShowBackground:(UIImage *)arg1;
- (MKPlaceHeaderView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(<MKPlaceHeaderViewDelegate> *)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void)setTitle:(NSString *)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (<MKPlaceHeaderViewDelegate> *)delegate;
- (NSString *)title;
- (void)reset;
- (void)viewDidAppear:(char)arg0;
- (void)resume;
- (void)present;
- (void).cxx_destruct;
- (UIFont *)subtitleFont;
- (void)pause;
- (struct CATransform3D)perspectiveTransform;
- (MKMapItem *)mapItem;
- (void)setMapItem:(MKMapItem *)arg0;
- (float)rating;
- (void)setRating:(float)arg0;

@end
