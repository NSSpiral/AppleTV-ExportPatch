/* Runtime dump - SAAppsLaunchApp
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAppsLaunchApp : SABaseClientBoundCommand

@property (copy, nonatomic) NSString * launchId;

+ (SAAppsLaunchApp *)launchApp;
+ (NSDictionary *)launchAppWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)launchId;
- (void)setLaunchId:(NSString *)arg0;

@end
