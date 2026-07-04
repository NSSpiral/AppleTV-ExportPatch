/* Runtime dump - ICSActionValue
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSActionValue : ICSPredefinedValue

+ (ICSActionValue *)actionParameterFromCode:(int)arg0;
+ (NSString *)actionValueFromICSString:(NSString *)arg0;

- (void)_ICSStringWithOptions:(unsigned int)arg0 appendingToString:(NSString *)arg1;

@end
