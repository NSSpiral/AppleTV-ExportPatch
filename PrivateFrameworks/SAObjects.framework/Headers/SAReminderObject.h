/* Runtime dump - SAReminderObject
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAReminderObject : SADomainObject

@property (copy, nonatomic) NSString * alternateSubject;
@property (nonatomic) char completed;
@property (copy, nonatomic) NSDate * dueDate;
@property (copy, nonatomic) NSString * dueDateTimeZoneId;
@property (nonatomic) char important;
@property (copy, nonatomic) NSArray * lists;
@property (retain, nonatomic) <SAReminderPayload> * payload;
@property (retain, nonatomic) SAReminderRecurrence * recurrence;
@property (copy, nonatomic) NSString * subject;
@property (retain, nonatomic) SAReminderTrigger * trigger;

+ (NSObject *)object;
+ (NSDictionary *)objectWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (void)setImportant:(char)arg0;
- (char)completed;
- (void)setTrigger:(SAReminderTrigger *)arg0;
- (void)setCompleted:(char)arg0;
- (NSDate *)dueDate;
- (void)setDueDate:(NSDate *)arg0;
- (NSString *)groupIdentifier;
- (<SAReminderPayload> *)payload;
- (void)setSubject:(NSString *)arg0;
- (NSString *)subject;
- (void)setPayload:(<SAReminderPayload> *)arg0;
- (void)setRecurrence:(SAReminderRecurrence *)arg0;
- (SAReminderRecurrence *)recurrence;
- (NSArray *)lists;
- (SAReminderTrigger *)trigger;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSString *)alternateSubject;
- (void)setAlternateSubject:(NSString *)arg0;
- (NSString *)dueDateTimeZoneId;
- (void)setDueDateTimeZoneId:(NSString *)arg0;
- (char)important;
- (void)setLists:(NSArray *)arg0;

@end
