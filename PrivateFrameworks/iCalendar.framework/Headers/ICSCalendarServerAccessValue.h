/* Runtime dump - ICSCalendarServerAccessValue
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSCalendarServerAccessValue : ICSPredefinedValue

+ (NSString *)calendarServerAccessFromICSString:(NSString *)arg0;
+ (ICSCalendarServerAccessValue *)calendarServerAccessFromCode:(int)arg0;

- (void)_ICSStringWithOptions:(unsigned int)arg0 appendingToString:(NSString *)arg1;

@end
