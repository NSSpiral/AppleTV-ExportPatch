/* Runtime dump - SAAppsGetRestrictedApps
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAppsGetRestrictedApps : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray * appIds;

+ (SAAppsGetRestrictedApps *)getRestrictedApps;
+ (NSDictionary *)getRestrictedAppsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSArray *)appIds;
- (void)setAppIds:(NSArray *)arg0;

@end
