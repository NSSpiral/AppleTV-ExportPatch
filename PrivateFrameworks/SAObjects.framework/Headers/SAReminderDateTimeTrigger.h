/* Runtime dump - SAReminderDateTimeTrigger
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAReminderDateTimeTrigger : SAReminderTrigger

@property (copy, nonatomic) NSDate * date;
@property (retain, nonatomic) SAReminderDateTimeTriggerOffset * offset;
@property (retain, nonatomic) SAReminderDateTimeTriggerOffset * relativeTimeOffset;
@property (copy, nonatomic) NSString * timeZoneId;

+ (SAReminderDateTimeTrigger *)dateTimeTrigger;
+ (NSDictionary *)dateTimeTriggerWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSDate *)date;
- (void)setOffset:(SAReminderDateTimeTriggerOffset *)arg0;
- (SAReminderDateTimeTriggerOffset *)offset;
- (void)setDate:(NSDate *)arg0;
- (NSString *)encodedClassName;
- (NSString *)timeZoneId;
- (void)setTimeZoneId:(NSString *)arg0;
- (SAReminderDateTimeTriggerOffset *)relativeTimeOffset;
- (void)setRelativeTimeOffset:(SAReminderDateTimeTriggerOffset *)arg0;

@end
