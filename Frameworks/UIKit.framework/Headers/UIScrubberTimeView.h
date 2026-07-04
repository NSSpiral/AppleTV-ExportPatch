/* Runtime dump - UIScrubberTimeView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScrubberTimeView : UIView
{
    NSString * _time;
    UIColor * _timeColor;
    UIColor * _timeShadowColor;
    id _align;
}

- (UIScrubberTimeView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)setTimeColor:(UIColor *)arg0;
- (void)setTimeShadowColor:(UIColor *)arg0;
- (void)setTime:(NSString *)arg0;
- (NSString *)time;

@end
