/* Runtime dump - UIAlertButton
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlertButton : UIButton
{
    float _imageOffset;
    char _isNewStyle;
    UIImageView * _highlightView;
}

@property (nonatomic) float imageOffset;
@property (readonly) UIImageView * highlightView;
@property (retain, nonatomic) UIImage * highlightImage;
@property (nonatomic) char isNewStyle;

- (void)dealloc;
- (void)layoutSubviews;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (void)setEnabled:(char)arg0;
- (UIImage *)image;
- (void)focusedViewDidChange;
- (char)canBecomeFocused;
- (void)setImage:(UIImage *)arg0 forState:(unsigned int)arg1;
- (UIAlertButton *)initWithTitle:(NSString *)arg0;
- (void)setHighlighted:(char)arg0;
- (UIImageView *)highlightView;
- (void)_transitionHighlightViewToHighlighted:(char)arg0;
- (void)setHighlightImage:(UIImage *)arg0;
- (UIImage *)highlightImage;
- (void)setIsNewStyle:(char)arg0;
- (float)imageOffset;
- (void)setImageOffset:(float)arg0;
- (char)isNewStyle;

@end
