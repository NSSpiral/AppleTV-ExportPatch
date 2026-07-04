/* Runtime dump - SAWeatherLocationSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherLocationSnippet : SAUISnippet

@property (copy, nonatomic) NSArray * weatherLocations;

+ (SAWeatherLocationSnippet *)locationSnippet;
+ (NSDictionary *)locationSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (void)setWeatherLocations:(NSArray *)arg0;
- (NSArray *)weatherLocations;

@end
