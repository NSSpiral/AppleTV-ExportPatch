/* Runtime dump - MKCalloutBackgroundView
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKCalloutBackgroundView : UIPopoverBackgroundView
{
    float _arrowOffset;
    unsigned int _arrowDirection;
    UIView * _containerView;
    UIView * _baseBorderView;
    _MKCalloutBackgroundMaskView * _mainMaskView;
    NSMutableArray * _vendedMaskViews;
    unsigned int _mapDisplayStyle;
    UIImageView * _currentArrowShadow;
}

@property (nonatomic) unsigned int mapDisplayStyle;
@property (readonly, nonatomic) UIColor * calloutBackgroundColor;

+ (void)setBeingCreatedForSmallCalloutController:(BRController *)arg0;
+ (char)wantsDefaultContentAppearance;
+ (float)arrowHeight;
+ (float)arrowBase;
+ (struct UIEdgeInsets)contentViewInsets;
+ (float)_contentViewCornerRadiusForArrowDirection:(unsigned int)arg0;

- (CALayer *)newMaskLayer;
- (UIColor *)calloutBackgroundColor;
- (void)_setupViews;
- (void)_layoutMaskView:(NSObject *)arg0 withArrowShadow:(char)arg1;
- (void)_retractUpDownArrow;
- (void)_extendLeftRightArrow;
- (MKCalloutBackgroundView *)initWithFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (unsigned int)arrowDirection;
- (void)setArrowDirection:(unsigned int)arg0;
- (void).cxx_destruct;
- (NSString *)_shadowPath;
- (void)setArrowOffset:(float)arg0;
- (float)arrowOffset;
- (struct UIEdgeInsets)_contentViewInsets;
- (void)_showArrow;
- (void)_hideArrow;
- (unsigned int)mapDisplayStyle;
- (void)setMapDisplayStyle:(unsigned int)arg0;

@end
