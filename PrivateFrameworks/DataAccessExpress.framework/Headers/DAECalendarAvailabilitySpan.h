/* Runtime dump - DAECalendarAvailabilitySpan
 * Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DAECalendarAvailabilitySpan : NSObject <NSSecureCoding>
{
    int _type;
    NSDate * _startDate;
    NSDate * _endDate;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSDate * startDate;
@property (readonly, nonatomic) NSDate * endDate;

+ (char)supportsSecureCoding;

- (DAECalendarAvailabilitySpan *)initWithStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1 type:(int)arg2;
- (DAECalendarAvailabilitySpan *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (DAECalendarAvailabilitySpan *)init;
- (NSString *)description;
- (int)type;
- (void).cxx_destruct;
- (NSDate *)startDate;
- (NSDate *)endDate;

@end
