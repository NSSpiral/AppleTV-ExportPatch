/* Runtime dump - MKSmallCalloutView
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSmallCalloutView : UIView <CalloutViewControllerProtocol>
{
    UILabel * _titleLabel;
    UILabel * _subtitleLabel;
    UIView<_MKCalloutAccessoryView> * _leftView;
    UIView<_MKCalloutAccessoryView> * _rightView;
    UIView<_MKCalloutAccessoryView> * _externalLeftView;
    UIView<_MKCalloutAccessoryView> * _externalRightView;
    UIView<_MKCalloutAccessoryView> * _detailView;
    struct CGSize _preferredContentSize;
    float _maxWidth;
    char _shouldPositionTitleForMapsTransitionMovingSideways;
    _MKSmallCalloutPassthroughButton * _maskedContainerView;
    UIView * _unmaskedContainerView;
    MKCalloutBackgroundView * _calloutBackgroundView;
    unsigned int _mapDisplayStyle;
    UIView * _leftSpacerView;
    UIView * _rightSpacerView;
    NSMutableArray * _lastConstraints;
    char _initialDetailViewPositioning;
    char _initialLeftViewPositioning;
    char _initialRightViewPositioning;
}

@property (readonly, nonatomic) struct CGSize _preferredContentSize;
@property (retain, nonatomic) MKCalloutBackgroundView * calloutBackgroundView;
@property (nonatomic) unsigned int mapDisplayStyle;
@property (nonatomic) float maximumWidth;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * calloutTitle;
@property (copy, nonatomic) NSString * calloutSubtitle;
@property (retain, nonatomic) UIView * leftView;
@property (retain, nonatomic) UIView * rightView;
@property (retain, nonatomic) UIView * detailView;

- (void)_contentSizeCategoryDidChange:(NSDictionary *)arg0;
- (NSString *)calloutSubtitle;
- (void)setCalloutSubtitle:(NSString *)arg0 animated:(char)arg1;
- (void)setDetailView:(UIView *)arg0 animated:(char)arg1;
- (void)beginMapsTransitionMovingSideways;
- (UIView *)detailView;
- (MKCalloutBackgroundView *)calloutBackgroundView;
- (void)setCalloutBackgroundView:(MKCalloutBackgroundView *)arg0;
- (char)canDisplayCompleteTitleWhenExpanded;
- (void)setCalloutSubtitle:(NSString *)arg0;
- (void)setDetailView:(UIView *)arg0;
- (void)_updateAccessoryViewStyles;
- (NSString *)_subtitleLabel;
- (MKSmallCalloutView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)reset;
- (void)setMaximumWidth:(float)arg0;
- (float)maximumWidth;
- (struct CGSize)_preferredContentSize;
- (void)updateConstraints;
- (void)setLeftView:(UIView *)arg0 animated:(char)arg1;
- (void)setRightView:(UIView *)arg0 animated:(char)arg1;
- (void)setLeftView:(UIView *)arg0;
- (void)setRightView:(UIView *)arg0;
- (UIView *)leftView;
- (UIView *)rightView;
- (void)_updatePreferredContentSize;
- (void).cxx_destruct;
- (NSString *)calloutTitle;
- (void)setCalloutTitle:(NSString *)arg0;
- (unsigned int)mapDisplayStyle;
- (void)setMapDisplayStyle:(unsigned int)arg0;

@end
