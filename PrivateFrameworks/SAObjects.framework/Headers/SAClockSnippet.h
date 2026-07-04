/* Runtime dump - SAClockSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAClockSnippet : SAUISnippet

@property (copy, nonatomic) NSArray * clocks;

+ (NSString *)snippet;
+ (NSDictionary *)snippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)clocks;
- (void)setClocks:(NSArray *)arg0;

@end
