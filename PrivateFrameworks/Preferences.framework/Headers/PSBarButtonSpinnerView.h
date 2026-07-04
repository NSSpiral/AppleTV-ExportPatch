/* Runtime dump - PSBarButtonSpinnerView
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSBarButtonSpinnerView : UIBarButtonItem
{
    UIActivityIndicatorView * _spinner;
}

- (void)dealloc;
- (PSBarButtonSpinnerView *)init;
- (void)stopAnimating;
- (void)startAnimating;

@end
