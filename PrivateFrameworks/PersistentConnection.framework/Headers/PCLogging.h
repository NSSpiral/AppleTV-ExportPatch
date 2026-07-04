/* Runtime dump - PCLogging
 * Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCLogging : NSObject

+ (void)initialize;
+ (PCLogging *)logFileDirectory;
+ (char)loggingEnabledForLevel:(int)arg0;
+ (void)enableConsoleLoggingForLevel:(int)arg0;
+ (void)logAtLevel:(int)arg0 delegate:(NSObject *)arg1 format:(NSString *)arg2;
+ (void)logKeepAliveInterval:(double)arg0 forServiceIdentifier:(NSString *)arg1;
+ (void)logAtLevel:(int)arg0 delegate:(NSObject *)arg1 format:(NSString *)arg2 arguments:(void *)arg3;
+ (NSString *)_fileNameForIdentifier:(NSString *)arg0;
+ (NSString *)_facilityForIdentifier:(NSString *)arg0;
+ (id /* block */)_formatBlock;
+ (void)_configureLogFacilityIfNeeded:(id)arg0;
+ (void)_appendString:(NSString *)arg0 toFileNamed:(id)arg1;
+ (NSObject *)getMainBundleId;
+ (void)_printLoggingConfig;
+ (void)enableFileLogging:(char)arg0;
+ (void)enableLoggingForCustomHandler:(id /* block */)arg0;

@end
