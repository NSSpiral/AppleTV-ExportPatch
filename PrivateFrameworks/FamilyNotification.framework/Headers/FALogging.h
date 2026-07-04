/* Runtime dump - FALogging
 * Image: /System/Library/PrivateFrameworks/FamilyNotification.framework/FamilyNotification
 */

@interface FALogging : NSObject
{
    NSObject<OS_dispatch_queue> * _logQueue;
    char _logToFile;
    char _logToSyslog;
}

+ (FALogging *)sharedLogger;

- (FALogging *)init;
- (void).cxx_destruct;
- (void)logMessageWithFormat:(NSString *)arg0 args:(void *)arg1;
- (void)_reloadLogPreferences;

@end
