/* Runtime dump - SAReminderSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAReminderSnippet : SAUISnippet

@property (copy, nonatomic) NSArray * reminders;

+ (NSString *)snippet;
+ (NSDictionary *)snippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)reminders;
- (void)setReminders:(NSArray *)arg0;

@end
