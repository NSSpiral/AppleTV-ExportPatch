/* Runtime dump - SAAppsCheckRestriction
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAppsCheckRestriction : SABaseClientBoundCommand

@property (copy, nonatomic) NSString * launchId;

+ (SAAppsCheckRestriction *)checkRestriction;
+ (NSDictionary *)checkRestrictionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)launchId;
- (void)setLaunchId:(NSString *)arg0;

@end
