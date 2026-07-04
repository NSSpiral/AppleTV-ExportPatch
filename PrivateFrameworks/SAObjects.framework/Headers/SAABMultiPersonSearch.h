/* Runtime dump - SAABMultiPersonSearch
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAABMultiPersonSearch : SADomainCommand

@property (copy, nonatomic) NSArray * personSearches;
@property (copy, nonatomic) NSNumber * resultsLimit;

+ (SAABMultiPersonSearch *)multiPersonSearch;
+ (NSDictionary *)multiPersonSearchWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setResultsLimit:(NSNumber *)arg0;
- (NSNumber *)resultsLimit;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSArray *)personSearches;
- (void)setPersonSearches:(NSArray *)arg0;

@end
