/* Runtime dump - ADProgressView
 * Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADProgressView : UIView
{
    UILabel * _elapsedTimeLabel;
    UILabel * _remainingTimeLabel;
    ADPrerollSlider * _slider;
}

@property (retain, nonatomic) UILabel * elapsedTimeLabel;
@property (retain, nonatomic) UILabel * remainingTimeLabel;
@property (retain, nonatomic) ADPrerollSlider * slider;

- (ADProgressView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setElapsedTime:(double)arg0 totalTime:(double)arg1;
- (void)setRemainingTimeLabel:(UILabel *)arg0;
- (UILabel *)remainingTimeLabel;
- (void)setSlider:(ADPrerollSlider *)arg0;
- (ADPrerollSlider *)slider;
- (UILabel *)elapsedTimeLabel;
- (void)setElapsedTimeLabel:(UILabel *)arg0;

@end
