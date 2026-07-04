/* Runtime dump - ICSDate
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSDate : ICSProperty

@property (retain, nonatomic) NSString * tzid;

- (ICSDate *)initWithValue:(NSValue *)arg0;
- (char)hasFloatingTimeZone;
- (ICSDate *)initWithYear:(int)arg0 month:(int)arg1 day:(int)arg2 hour:(int)arg3 minute:(int)arg4 second:(int)arg5;
- (NSString *)tzid;
- (ICSDate *)initWithYear:(int)arg0 month:(int)arg1 day:(int)arg2;
- (ICSDate *)initWithYear:(int)arg0 month:(int)arg1 day:(int)arg2 hour:(int)arg3 minute:(int)arg4 second:(int)arg5 timeZone:(NSTimeZone *)arg6;
- (char)hasTimeComponent;
- (NSString *)description;
- (NSArray *)components;
- (NSString *)parametersToIncludeForChecksumVersion:(int)arg0;
- (void)setTzid:(NSString *)arg0;

@end
