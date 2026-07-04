/* Runtime dump - UIDateLabel
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDateLabel : UILabel
{
    char _forceTimeOnly;
    NSDate * _date;
    char _boldForAllLocales;
    NSDate * _yesterday;
    NSDate * _today;
    NSDate * _noon;
    NSDate * _tomorrow;
    NSDate * _previousWeek;
    UIFont * _timeDesignatorFont;
    NSCalendar * _calendar;
    char _shouldRecomputeText;
    float _paddingFromTimeToDesignator;
}

@property (retain, nonatomic) NSDate * date;
@property (nonatomic) double timeInterval;
@property (readonly, nonatomic) UIFont * timeDesignatorFont;
@property (readonly, nonatomic) NSString * timeDesignator;
@property (nonatomic) char forceTimeOnly;
@property (nonatomic) char boldForAllLocales;
@property (nonatomic) float paddingFromTimeToDesignator;
@property (readonly, nonatomic) char use24HourTime;
@property (readonly, nonatomic) char timeDesignatorAppearsBeforeTime;
@property (readonly, nonatomic) struct CGSize timeDesignatorSize;
@property (readonly, nonatomic) NSString * dateString;
@property (nonatomic) char shouldRecomputeText;

+ (UIDateLabel *)defaultFont;
+ (NSObject *)_timeOnlyDateFormatter;
+ (NSObject *)_relativeDateFormatter;
+ (NSObject *)_weekdayDateFormatter;
+ (NSDateFormatter *)_dateFormatter;
+ (UIDateLabel *)_timeFormatWithoutDesignator;
+ (NSString *)amString;
+ (NSString *)pmString;

- (UIDateLabel *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)invalidate;
- (NSDate *)date;
- (NSString *)text;
- (UIFont *)font;
- (NSString *)_stringDrawingContext;
- (void)drawTextInRect:(struct CGRect)arg0;
- (void)setShouldRecomputeText:(char)arg0;
- (void)_recomputeTextIfNecessary;
- (struct CGSize)timeDesignatorSize;
- (NSString *)timeDesignator;
- (char)timeDesignatorAppearsBeforeTime;
- (UIFont *)timeDesignatorFont;
- (NSCalendar *)_calendar;
- (NSDate *)_todayDate;
- (NSDate *)_dateWithDayDiffFromToday:(int)arg0;
- (void)setDate:(NSDate *)arg0;
- (char)shouldRecomputeText;
- (NSString *)_dateString;
- (char)boldForAllLocales;
- (void)_didUpdateDate;
- (double)timeInterval;
- (double)_today;
- (double)_tomorrow;
- (double)_yesterday;
- (double)_lastWeek;
- (char)use24HourTime;
- (double)_noon;
- (void)setForceTimeOnly:(char)arg0;
- (void)setBoldForAllLocales:(char)arg0;
- (void)setTimeInterval:(double)arg0;
- (char)forceTimeOnly;
- (float)paddingFromTimeToDesignator;
- (void)setPaddingFromTimeToDesignator:(float)arg0;

@end
