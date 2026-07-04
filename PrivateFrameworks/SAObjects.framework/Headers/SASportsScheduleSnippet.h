/* Runtime dump - SASportsScheduleSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsScheduleSnippet : SASportsSnippet

@property (copy, nonatomic) NSArray * matchups;

+ (SASportsScheduleSnippet *)scheduleSnippet;
+ (NSDictionary *)scheduleSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)matchups;
- (void)setMatchups:(NSArray *)arg0;

@end
