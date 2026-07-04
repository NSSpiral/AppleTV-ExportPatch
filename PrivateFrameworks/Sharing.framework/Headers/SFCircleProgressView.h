/* Runtime dump - SFCircleProgressView
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCircleProgressView : UIView

@property (nonatomic) int progressStartPoint;
@property (readonly, nonatomic) UIColor * progressColor;
@property (nonatomic) float progressLineWidth;
@property (nonatomic) char showProgressTray;
@property (nonatomic) float progress;

+ (Class)layerClass;

- (SFCircleProgressView *)initWithFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void)setProgress:(float)arg0;
- (float)progress;
- (void)setProgressStartPoint:(int)arg0;
- (void)setProgressColor:(UIColor *)arg0;
- (void)setProgressLineWidth:(float)arg0;
- (void)setShowProgressTray:(char)arg0;
- (int)progressStartPoint;
- (UIColor *)progressColor;
- (float)progressLineWidth;
- (char)showProgressTray;
- (void)setProgress:(float)arg0 animated:(char)arg1 forced:(char)arg2 completion:(id /* block */)arg3;
- (float)progressPresentationValue;
- (void)setProgress:(float)arg0 animated:(char)arg1 completion:(id /* block */)arg2;
- (void)animateProgressCompletedWithCompletion:(id /* block */)arg0;

@end
