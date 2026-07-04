/* Runtime dump - ATVSWUDiagnosticMonitor
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVSWUDiagnosticMonitor : NSObject
{
    char _isInternalBuild;
    char _isRestore;
    char _triggeredManually;
    NSString * _fromOSBuild;
    NSString * _toOSBuild;
    NSString * _uuid;
    NSURL * _baseURL;
}

@property (copy, nonatomic) NSString * fromOSBuild;
@property (copy, nonatomic) NSString * toOSBuild;
@property char isInternalBuild;
@property char isRestore;
@property char triggeredManually;
@property (retain, nonatomic) NSString * uuid;
@property (copy, nonatomic) NSURL * baseURL;

+ (NSString *)lastRestoreFilePath;
+ (ATVSWUDiagnosticMonitor *)_instance;
+ (void)prepareForUpdateToOSBuild:(id)arg0 forRestore:(char)arg1 triggeredManually:(char)arg2;
+ (void)noteStage:(NSObject *)arg0;

- (NSURL *)_baseURL;
- (void)_processNewUpdateAttemptToOSBuild:(id)arg0 forRestore:(char)arg1 triggeredManually:(char)arg2;
- (void)_noteStage:(NSObject *)arg0;
- (NSString *)fromOSBuild;
- (void)setFromOSBuild:(NSString *)arg0;
- (NSString *)toOSBuild;
- (void)setToOSBuild:(NSString *)arg0;
- (void)setIsRestore:(char)arg0;
- (char)triggeredManually;
- (void)setTriggeredManually:(char)arg0;
- (void)_processAppRestart;
- (void)_issueRequestForStage:(NSObject *)arg0 withProperties:(NSDictionary *)arg1 retryDelay:(int)arg2;
- (char)_isCancelStage:(NSObject *)arg0;
- (char)_isFailedStage:(NSObject *)arg0;
- (char)_isFinalStage:(NSObject *)arg0;
- (void)_processUpdateAttemptCompleted;
- (char)isRestore;
- (ATVSWUDiagnosticMonitor *)init;
- (NSURL *)baseURL;
- (void).cxx_destruct;
- (NSString *)uuid;
- (void)setIsInternalBuild:(char)arg0;
- (char)isInternalBuild;
- (void)setBaseURL:(NSURL *)arg0;
- (void)setUuid:(NSString *)arg0;

@end
