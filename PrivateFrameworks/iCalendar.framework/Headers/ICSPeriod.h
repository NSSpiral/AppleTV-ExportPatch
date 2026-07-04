/* Runtime dump - ICSPeriod
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSPeriod : NSObject <NSCoding>
{
    ICSDateValue * _start;
    ICSDateValue * _end;
    ICSDuration * _duration;
}

- (char)isDurationBased;
- (void)dealloc;
- (ICSPeriod *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (ICSDuration *)duration;
- (ICSDateValue *)start;
- (ICSDateValue *)end;
- (void)_ICSStringWithOptions:(unsigned int)arg0 appendingToString:(NSString *)arg1;
- (ICSPeriod *)initWithStart:(ICSDateValue *)arg0 end:(ICSDateValue *)arg1;
- (ICSPeriod *)initWithStart:(ICSDateValue *)arg0 duration:(ICSDuration *)arg1;
- (ICSPeriod *)initWithStart:(ICSDateValue *)arg0;

@end
