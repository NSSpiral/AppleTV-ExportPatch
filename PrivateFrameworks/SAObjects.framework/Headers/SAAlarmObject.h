/* Runtime dump - SAAlarmObject
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAlarmObject : SADomainObject

@property (copy, nonatomic) NSNumber * enabled;
@property (copy, nonatomic) NSArray * frequency;
@property (copy, nonatomic) NSNumber * hour;
@property (copy, nonatomic) NSString * label;
@property (copy, nonatomic) NSNumber * minute;
@property (copy, nonatomic) NSNumber * relativeOffsetMinutes;

+ (NSObject *)object;
+ (NSDictionary *)objectWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setEnabled:(NSNumber *)arg0;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (NSArray *)frequency;
- (void)setFrequency:(NSArray *)arg0;
- (void)setHour:(NSNumber *)arg0;
- (NSNumber *)hour;
- (NSNumber *)enabled;
- (NSNumber *)minute;
- (void)setMinute:(NSNumber *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSNumber *)relativeOffsetMinutes;
- (void)setRelativeOffsetMinutes:(NSNumber *)arg0;

@end
