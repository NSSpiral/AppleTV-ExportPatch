/* Runtime dump - EKPersistentExceptionDate
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentExceptionDate : EKPersistentObject

@property (readonly, nonatomic) NSDate * date;
@property (retain, nonatomic) EKPersistentCalendarItem * owner;

+ (NSMutableDictionary *)relations;
+ (NSDate *)exceptionDateWithDate:(NSDate *)arg0;

- (EKPersistentExceptionDate *)initWithExceptionDate:(JSValue *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSDate *)date;
- (EKPersistentExceptionDate *)copyWithZone:(struct _NSZone *)arg0;
- (EKPersistentCalendarItem *)owner;
- (int)entityType;
- (void)setOwner:(EKPersistentCalendarItem *)arg0;

@end
