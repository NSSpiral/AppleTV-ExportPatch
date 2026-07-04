/* Runtime dump - LSUserActivityDebuggingManager
 * Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSUserActivityDebuggingManager : NSObject
{
    struct __asl_object_s * _client;
    NSUserDefaults * _userDefaults;
    NSString * _logFileDirectoryPath;
    NSString * _logFilePath;
    int _additionalLogFile;
    NSObject<OS_dispatch_source> * _logRotationTimerSource;
    unsigned long long _lastLogRotationTime;
}

@property (retain) NSUserDefaults * userDefaults;
@property (readonly) char loggingEnabled;
@property struct __asl_object_s * client;
@property (copy) NSString * logFileDirectoryPath;
@property (copy) NSString * logFilePath;
@property int additionalLogFile;
@property (readonly) char logFileEnabled;
@property unsigned long long lastLogRotationTime;
@property NSObject<OS_dispatch_source> * logRotationTimerSource;

+ (void)log:(int)arg0 format:(NSString *)arg1;
+ (LSUserActivityDebuggingManager *)hexDataDump:(id)arg0;
+ (LSUserActivityDebuggingManager *)sharedDebugManager;

- (char)loggingEnabled;
- (void)setLogFileDirectoryPath:(NSString *)arg0;
- (NSString *)logFileDirectoryPath;
- (void)deleteExtraLogFiles;
- (void)rotateLogFiles;
- (void)setLogRotationTimerSource:(NSObject<OS_dispatch_source> *)arg0;
- (NSObject<OS_dispatch_source> *)logRotationTimerSource;
- (void)doRotateLogFiles;
- (int)additionalLogFile;
- (void)setAdditionalLogFile:(int)arg0;
- (double)logRotationTimeInSeconds;
- (unsigned long long)lastLogRotationTime;
- (char)logFileEnabled;
- (void)setLastLogRotationTime:(unsigned long long)arg0;
- (int)logRotationMaximumFiles;
- (char)shouldLogCommon:(unsigned int)arg0;
- (void)log:(int)arg0 format:(NSString *)arg1 args:(void *)arg2;
- (void)log:(int)arg0 format:(NSString *)arg1 args:(void *)arg2 file:(char *)arg3 line:(long)arg4;
- (void)log:(int)arg0 format:(NSString *)arg1;
- (void)log:(int)arg0 file:(char *)arg1 line:(long)arg2 format:(NSString *)arg3;
- (void)logCommon:(unsigned int)arg0 format:(NSString *)arg1 args:(void *)arg2;
- (char)shouldLog:(int)arg0;
- (void)log:(int)arg0 common:(char)arg1 format:(NSString *)arg2 args:(void *)arg3 file:(char *)arg4 line:(long)arg5;
- (LSUserActivityDebuggingManager *)init;
- (void)suspend;
- (void)resume;
- (void)setUserDefaults:(NSUserDefaults *)arg0;
- (NSUserDefaults *)userDefaults;
- (NSString *)logFilePath;
- (void)setLogFilePath:(NSString *)arg0;
- (void)setClient:(struct __asl_object_s *)arg0;
- (struct __asl_object_s *)client;

@end
