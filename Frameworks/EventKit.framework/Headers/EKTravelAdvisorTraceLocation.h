/* Runtime dump - EKTravelAdvisorTraceLocation
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelAdvisorTraceLocation : NSObject <NSSecureCoding>
{
    NSDate * _date;
    CLLocation * _location;
}

@property (readonly, nonatomic) NSDate * date;
@property (readonly, nonatomic) CLLocation * location;

+ (char)supportsSecureCoding;

- (EKTravelAdvisorTraceLocation *)initWithDate:(NSDate *)arg0 location:(CLLocation *)arg1;
- (void)dealloc;
- (EKTravelAdvisorTraceLocation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSDate *)date;
- (CLLocation *)location;

@end
