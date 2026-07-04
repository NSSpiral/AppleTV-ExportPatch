/* Runtime dump - AVLoadingIndicatorView
 * Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVLoadingIndicatorView : UIView
{
    UIActivityIndicatorView * _activityIndicatorView;
    UILabel * _label;
}

- (AVLoadingIndicatorView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setHidden:(char)arg0;
- (void)tintColorDidChange;
- (void)_setDrawsAsBackdropOverlay:(char)arg0;
- (AVLoadingIndicatorView *)initWithFrame:(struct CGRect)arg0 style:(struct CGSize)arg1;
- (void).cxx_destruct;

@end
