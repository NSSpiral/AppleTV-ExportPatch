/* Runtime dump - ICSStatusValue
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSStatusValue : ICSPredefinedValue
{
    NSString * _statusString;
}

@property (retain) NSString * statusString;

+ (NSString *)statusValueFromICSString:(NSString *)arg0;
+ (ICSStatusValue *)statusTypeFromCode:(int)arg0 statusString:(NSString *)arg1;
+ (ICSStatusValue *)statusTypeFromCode:(int)arg0;

- (void)dealloc;
- (NSString *)statusString;
- (void)setStatusString:(NSString *)arg0;
- (void)_ICSStringWithOptions:(unsigned int)arg0 appendingToString:(NSString *)arg1;

@end
