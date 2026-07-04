/* Runtime dump - QLGenericView
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLGenericView : UIView
{
    UIView * _containerView;
    UIImageView * _iconView;
    UILabel * _titleLabel;
    UILabel * _subtitleLabel;
    UIButton * _showArchiveContentButton;
    NSError * _error;
    <QLGenericViewDelegate> * delegate;
}

@property (copy) NSString * title;
@property (copy) NSString * subtitle;
@property (copy) NSAttributedString * attributedSubtitle;
@property char showArchiveButton;
@property <QLGenericViewDelegate> * delegate;

- (void)showArchiveContents:(id)arg0;
- (void)setShowArchiveButton:(char)arg0;
- (void)_updateContainerFrameForTraitCollection:(id)arg0;
- (void)setAttributedSubtitle:(NSAttributedString *)arg0;
- (NSAttributedString *)attributedSubtitle;
- (char)showArchiveButton;
- (QLGenericView *)initWithFrame:(struct CGRect)arg0;
- (void)setDelegate:(<QLGenericViewDelegate> *)arg0;
- (void)layoutSubviews;
- (void)setTitle:(NSString *)arg0;
- (<QLGenericViewDelegate> *)delegate;
- (NSString *)title;
- (NSString *)subtitle;
- (void)setSubtitle:(NSString *)arg0;

@end
