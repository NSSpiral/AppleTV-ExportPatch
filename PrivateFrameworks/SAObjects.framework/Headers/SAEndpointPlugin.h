/* Runtime dump - SAEndpointPlugin
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAEndpointPlugin : SAEndpoint

@property (copy, nonatomic) NSString * pluginPath;

+ (SAEndpointPlugin *)endpointPlugin;
+ (NSDictionary *)endpointPluginWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)pluginPath;
- (NSString *)encodedClassName;
- (void)setPluginPath:(NSString *)arg0;

@end
