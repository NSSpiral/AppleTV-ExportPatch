/* Runtime dump - RUISpinnerView
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUISpinnerView : RUIElement
{
    UIView * _view;
    UIActivityIndicatorView * _spinner;
    UILabel * _label;
    RUIObjectModel * _objectModel;
    UIColor * _spinnerColor;
}

@property (weak, nonatomic) RUIObjectModel * objectModel;
@property (retain, nonatomic) UIColor * spinnerColor;

- (void)viewWillAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void).cxx_destruct;
- (RUIObjectModel *)objectModel;
- (void)setObjectModel:(RUIObjectModel *)arg0;
- (UIActivityIndicatorView *)spinnerView;
- (void)viewDidLayout;
- (UIColor *)spinnerColor;
- (void)setSpinnerColor:(UIColor *)arg0;

@end
