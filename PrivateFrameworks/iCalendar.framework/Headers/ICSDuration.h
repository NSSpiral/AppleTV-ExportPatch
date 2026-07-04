/* Runtime dump - ICSDuration
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSDuration : NSObject <NSCoding>
{
    double _duration;
}

+ (NSString *)generateDurationFromICSString:(NSString *)arg0;
+ (NSString *)durationFromICSString:(NSString *)arg0;
+ (NSString *)durationFromRFC2445UTF8String:(char *)arg0;

- (ICSDuration *)initWithWeeks:(int)arg0 days:(int)arg1 hours:(int)arg2 minutes:(int)arg3 seconds:(int)arg4;
- (char)isNegative;
- (ICSDuration *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (double)timeInterval;
- (NSDictionary *)ICSStringWithOptions:(unsigned int)arg0;
- (int)days;
- (int)hours;
- (void)_ICSStringWithOptions:(unsigned int)arg0 appendingToString:(NSString *)arg1;
- (int)weeks;
- (int)minutes;
- (int)seconds;

@end
