/* Runtime dump - SAFmfLocationSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAFmfLocationSnippet : SAUISnippet

@property (copy, nonatomic) NSNumber * atRequestedLocation;
@property (copy, nonatomic) NSArray * locations;
@property (copy, nonatomic) NSString * proximity;
@property (copy, nonatomic) NSURL * searchContext;

+ (SAFmfLocationSnippet *)locationSnippet;
+ (NSDictionary *)locationSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)proximity;
- (void)setProximity:(NSString *)arg0;
- (NSString *)groupIdentifier;
- (void)setLocations:(NSArray *)arg0;
- (void)setSearchContext:(NSURL *)arg0;
- (NSURL *)searchContext;
- (NSArray *)locations;
- (NSString *)encodedClassName;
- (NSNumber *)atRequestedLocation;
- (void)setAtRequestedLocation:(NSNumber *)arg0;

@end
