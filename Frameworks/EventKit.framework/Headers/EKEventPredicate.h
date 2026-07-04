/* Runtime dump - EKEventPredicate
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKEventPredicate : EKPredicate <EKDefaultPropertiesLoading, NSSecureCoding>
{
    NSDate * _startDate;
    NSDate * _endDate;
    NSString * _uuid;
    NSTimeZone * _timeZone;
    NSString * _title;
    char _shouldLoadDefaultProperties;
}

@property (readonly, nonatomic) NSDate * startDate;
@property (readonly, nonatomic) NSDate * endDate;
@property (readonly, nonatomic) NSString * eventUUID;
@property (readonly, nonatomic) NSTimeZone * timeZone;
@property (readonly, nonatomic) NSString * title;
@property (readonly, nonatomic) char shouldLoadDefaultProperties;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSDate *)predicateWithStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2 calendars:(NSArray *)arg3 loadDefaultProperties:(char)arg4;
+ (NSDate *)predicateWithStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2 eventUUID:(NSString *)arg3 calendars:(NSArray *)arg4;
+ (NSDate *)predicateWithStartDate:(NSDate *)arg0 title:(NSString *)arg1 calendars:(NSArray *)arg2;
+ (NSDate *)predicateWithStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2 calendars:(NSArray *)arg3;
+ (char)supportsSecureCoding;

- (NSString *)predicateFormat;
- (id)defaultPropertiesToLoad;
- (EKEventPredicate *)initWithStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2 calendars:(NSArray *)arg3;
- (EKEventPredicate *)initWithStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2 calendars:(NSArray *)arg3 loadDefaultProperties:(char)arg4;
- (EKEventPredicate *)initWithStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2 eventUUID:(NSString *)arg3 calendars:(NSArray *)arg4;
- (EKEventPredicate *)initWithStartDate:(NSDate *)arg0 title:(NSString *)arg1 calendars:(NSArray *)arg2;
- (NSString *)eventUUID;
- (char)shouldLoadDefaultProperties;
- (void)dealloc;
- (EKEventPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)title;
- (EKEventPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (NSTimeZone *)timeZone;
- (char)evaluateWithObject:(NSObject *)arg0;
- (NSDate *)startDate;
- (NSDate *)endDate;

@end
