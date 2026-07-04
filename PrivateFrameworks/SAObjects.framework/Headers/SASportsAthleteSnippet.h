/* Runtime dump - SASportsAthleteSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsAthleteSnippet : SASportsSnippet

@property (copy, nonatomic) NSArray * athletes;

+ (SASportsAthleteSnippet *)athleteSnippet;
+ (NSDictionary *)athleteSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)athletes;
- (void)setAthletes:(NSArray *)arg0;

@end
