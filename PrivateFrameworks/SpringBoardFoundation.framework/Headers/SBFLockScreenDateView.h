/* Runtime dump - SBFLockScreenDateView
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFLockScreenDateView : UIView
{
    UILabel * _timeLabel;
    UILabel * _dateLabel;
    char _useLegibilityLabels;
    _UILegibilityLabel * _legibilityTimeLabel;
    _UILegibilityLabel * _legibilityDateLabel;
    float _timeAlpha;
    float _dateAlpha;
    NSString * _customSubtitleText;
    UIColor * _customSubtitleColor;
    NSDate * _date;
    <SBFLockScreenDateFormatter> * _formatter;
    _UILegibilitySettings * _legibilitySettings;
    float _timeStrength;
    float _dateStrength;
    UIColor * _textColor;
    float _dateAlphaPercentage;
}

@property (nonatomic) char dateHidden;
@property (retain, nonatomic) NSDate * date;
@property (retain, nonatomic) <SBFLockScreenDateFormatter> * formatter;
@property (retain, nonatomic) _UILegibilitySettings * legibilitySettings;
@property (nonatomic) float timeStrength;
@property (nonatomic) float dateStrength;
@property (retain, nonatomic) UIColor * textColor;
@property (nonatomic) float dateAlphaPercentage;

+ (float)defaultHeight;

- (<SBFLockScreenDateFormatter> *)formatter;
- (void)setFormatter:(<SBFLockScreenDateFormatter> *)arg0;
- (SBFLockScreenDateView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (NSDate *)date;
- (void)setTextColor:(UIColor *)arg0;
- (UIColor *)textColor;
- (void)setDate:(NSDate *)arg0;
- (void)setLegibilitySettings:(_UILegibilitySettings *)arg0;
- (_UILegibilitySettings *)legibilitySettings;
- (void)_addLabels;
- (void)_useLegibilityLabels:(char)arg0;
- (void)updateFormat;
- (NSString *)_dateText;
- (void)_updateLabels;
- (void)_updateLegibilityLabelsWithUpdatedDateString:(char)arg0;
- (UIColor *)_dateColor;
- (void)_setDateAlpha:(float)arg0;
- (UIFont *)_timeFont;
- (UIFont *)_dateFont;
- (void)_updateLabelAlpha;
- (float)_effectiveDateAlpha;
- (float)dateAlphaPercentage;
- (void)_layoutTimeLabel;
- (void)_layoutDateLabel;
- (void)setDateStrength:(float)arg0;
- (void)setTimeStrength:(float)arg0;
- (void)setDateAlphaPercentage:(float)arg0;
- (char)isDateHidden;
- (void)setDateHidden:(char)arg0;
- (void)setContentAlpha:(float)arg0 withDateVisible:(char)arg1;
- (void)setCustomSubtitleText:(NSString *)arg0 withColor:(UIColor *)arg1;
- (float)timeBaselineOffsetFromOrigin;
- (float)dateBaselineOffsetFromOrigin;
- (float)timeStrength;
- (float)dateStrength;

@end
