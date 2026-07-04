/* Runtime dump - ICSBusyStatusValue
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSBusyStatusValue : ICSPredefinedValue

+ (ICSBusyStatusValue *)busyStatusTypeFromCode:(int)arg0;
+ (NSString *)busyStatusValueFromICSString:(NSString *)arg0;

- (void)_ICSStringWithOptions:(unsigned int)arg0 appendingToString:(NSString *)arg1;

@end
