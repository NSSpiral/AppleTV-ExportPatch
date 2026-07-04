/* Runtime dump - SACalendarEventSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACalendarEventSnippet : SAUISnippet

@property (copy, nonatomic) NSArray * events;

+ (SACalendarEventSnippet *)eventSnippet;
+ (NSDictionary *)eventSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)events;
- (void)setEvents:(NSArray *)arg0;
- (NSString *)encodedClassName;

@end
