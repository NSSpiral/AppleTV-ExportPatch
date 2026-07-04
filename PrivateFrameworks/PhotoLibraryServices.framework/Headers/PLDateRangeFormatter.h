/* Runtime dump - PLDateRangeFormatter
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDateRangeFormatter : NSObject
{
    char _autoUpdateOnChanges;
    char _includeDayNumbers;
    char _includeDayNumbersWhenMonthsDiffer;
    char _useRelativeDayFormatting;
    char _useShortMonths;
    char _useShortDaysInRanges;
    char _useTime;
    char _yearOnly;
    char _timeOnly;
    NSDateFormatter * __sameDayDateFormatter;
    NSDateFormatter * __sameDayNoYearDateFormatter;
    NSDateFormatter * __dayOfTheWeekDateFormatter;
    NSDateFormatter * __relativeDateFormatterDay;
    NSDateFormatter * __yearDateFormatter;
    struct UDateIntervalFormat * __monthDayIntervalFormat;
    struct UDateIntervalFormat * __monthDayNoYearIntervalFormat;
    struct UDateIntervalFormat * __differentMonthDayIntervalFormat;
    struct UDateIntervalFormat * __differentMonthDayNoYearIntervalFormat;
    struct UDateIntervalFormat * __dayOfTheWeekIntervalFormat;
    struct UDateIntervalFormat * __timeIntervalFormat;
    struct UDateIntervalFormat * __yearIntervalFormat;
    NSLocale * __currentLocale;
}

@property (nonatomic) char includeDayNumbers;
@property (nonatomic) char includeDayNumbersWhenMonthsDiffer;
@property (nonatomic) char useRelativeDayFormatting;
@property (nonatomic) char useShortMonths;
@property (nonatomic) char useShortDaysInRanges;
@property (nonatomic) char useTime;
@property (nonatomic) char yearOnly;
@property (nonatomic) char timeOnly;
@property (nonatomic) char autoUpdateOnChanges;
@property (retain, nonatomic) NSLocale * _currentLocale;
@property (readonly, retain, nonatomic) NSDateFormatter * _sameDayDateFormatter;
@property (readonly, retain, nonatomic) NSDateFormatter * _sameDayNoYearDateFormatter;
@property (readonly, retain, nonatomic) NSDateFormatter * _dayOfTheWeekDateFormatter;
@property (readonly, retain, nonatomic) NSDateFormatter * _yearDateFormatter;
@property (readonly, retain, nonatomic) NSDateFormatter * _relativeDateFormatterDay;
@property (readonly, nonatomic) struct UDateIntervalFormat * _monthDayIntervalFormat;
@property (readonly, nonatomic) struct UDateIntervalFormat * _monthDayNoYearIntervalFormat;
@property (readonly, nonatomic) struct UDateIntervalFormat * _differentMonthDayIntervalFormat;
@property (readonly, nonatomic) struct UDateIntervalFormat * _differentMonthDayNoYearIntervalFormat;
@property (readonly, nonatomic) struct UDateIntervalFormat * _dayOfTheWeekIntervalFormat;
@property (readonly, nonatomic) struct UDateIntervalFormat * _timeIntervalFormat;
@property (readonly, nonatomic) struct UDateIntervalFormat * _yearIntervalFormat;

+ (void)_dumpAllDateCombinationsWithFormatters;

- (void)dealloc;
- (PLDateRangeFormatter *)init;
- (NSDateFormatter *)_dayOfTheWeekDateFormatter;
- (void)configureForFormatPreset:(unsigned int)arg0;
- (void)_setCurrentLocale:(NSObject *)arg0;
- (void)_releaseUDateFormatter:(struct UDateIntervalFormat *)arg0;
- (char)useShortMonths;
- (char)includeDayNumbers;
- (char)includeDayNumbersWhenMonthsDiffer;
- (id)_sameMonthTemplate;
- (id)_dayTemplate;
- (char)useRelativeDayFormatting;
- (struct UDateIntervalFormat *)_newUDateFormatterForLocale:(NSObject *)arg0 template:(IKMenuBarTemplate *)arg1;
- (id)_dayDifferentMonthsTemplate;
- (char)useShortDaysInRanges;
- (char)_date:(NSDate *)arg0 isWithinDaysInThePast:(int)arg1 fromCurrentDate:(NSDate *)arg2;
- (char)_date:(NSDate *)arg0 isWithinDaysInThePast:(int)arg1;
- (struct UDateIntervalFormat *)_dayOfTheWeekIntervalFormat;
- (NSObject *)_formattedDateWithUDateFormatter:(struct UDateIntervalFormat *)arg0 startDate:(NSDate *)arg1 endDate:(NSDate *)arg2;
- (NSDateFormatter *)_relativeDateFormatterDay;
- (char)yearOnly;
- (struct UDateIntervalFormat *)_yearIntervalFormat;
- (struct UDateIntervalFormat *)_differentMonthDayNoYearIntervalFormat;
- (struct UDateIntervalFormat *)_differentMonthDayIntervalFormat;
- (struct UDateIntervalFormat *)_monthDayNoYearIntervalFormat;
- (struct UDateIntervalFormat *)_monthDayIntervalFormat;
- (NSDateFormatter *)_yearDateFormatter;
- (struct UDateIntervalFormat *)_timeIntervalFormat;
- (char)timeOnly;
- (NSDateFormatter *)_sameDayNoYearDateFormatter;
- (NSDateFormatter *)_sameDayDateFormatter;
- (NSDate *)formattedDateRangeWithStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1 currentDate:(NSDate *)arg2;
- (NSDate *)formattedDateRangeWithStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1;
- (void)_significantTimeChange:(NSDictionary *)arg0;
- (void)_invalidateFormats;
- (void)_postChangeNotification;
- (void)setIncludeDayNumbers:(char)arg0;
- (void)setIncludeDayNumbersWhenMonthsDiffer:(char)arg0;
- (void)setUseRelativeDayFormatting:(char)arg0;
- (void)setUseShortMonths:(char)arg0;
- (void)setUseShortDaysInRanges:(char)arg0;
- (void)setUseTime:(char)arg0;
- (void)setYearOnly:(char)arg0;
- (void)setTimeOnly:(char)arg0;
- (NSDate *)_dateCombinationWithStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1 currentDate:(NSDate *)arg2 dateFormatter:(NSObject *)arg3;
- (void)_updateDateComponents:(NSArray *)arg0 withValueValue:(int)arg1 forCalendarUnit:(unsigned int)arg2;
- (NSDate *)_dateCombinationAfterUpdatingCurrentDateWithStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1 currentDate:(NSDate *)arg2 dateFormatter:(NSObject *)arg3 calendarUnit:(unsigned int)arg4 value:(int)arg5;
- (NSDate *)_dateCombinationAfterUpdatingStartAndEndDatesWithStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1 currentDate:(NSDate *)arg2 dateFormatter:(NSObject *)arg3 calendarUnit:(unsigned int)arg4 value:(int)arg5;
- (NSDate *)_relativeCombinationsForDate:(NSDate *)arg0;
- (void)_dumpDateCombinations;
- (NSDate *)formattedDate:(NSDate *)arg0;
- (void)setAutoUpdateOnChanges:(char)arg0;
- (char)autoUpdateOnChanges;
- (void)_dumpDateCombinationWithStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1 currentDate:(NSDate *)arg2 dateFormatter:(NSObject *)arg3;
- (void)_updateCurrentDateAndDumpDateCombinationWithStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1 currentDate:(NSDate *)arg2 dateFormatter:(NSObject *)arg3 calendarUnit:(unsigned int)arg4 value:(int)arg5;
- (void)_updateStartAndEndDatesAndDumpDateCombinationWithStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1 currentDate:(NSDate *)arg2 dateFormatter:(NSObject *)arg3 calendarUnit:(unsigned int)arg4 value:(int)arg5;
- (char)useTime;
- (NSLocale *)_currentLocale;
- (void)_localeChanged:(NSNotification *)arg0;

@end
