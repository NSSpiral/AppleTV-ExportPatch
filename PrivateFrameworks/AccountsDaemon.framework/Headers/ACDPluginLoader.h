/* Runtime dump - ACDPluginLoader
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDPluginLoader : NSObject

+ (NSString *)pluginBundlesAtSubpath:(id)arg0;
+ (NSURL *)_accountsPluginDirectoryURL:(NSURL *)arg0;
+ (NSURL *)_validatedBundleAtURL:(NSURL *)arg0;
+ (NSString *)_currentSystemVersion;
+ (NSCache *)_buildPluginCache;
+ (NSString *)pluginWithName:(NSString *)arg0 inSubpath:(TSDBezierSubpath *)arg1;
+ (NSString *)pluginForIdentifier:(NSString *)arg0 subpath:(TSDBezierSubpath *)arg1;

@end
