/* Runtime dump - TSULogCollaboration
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSULogCollaboration : NSObject
{
    TSUASLClient * _aslClient;
    int _logFileLevelMask;
    int _stderrLevelMask;
    TSUASLLogFile * _currentLogFile;
    char _shouldLogCommandTrace;
    char _shouldLogToFile;
    char _shouldLogToStderr;
    int _filterLevel;
    NSURL * _logFileURL;
}

@property (nonatomic) int filterLevel;
@property (readonly, nonatomic) NSURL * logFileURL;
@property (nonatomic) char shouldLogCommandTrace;
@property (nonatomic) char shouldLogToFile;
@property (nonatomic) char shouldLogToStderr;

+ (void)defineCategories;
+ (TSULogCollaboration *)sharedInstance;

- (void)setShouldLogCommandTrace:(char)arg0;
- (char)shouldLogCommandTrace;
- (void)setFilterLevel:(int)arg0;
- (int)filterLevel;
- (NSURL *)_createLogFileURL;
- (int)_clampLevelToValidRange:(int)arg0;
- (NSObject *)_createASLClient;
- (NSURL *)logFileURL;
- (char)shouldLogToStderr;
- (void)setShouldLogToStderr:(char)arg0;
- (TSUASLClient *)aslClient;
- (TSULogCollaboration *)init;
- (NSString *)description;
- (void).cxx_destruct;
- (char)shouldLogToFile;
- (void)setShouldLogToFile:(char)arg0;

@end
