/* Runtime dump - PRLogging
 * Image: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
 */

@interface PRLogging : NSObject
{
    NSObject<OS_dispatch_queue> * _logQueue;
    char _logToFile;
    char _logToSyslog;
}

+ (PRLogging *)sharedLogger;

- (PRLogging *)init;
- (void).cxx_destruct;
- (void)logMessageWithFormat:(NSString *)arg0 args:(void *)arg1;
- (void)_reloadLogPreferences;

@end
