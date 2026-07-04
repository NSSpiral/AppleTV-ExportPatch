/* Runtime dump - TDLogger
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDLogger : NSObject
{
    NSObject<OS_dispatch_queue> * _loggingQueue;
    int _verbosity;
    int _logMaxVerbosity;
}

@property (nonatomic) int verbosity;

+ (ABUIDataCollectorLogger *)logger;

- (void)dealloc;
- (TDLogger *)init;
- (void)logError:(NSError *)arg0;
- (int)verbosity;
- (void)logMessage:(NSString *)arg0 whenVerbosity:(int)arg1;
- (void)logExtra:(id)arg0;
- (void)logInfo:(NSDictionary *)arg0;
- (void)logWarning:(id)arg0;
- (void)setVerbosity:(int)arg0;
- (void)logExtraWithFormat:(NSString *)arg0;
- (void)logInfoWithFormat:(NSString *)arg0;
- (void)logWarningWithFormat:(NSString *)arg0;
- (void)logErrorWithFormat:(NSString *)arg0;
- (char)isVerbosityLogErrorsOnly;
- (char)isVerbosityLogWarningsAndErrors;
- (char)isVerbosityLogEverything;
- (void)waitForLoggingToComplete;

@end
