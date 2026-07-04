/* Runtime dump - CalDateRange
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalDateRange : NSObject <NSCopying, CalDateRangeProtocol, NSSecureCoding>
{
    NSDate * _startDate;
    NSDate * _endDate;
}

@property (retain) NSDate * startDate;
@property (retain) NSDate * endDate;
@property (readonly, nonatomic) double duration;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;
+ (NSObject *)rangeWithRange:(NSObject *)arg0;
+ (NSDate *)rangeWithStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1;
+ (NSDate *)rangeWithStartDate:(NSDate *)arg0 duration:(double)arg1;
+ (NSObject *)rangeByExpandingRange:(NSObject *)arg0 direction:(int)arg1 multiplier:(unsigned int)arg2;
+ (NSObject *)rangeByExpandingRange:(NSObject *)arg0 direction:(int)arg1 duration:(double)arg2;

- (CalDateRange *)initWithStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1;
- (CalDateRange *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (double)duration;
- (void)setDuration:(double)arg0;
- (char)isValid;
- (CalDateRange *)copyWithZone:(struct _NSZone *)arg0;
- (char)containsRange:(NSObject *)arg0;
- (void).cxx_destruct;
- (char)containsDate:(NSDate *)arg0;
- (CalDateRange *)initWithStartDate:(NSDate *)arg0 duration:(double)arg1;
- (void)setStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1;
- (char)intersectsRange:(NSObject *)arg0 allowSinglePointIntersection:(char)arg1;
- (char)intersectsRangeWithStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1 allowSinglePointIntersection:(char)arg2;
- (NSObject *)_calculateMidnightsInCalendar:(NSObject *)arg0;
- (NSString *)briefDescription;
- (void)setStartDate:(NSDate *)arg0 duration:(double)arg1;
- (NSObject *)intersectionWithRange:(NSObject *)arg0;
- (NSObject *)unionRange:(NSObject *)arg0;
- (NSObject *)subtractRange:(NSObject *)arg0;
- (NSString *)midnightsForRangeInTimeZoneString:(NSString *)arg0;
- (id)midpoint;
- (void)setStartDate:(NSDate *)arg0;
- (void)setEndDate:(NSDate *)arg0;
- (char)intersectsRange:(NSObject *)arg0;
- (NSDate *)startDate;
- (NSDate *)endDate;

@end
