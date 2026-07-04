/* Runtime dump - SAAlarmSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAlarmSnippet : SAUISnippet

@property (copy, nonatomic) NSArray * alarms;

+ (NSString *)snippet;
+ (NSDictionary *)snippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSArray *)alarms;
- (void)setAlarms:(NSArray *)arg0;
- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;

@end
