/* Runtime dump - ICSTimeZone
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSTimeZone : ICSComponent
{
    id _systemTimeZone;
}

@property (retain, nonatomic) NSString * tzid;

+ (NSString *)name;
+ (NSString *)timeZoneWithSystemTimeZoneName:(NSString *)arg0;
+ (NSDate *)blocksAfterDate:(NSDate *)arg0 untilDate:(NSDate *)arg1 forTimeZone:(NSObject *)arg2;
+ (int)matchTypeForSubarray:(id)arg0 inTZChangeArray:(NSArray *)arg1;
+ (NSArray *)quickTimeZoneNames;
+ (NSArray *)slowTimeZoneNames;
+ (char)perfectMatchForSubarray:(id)arg0 inTZChangeArray:(NSArray *)arg1;

- (NSString *)tzid;
- (NSDate *)systemTimeZoneForDate:(NSDate *)arg0;
- (void)dealloc;
- (ICSTimeZone *)initWithSystemTimeZone:(NSObject *)arg0 fromDate:(NSDate *)arg1 options:(int)arg2;
- (ICSTimeZone *)initWithTimeZone:(NSObject *)arg0 fromDate:(NSDate *)arg1 options:(int)arg2;
- (NSObject *)getNSTimeZone:(NSObject *)arg0;
- (void)setTzid:(NSString *)arg0;
- (NSDate *)_previousDSTTransitionForDate:(NSDate *)arg0 timezone:(NSObject *)arg1;
- (ICSTimeZone *)initWithSystemTimeZone:(NSObject *)arg0;
- (NSDate *)computeTimeZoneChangeListFromDate:(NSDate *)arg0 toDate:(NSDate *)arg1;
- (NSDate *)getNSTimeZoneFromDate:(NSDate *)arg0 toDate:(NSDate *)arg1;
- (char)isEqualToNSTimeZone:(NSObject *)arg0 forDate:(NSDate *)arg1;

@end
