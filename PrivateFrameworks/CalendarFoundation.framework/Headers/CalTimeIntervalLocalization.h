/* Runtime dump - CalTimeIntervalLocalization
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalTimeIntervalLocalization : NSObject

+ (NSNumber *)_localizedTimeStringForTimedEventDuration:(double)arg0 abbreviate:(char)arg1;
+ (NSString *)_localizedStringWithTimeString:(NSString *)arg0 rawDuration:(double)arg1 options:(unsigned int)arg2;
+ (NSNumber *)_localizedTimeStringForAllDayEventDuration:(double)arg0 includeAlert:(char)arg1;
+ (void)_calculateDurations:(id)arg0 timeUnits:(id)arg1 forDuration:(double)arg2 allDay:(char)arg3 abbreviate:(char)arg4;
+ (CalTimeIntervalLocalization *)_stringWithDurations:(id)arg0 timeUnits:(id)arg1;
+ (void)_calculateDurations:(id)arg0 timeUnits:(id)arg1 forDuration:(double)arg2 allDay:(char)arg3 dayDuration:(id *)arg4 hourDuration:(id *)arg5 minuteDuration:(id *)arg6 secondDuration:(id *)arg7 abbreviate:(char)arg8;
+ (CalTimeIntervalLocalization *)localizedStringForInterval:(double)arg0 withOptions:(unsigned int)arg1;

@end
