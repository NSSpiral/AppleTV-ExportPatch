/* Runtime dump - UIStatusBarActivityItemView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarActivityItemView : UIStatusBarItemView
{
    UIActivityIndicatorView * _activityIndicator;
    char _slowActivity;
    char _syncActivity;
    char _newsstandActivity;
}

- (void)dealloc;
- (void)setVisible:(char)arg0;
- (char)updateForNewData:(NSData *)arg0 actions:(int)arg1;
- (float)updateContentsAndWidth;
- (float)shadowPadding;
- (void)_stopAnimating;
- (void)_startAnimating;
- (int)_activityIndicatorStyle;

@end
