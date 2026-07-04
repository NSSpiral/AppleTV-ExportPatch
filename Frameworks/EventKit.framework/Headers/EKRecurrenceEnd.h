/* Runtime dump - EKRecurrenceEnd
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKRecurrenceEnd : NSObject <NSCopying>
{
    NSDate * _endDate;
    unsigned int _occurrenceCount;
}

@property (readonly, nonatomic) NSDate * endDate;
@property (readonly, nonatomic) unsigned int occurrenceCount;
@property (readonly, nonatomic) char usesEndDate;

+ (EKRecurrenceEnd *)recurrenceEndWithEndDate:(NSDate *)arg0;
+ (EKRecurrenceEnd *)recurrenceEndWithOccurrenceCount:(unsigned int)arg0;

- (unsigned int)occurrenceCount;
- (EKRecurrenceEnd *)initWithEndDate:(NSDate *)arg0;
- (EKRecurrenceEnd *)initWithOccurrenceCount:(unsigned int)arg0;
- (char)usesEndDate;
- (void)dealloc;
- (EKRecurrenceEnd *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (EKRecurrenceEnd *)copyWithZone:(struct _NSZone *)arg0;
- (NSDate *)endDate;

@end
