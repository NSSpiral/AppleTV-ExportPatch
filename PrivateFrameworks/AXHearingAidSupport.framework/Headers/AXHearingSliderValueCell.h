/* Runtime dump - AXHearingSliderValueCell
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHearingSliderValueCell : PSTableCell
{
    UIView * _leftView;
    UISlider * _slider;
    UILabel * _valueLabel;
    NSNumberFormatter * _numberFormatter;
    float _sliderMargin;
    float _valueWidth;
}

- (void)dealloc;
- (void)layoutSubviews;
- (NSString *)description;
- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (void)willMoveToSuperview:(UIView *)arg0;
- (NSString *)accessibilityLabel;
- (NSString *)accessibilityValue;
- (NSString *)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (char)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (void)sliderValueDidChange:(NSDictionary *)arg0;
- (void)updateValue;
- (AXHearingSliderValueCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1 specifier:(PSSpecifier *)arg2;

@end
