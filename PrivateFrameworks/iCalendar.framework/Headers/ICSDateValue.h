/* Runtime dump - ICSDateValue
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSDateValue : NSObject <NSCoding>
{
    int _year;
    int _month;
    int _day;
}

@property (readonly) int year;
@property (readonly) int month;
@property (readonly) int day;

+ (NSString *)dateFromICSString:(NSString *)arg0;
+ (NSString *)dateFromICSUTF8String:(char *)arg0;

- (ICSDateValue *)initWithYear:(int)arg0 month:(int)arg1 day:(int)arg2;
- (ICSDateValue *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (int)compare:(NSObject *)arg0;
- (int)year;
- (int)month;
- (int)day;
- (NSArray *)components;
- (NSString *)icsString;
- (void)_ICSStringWithOptions:(unsigned int)arg0 appendingToString:(NSString *)arg1;
- (int)dateType;

@end
