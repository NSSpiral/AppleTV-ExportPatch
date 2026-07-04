/* Runtime dump - ABLabelViewWithVariablePositioning
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABLabelViewWithVariablePositioning : UIView
{
    UILabel * _label;
    float _topPadding;
    float _bottomPadding;
    float _horizontalPadding;
}

@property (nonatomic) float topPadding;
@property (nonatomic) float bottomPadding;
@property (nonatomic) float horizontalPadding;

- (void)setLabelText:(NSString *)arg0;
- (float)topPadding;
- (float)bottomPadding;
- (void)setLabelFont:(UIFont *)arg0;
- (void)setLabelTextColor:(UIColor *)arg0;
- (void)setLabelShadowColor:(UIColor *)arg0;
- (void)setLabelShadowOffset:(struct CGSize)arg0;
- (void)setTopPadding:(float)arg0;
- (void)setBottomPadding:(float)arg0;
- (ABLabelViewWithVariablePositioning *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)setHorizontalPadding:(float)arg0;
- (float)horizontalPadding;

@end
