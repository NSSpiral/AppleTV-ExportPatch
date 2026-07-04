/* Runtime dump - SASportsTeamSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsTeamSnippet : SASportsSnippet

@property (copy, nonatomic) NSArray * teams;

+ (SASportsTeamSnippet *)teamSnippet;
+ (NSDictionary *)teamSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)teams;
- (void)setTeams:(NSArray *)arg0;

@end
