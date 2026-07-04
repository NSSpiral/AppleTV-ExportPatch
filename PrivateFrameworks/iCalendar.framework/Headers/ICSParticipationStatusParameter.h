/* Runtime dump - ICSParticipationStatusParameter
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSParticipationStatusParameter : ICSPredefinedValue

+ (ICSParticipationStatusParameter *)participationStatusParameterFromCode:(int)arg0;
+ (NSString *)participationStatusParameterFromICSString:(NSString *)arg0;

- (void)_ICSStringWithOptions:(unsigned int)arg0 appendingToString:(NSString *)arg1;

@end
