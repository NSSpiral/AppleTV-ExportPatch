/* Runtime dump - SASportsAthleteComparisonSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsAthleteComparisonSnippet : SASportsAthleteSnippet

@property (copy, nonatomic) NSDictionary * comparisonItemDetails;

+ (SASportsAthleteComparisonSnippet *)athleteComparisonSnippet;
+ (NSDictionary *)athleteComparisonSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSDictionary *)comparisonItemDetails;
- (void)setComparisonItemDetails:(NSDictionary *)arg0;

@end
