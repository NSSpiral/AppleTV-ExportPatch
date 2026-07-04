/* Runtime dump - UIProgressHUD
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIProgressHUD : UIView
{
    UIProgressIndicator * _progressIndicator;
    UILabel * _progressMessage;
    UIImageView * _doneView;
    UIWindow * _parentWindow;
    struct ? _progressHUDFlags;
}

- (void)hide;
- (void)show:(char)arg0;
- (UIProgressHUD *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void)setText:(NSString *)arg0;
- (UIProgressHUD *)initWithWindow:(NSObject *)arg0;
- (void)setFontSize:(int)arg0;
- (UIProgressIndicator *)_progressIndicator;
- (void)setShowsText:(char)arg0;
- (void)showInView:(NSObject *)arg0;
- (void)done;

@end
