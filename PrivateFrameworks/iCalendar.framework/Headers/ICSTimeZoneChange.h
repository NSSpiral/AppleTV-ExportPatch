/* Runtime dump - ICSTimeZoneChange
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSTimeZoneChange : NSObject
{
    double _interval;
    int _tzOffsetTo;
}

- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (int)compare:(NSObject *)arg0;
- (double)interval;
- (int)tzOffsetTo;
- (char)isCloseTo:(id)arg0;
- (ICSTimeZoneChange *)initWithTimeInterval:(double)arg0 tzOffsetTo:(int)arg1;

@end
