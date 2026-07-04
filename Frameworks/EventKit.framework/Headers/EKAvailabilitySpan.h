/* Runtime dump - EKAvailabilitySpan
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAvailabilitySpan : NSObject
{
    int _type;
    NSDate * _startDate;
    NSDate * _endDate;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSDate * startDate;
@property (readonly, nonatomic) NSDate * endDate;

- (EKAvailabilitySpan *)initWithStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1 type:(int)arg2;
- (EKAvailabilitySpan *)init;
- (NSString *)description;
- (int)type;
- (NSDate *)startDate;
- (NSDate *)endDate;

@end
