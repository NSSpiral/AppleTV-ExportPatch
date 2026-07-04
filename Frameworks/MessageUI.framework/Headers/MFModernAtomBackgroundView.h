/* Runtime dump - MFModernAtomBackgroundView
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFModernAtomBackgroundView : UIView
{
    UIView * _selectedView;
    unsigned int _selectionStyle;
    UIView * _separatorView;
    MFModernAtomView * _hostAtomView;
    int _separatorStyle;
    char _selected;
    float _scalingFactor;
}

@property (readonly, nonatomic) UIView * selectedView;
@property (readonly, nonatomic) UIView * separatorView;
@property (nonatomic) MFModernAtomView * hostAtomView;
@property (nonatomic) int separatorStyle;
@property (nonatomic) float scalingFactor;

- (void)setHostAtomView:(MFModernAtomView *)arg0;
- (void)setSelected:(char)arg0 animated:(char)arg1 style:(unsigned int)arg2;
- (float)separatorWidth;
- (UIView *)selectedView;
- (void)setScalingFactor:(float)arg0;
- (struct UIEdgeInsets)_backgroundBleedArea;
- (void)_setSelectionStyle:(unsigned int)arg0;
- (MFModernAtomView *)hostAtomView;
- (UIImage *)_chevronImage;
- (float)scalingFactor;
- (MFModernAtomBackgroundView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)invalidateIntrinsicContentSize;
- (void)tintColorDidChange;
- (void)setSeparatorStyle:(int)arg0;
- (char)isSelected;
- (int)separatorStyle;
- (UIView *)separatorView;

@end
