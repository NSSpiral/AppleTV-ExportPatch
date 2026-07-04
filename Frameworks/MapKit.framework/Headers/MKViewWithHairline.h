/* Runtime dump - MKViewWithHairline
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKViewWithHairline : UIView
{
    UIView * _bottomHairline;
    UIView * _topHairline;
    UIColor * _hairlineColor;
    float _leftHairlineInset;
}

@property (retain, nonatomic) UIColor * hairlineColor;
@property (nonatomic) float leftHairlineInset;
@property (nonatomic) char topHairlineHidden;
@property (nonatomic) char bottomHairlineHidden;

- (float)leftHairlineInset;
- (void)setHairlineColor:(UIColor *)arg0;
- (void)setLeftHairlineInset:(float)arg0;
- (void)setTopHairlineHidden:(char)arg0;
- (void)setBottomHairlineHidden:(char)arg0;
- (char)isTopHairlineHidden;
- (char)isBottomHairlineHidden;
- (UIColor *)hairlineColor;
- (MKViewWithHairline *)initWithFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
