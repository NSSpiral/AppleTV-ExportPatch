/* Runtime dump - UIClassicStatusBarView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIClassicStatusBarView : _UIScrollsToTopInitiatorView
{
    UIImageView * _backgroundView;
    UIImage * _image;
}

@property (retain, nonatomic) UIImage * image;

- (UIClassicStatusBarView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (UIImage *)image;

@end
