/* Runtime dump - SATimerSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SATimerSnippet : SAUISnippet

@property (copy, nonatomic) NSArray * timers;

+ (NSString *)snippet;
+ (NSDictionary *)snippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)timers;
- (void)setTimers:(NSArray *)arg0;

@end
