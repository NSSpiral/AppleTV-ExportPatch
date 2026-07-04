/* Runtime dump - SARestaurantRestaurantsSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SARestaurantRestaurantsSnippet : SAUISirilandSnippet

@property (copy, nonatomic) NSArray * attributionOrder;
@property (copy, nonatomic) NSArray * contributingProviderIds;
@property (copy, nonatomic) NSDictionary * providerPunchOutMap;
@property (copy, nonatomic) NSArray * restaurants;

+ (SARestaurantRestaurantsSnippet *)restaurantsSnippet;
+ (NSDictionary *)restaurantsSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)attributionOrder;
- (void)setAttributionOrder:(NSArray *)arg0;
- (NSArray *)contributingProviderIds;
- (void)setContributingProviderIds:(NSArray *)arg0;
- (NSDictionary *)providerPunchOutMap;
- (void)setProviderPunchOutMap:(NSDictionary *)arg0;
- (NSArray *)restaurants;
- (void)setRestaurants:(NSArray *)arg0;

@end
