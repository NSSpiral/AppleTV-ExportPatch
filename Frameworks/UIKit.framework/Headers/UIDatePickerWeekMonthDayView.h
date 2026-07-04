/* Runtime dump - UIDatePickerWeekMonthDayView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDatePickerWeekMonthDayView : UIView
{
    struct ? _datePickerWeekMonthDayViewFlags;
    char _isModern;
    UILabel * _dateLabel;
    UILabel * _weekdayLabel;
    NSString * _formattedDateString;
    float _weekdayWidth;
}

@property (readonly, nonatomic) UILabel * dateLabel;
@property (readonly, nonatomic) UILabel * weekdayLabel;
@property (copy, nonatomic) NSString * formattedDateString;
@property (nonatomic) float weekdayWidth;
@property (nonatomic) char weekdayLast;
@property (nonatomic) char isModern;

- (UIDatePickerWeekMonthDayView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (char)_canBeReusedInPickerView;
- (UILabel *)dateLabel;
- (UILabel *)weekdayLabel;
- (char)isModern;
- (void)setIsModern:(char)arg0;
- (void)setWeekdayWidth:(float)arg0;
- (char)weekdayLast;
- (void)setWeekdayLast:(char)arg0;
- (NSString *)formattedDateString;
- (void)setFormattedDateString:(NSString *)arg0;
- (float)weekdayWidth;

@end
