/* Runtime dump - UIDatePicker
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDatePicker : UIControl <UIPickerViewScrollTesting, NSCoding>
{
    _UIDatePickerView * _pickerView;
    char _useCurrentDateDuringDecoding;
}

@property (nonatomic) char usesBlackChrome;
@property (nonatomic) char drawsBackground;
@property (nonatomic) char allowsZeroCountDownDuration;
@property (nonatomic) char allowsZeroTimeInterval;
@property (readonly, nonatomic) NSDate * dateUnderSelectionBar;
@property (readonly, nonatomic) float contentWidth;
@property (readonly, nonatomic) char isTimeIntervalMode;
@property (nonatomic) char useCurrentDateDuringDecoding;
@property (nonatomic) char _usesModernStyle;
@property (retain, nonatomic) UIColor * highlightColor;
@property (retain, nonatomic) UIColor * textColor;
@property (retain, nonatomic) UIColor * textShadowColor;
@property (nonatomic) double timeInterval;
@property (nonatomic) int datePickerMode;
@property (retain, nonatomic) NSLocale * locale;
@property (copy, nonatomic) NSCalendar * calendar;
@property (retain, nonatomic) NSTimeZone * timeZone;
@property (retain, nonatomic) NSDate * date;
@property (retain, nonatomic) NSDate * minimumDate;
@property (retain, nonatomic) NSDate * maximumDate;
@property (nonatomic) double countDownDuration;
@property (nonatomic) int minuteInterval;

+ (Class)_pickerViewClass;

- (UIDatePicker *)initWithFrame:(struct CGRect)arg0;
- (void)setBackgroundColor:(UIColor *)arg0;
- (UIDatePicker *)initWithCoder:(NSCoder *)arg0;
- (void)_populateArchivedSubviews:(NSMutableArray *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)_setTextColor:(UIColor *)arg0;
- (char)_drawsBackground;
- (char)_usesModernStyle;
- (void)setBounds:(struct CGRect)arg0;
- (UIColor *)_textColor;
- (void)_performScrollTest:(id /* block */)arg0 withIterations:(int)arg1 rowsToScroll:(int)arg2 inComponent:(int)arg3;
- (char)_contentHuggingDefault_isUsuallyFixedHeight;
- (char)_contentHuggingDefault_isUsuallyFixedWidth;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)_setDrawsBackground:(char)arg0;
- (void)_setUsesModernStyle:(char)arg0;
- (UIColor *)_highlightColor;
- (void)_setHighlightColor:(UIColor *)arg0;
- (UIColor *)_textShadowColor;
- (void)_setTextShadowColor:(UIColor *)arg0;
- (void)setTimeZone:(NSTimeZone *)arg0;
- (NSDate *)date;
- (void)awakeFromNib;
- (void)invalidateIntrinsicContentSize;
- (float)_contentWidth;
- (void)setDate:(NSDate *)arg0;
- (double)timeInterval;
- (void)setLocale:(NSLocale *)arg0;
- (int)hour;
- (void)setTimeInterval:(double)arg0;
- (void)_insertPickerView;
- (void)setDatePickerMode:(int)arg0;
- (void)_setLocale:(NSObject *)arg0;
- (void)setCalendar:(NSCalendar *)arg0;
- (void)setMinuteInterval:(int)arg0;
- (char)_isTimeIntervalMode;
- (void)setMinimumDate:(NSDate *)arg0;
- (void)setMaximumDate:(NSDate *)arg0;
- (void)_setUseCurrentDateDuringDecoding:(char)arg0;
- (char)_useCurrentDateDuringDecoding;
- (int)datePickerMode;
- (NSLocale *)_locale;
- (NSTimeZone *)timeZone;
- (NSCalendar *)calendar;
- (NSDate *)minimumDate;
- (NSDate *)maximumDate;
- (int)minuteInterval;
- (void)setDate:(NSDate *)arg0 animated:(char)arg1;
- (NSLocale *)locale;
- (double)countDownDuration;
- (void)setCountDownDuration:(double)arg0;
- (NSArray *)dateComponents;
- (void)setDateComponents:(NSArray *)arg0;
- (void)setStaggerTimeIntervals:(char)arg0;
- (void)setHighlightsToday:(char)arg0;
- (int)minute;
- (int)second;
- (void)setDate:(NSDate *)arg0 animate:(char)arg1;
- (void)_setHidesLabels:(char)arg0;
- (void)_setUsesBlackChrome:(char)arg0;
- (char)_usesBlackChrome;
- (char)_allowsZeroCountDownDuration;
- (void)_setAllowsZeroCountDownDuration:(char)arg0;
- (char)_allowsZeroTimeInterval;
- (void)_setAllowsZeroTimeInterval:(char)arg0;
- (void)_setHighlightsToday:(char)arg0;
- (NSDate *)_dateUnderSelectionBar;
- (id)_selectedTextForCalendarUnit:(unsigned int)arg0;
- (id)_labelTextForCalendarUnit:(unsigned int)arg0;

@end
