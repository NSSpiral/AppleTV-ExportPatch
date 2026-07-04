/* Runtime dump - UIPrinterSetupConnectingView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterSetupConnectingView : UIView
{
    UILabel * _label;
    UIActivityIndicatorView * _activityIndicator;
    double _presentationTime;
}

@property (retain, nonatomic) UILabel * label;
@property (retain, nonatomic) UIActivityIndicatorView * activityIndicator;
@property (nonatomic) double presentationTime;

- (UIPrinterSetupConnectingView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(UIView *)arg0;
- (UILabel *)label;
- (void)setLabel:(UILabel *)arg0;
- (void)setMessage:(NSString *)arg0 active:(char)arg1;
- (void)setActivityIndicator:(UIActivityIndicatorView *)arg0;
- (void)presentView;
- (UIActivityIndicatorView *)activityIndicator;
- (double)presentationTime;
- (void)setPresentationTime:(double)arg0;

@end
