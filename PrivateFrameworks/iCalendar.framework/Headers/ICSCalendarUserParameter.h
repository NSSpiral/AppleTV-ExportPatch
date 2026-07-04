/* Runtime dump - ICSCalendarUserParameter
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSCalendarUserParameter : ICSPredefinedValue

+ (ICSCalendarUserParameter *)calendarUserTypeParameterFromCode:(int)arg0;
+ (NSString *)calendarUserTypeParameterFromICSString:(NSString *)arg0;

- (void)_ICSStringWithOptions:(unsigned int)arg0 appendingToString:(NSString *)arg1;

@end
