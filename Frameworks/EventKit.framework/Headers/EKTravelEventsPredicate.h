/* Runtime dump - EKTravelEventsPredicate
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelEventsPredicate : EKPredicate
{
    NSDate * _startDate;
    NSDate * _endDate;
}

@property (retain, nonatomic) NSDate * startDate;
@property (retain, nonatomic) NSDate * endDate;

+ (char)supportsSecureCoding;

- (NSString *)predicateFormat;
- (id)defaultPropertiesToLoad;
- (EKTravelEventsPredicate *)initWithCalendarIDs:(id)arg0 startDate:(NSDate *)arg1 endDate:(NSDate *)arg2;
- (void)dealloc;
- (EKTravelEventsPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (EKTravelEventsPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (char)evaluateWithObject:(NSObject *)arg0;
- (void)setStartDate:(NSDate *)arg0;
- (void)setEndDate:(NSDate *)arg0;
- (NSDate *)startDate;
- (NSDate *)endDate;

@end
