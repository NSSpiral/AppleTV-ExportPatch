/* Runtime dump - ICSTransparencyValue
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSTransparencyValue : ICSPredefinedValue

+ (ICSTransparencyValue *)transparencyTypeFromCode:(int)arg0;
+ (NSString *)transparencyValueFromICSString:(NSString *)arg0;

- (void)_ICSStringWithOptions:(unsigned int)arg0 appendingToString:(NSString *)arg1;

@end
