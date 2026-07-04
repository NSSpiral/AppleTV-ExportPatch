/* Runtime dump - SAGKAlternateResultsPod
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKAlternateResultsPod : SAGKPodView

@property (copy, nonatomic) NSArray * alternateResults;

+ (SAGKAlternateResultsPod *)alternateResultsPod;
+ (NSDictionary *)alternateResultsPodWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)alternateResults;
- (void)setAlternateResults:(NSArray *)arg0;

@end
