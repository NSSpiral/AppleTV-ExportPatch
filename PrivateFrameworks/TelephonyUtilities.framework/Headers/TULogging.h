/* Runtime dump - TULogging
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TULogging : NSObject

+ (void)initialize;
+ (char)shouldLogType:(NSObject *)arg0;
+ (void)logType:(NSObject *)arg0 topic:(NSString *)arg1 category:(NSString *)arg2 backtrace:(char)arg3 format:(NSString *)arg4;
+ (char)isWalkaboutEnabled;
+ (void)enablePhoneLogging;
+ (void)checkpointLoggingSession:(NSObject *)arg0;
+ (void)pulseLoggingSession;
+ (void)disablePhoneLogging;
+ (void)registerForShouldLogChangedNotification;
+ (void)unregisterForShouldLogChangedNotification;
+ (char)sendDirectoryToCrashReporter:(id)arg0 error:(id *)arg1;
+ (void)beginLoggingSessionAsInitiator:(char)arg0;
+ (void)endLoggingSession;

@end
