/* Runtime dump - CLServiceVendor
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLServiceVendor : NSObject

+ (char)isServiceEnabled:(id)arg0;
+ (char)ensureServiceIsRunning:(id)arg0;
+ (NSObject *)getSiloForService:(NSObject *)arg0;
+ (NSObject *)proxyForService:(NSObject *)arg0;
+ (void)rereadConfiguration;
+ (char)getKeyClass:(Class *)arg0 andSilo:(id *)arg1 forServiceWithName:(NSString *)arg2;
+ (NSString *)getServiceWithName:(NSString *)arg0;
+ (void)retireServiceWithName:(NSString *)arg0;
+ (char)isServiceRunning:(id)arg0;
+ (NSObject *)proxyForService:(NSObject *)arg0 forClient:(struct _GEOTileKey)arg1;
+ (void)initialize;

@end
