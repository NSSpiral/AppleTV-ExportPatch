/* Runtime dump - APSFileLogging
 * Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@interface APSFileLogging : NSObject

+ (NSDateFormatter *)dateFormatter;
+ (void)initialize;
+ (void)logAtLevel:(int)arg0 type:(NSObject *)arg1 category:(NSString *)arg2 format:(NSString *)arg3;
+ (void)logString:(NSString *)arg0 toFolder:(NSString *)arg1 toFileNamed:(id)arg2;
+ (void)logAtLevel:(int)arg0 type:(NSObject *)arg1 category:(NSString *)arg2 insertProcessInfo:(char)arg3 format:(NSString *)arg4 arguments:(void *)arg5;
+ (APSFileLogging *)logFileDirectory;
+ (char)loggingEnabledForLevel:(int)arg0;
+ (void)logAtLevel:(int)arg0 type:(NSObject *)arg1 category:(NSString *)arg2 insertProcessInfo:(char)arg3 format:(NSString *)arg4;
+ (void)logAtLevel:(int)arg0 type:(NSObject *)arg1 category:(NSString *)arg2 format:(NSString *)arg3 arguments:(void *)arg4;
+ (NSDateFormatter *)timeFormatter;
+ (NSObject *)getMainBundleId;

@end
