/* Runtime dump - MCMDMOptionsUtilities
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCMDMOptionsUtilities : NSObject

+ (MCMDMOptionsUtilities *)defaultMDMOptions;
+ (NSDictionary *)validatedMDMOptionsFromOptionsDictionary:(NSDictionary *)arg0;
+ (void)setDefaultMDMOptions:(NSDictionary *)arg0;

@end
