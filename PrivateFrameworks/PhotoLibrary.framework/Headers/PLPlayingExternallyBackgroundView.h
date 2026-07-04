/* Runtime dump - PLPlayingExternallyBackgroundView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPlayingExternallyBackgroundView : UIView
{
    UILabel * _titleLabel;
    UILabel * _messageLabel;
    UIImageView * _imageView;
    struct UIEdgeInsets _edgeInsets;
}

@property (nonatomic) struct UIEdgeInsets edgeInsets;

- (PLPlayingExternallyBackgroundView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setTitle:(NSString *)arg0;
- (struct UIEdgeInsets)edgeInsets;
- (void)setMessage:(NSString *)arg0;
- (void)setEdgeInsets:(struct UIEdgeInsets)arg0;
- (NSString *)_newLabelWithText:(NSString *)arg0 withFont:(UIFont *)arg1;
- (void)_updateSizeForLabel:(NSString *)arg0;

@end
