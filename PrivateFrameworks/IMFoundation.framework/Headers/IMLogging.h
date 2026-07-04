/* Runtime dump - IMLogging
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMLogging : NSObject

+ (NSDateFormatter *)dateFormatter;
+ (void)logAtLevel:(int)arg0 type:(NSObject *)arg1 category:(NSString *)arg2 format:(NSString *)arg3;
+ (void)logString:(NSString *)arg0 toFolder:(NSString *)arg1 toFileNamed:(id)arg2;
+ (void)logAtLevel:(int)arg0 type:(NSObject *)arg1 category:(NSString *)arg2 insertProcessInfo:(char)arg3 format:(NSString *)arg4 arguments:(void *)arg5;
+ (void)logAtLevel:(int)arg0 type:(NSObject *)arg1 category:(NSString *)arg2 insertProcessInfo:(char)arg3 simpleLogString:(NSString *)arg4 format:(NSString *)arg5 arguments:(void *)arg6 time:(unsigned long long)arg7;
+ (IMLogging *)logFileDirectory;
+ (char)loggingEnabledForLevel:(int)arg0;
+ (NSDate *)stringForDate;
+ (void)logAtLevel:(int)arg0 type:(NSObject *)arg1 category:(NSString *)arg2 insertProcessInfo:(char)arg3 format:(NSString *)arg4;
+ (void)logAtLevel:(int)arg0 type:(NSObject *)arg1 category:(NSString *)arg2 format:(NSString *)arg3 arguments:(void *)arg4;
+ (void)logAtLevel:(int)arg0 type:(NSObject *)arg1 category:(NSString *)arg2 insertProcessInfo:(char)arg3 simpleLogString:(NSString *)arg4 time:(unsigned long long)arg5;
+ (void)logAtLevel:(int)arg0 type:(NSObject *)arg1 category:(NSString *)arg2 insertProcessInfo:(char)arg3 simpleLogString:(NSString *)arg4;
+ (NSDateFormatter *)timeFormatter;
+ (void)enableConsoleLoggingForLevel:(int)arg0;

@end
