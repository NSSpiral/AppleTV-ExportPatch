/* Runtime dump - ICSScheduleStatusParameter
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSScheduleStatusParameter : ICSPredefinedValue

+ (ICSScheduleStatusParameter *)scheduleStatusParameterFromCode:(int)arg0;
+ (NSString *)scheduleStatusParameterFromICSString:(NSString *)arg0;

- (void)_ICSStringWithOptions:(unsigned int)arg0 appendingToString:(NSString *)arg1;

@end
