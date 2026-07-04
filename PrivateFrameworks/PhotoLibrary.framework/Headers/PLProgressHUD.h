/* Runtime dump - PLProgressHUD
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLProgressHUD : UIView
{
    _UIBackdropView * _backdropView;
    UIActivityIndicatorView * _activityIndicatorView;
    UILabel * _label;
    UIImageView * _checkmarkView;
    char _isShowing;
}

- (void)hide;
- (PLProgressHUD *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)setText:(NSString *)arg0;
- (void)showInView:(NSObject *)arg0;
- (void)done;

@end
