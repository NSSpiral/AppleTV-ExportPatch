/* Runtime dump - SAReminderCompositeTrigger
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAReminderCompositeTrigger : SAReminderTrigger

@property (retain, nonatomic) SAReminderDateTimeTrigger * dateTimeTrigger;
@property (retain, nonatomic) SAReminderLocationTrigger * locationTrigger;

+ (SAReminderCompositeTrigger *)compositeTrigger;
+ (NSDictionary *)compositeTriggerWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (SAReminderDateTimeTrigger *)dateTimeTrigger;
- (SAReminderLocationTrigger *)locationTrigger;
- (void)setDateTimeTrigger:(SAReminderDateTimeTrigger *)arg0;
- (void)setLocationTrigger:(SAReminderLocationTrigger *)arg0;

@end
