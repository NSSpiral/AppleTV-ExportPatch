/* Runtime dump - RUITableHeaderView
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUITableHeaderView : UIView
{
    UILabel * _titleLabel;
    struct UIEdgeInsets _titleLabelPadding;
}

@property (readonly, nonatomic) UILabel * titleLabel;
@property (nonatomic) struct UIEdgeInsets titleLabelPadding;

- (RUITableHeaderView *)initWithFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (UILabel *)titleLabel;
- (void).cxx_destruct;
- (void)setTitleLabelPadding:(struct UIEdgeInsets)arg0;
- (struct UIEdgeInsets)titleLabelPadding;

@end
