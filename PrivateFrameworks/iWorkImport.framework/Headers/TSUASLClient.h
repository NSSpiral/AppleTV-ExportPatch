/* Runtime dump - TSUASLClient
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUASLClient : NSObject
{
    NSString * _identifier;
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _ioQueue;
    struct __asl_object_s * _client;
    NSHashTable * _logFiles;
    NSMutableArray * _logSinks;
    int _filter;
    NSString * _logFileMessageFormat;
    NSString * _stderrMessageFormat;
    char _overrideReleaseFilteringLimit;
}

@property int filter;

- (void)logWithLevel:(int)arg0 category:(NSString *)arg1 function:(char *)arg2 file:(char *)arg3 line:(long)arg4 message:(NSString *)arg5;
- (int)_limitFilterForReleaseBuilds:(int)arg0;
- (void)removeLogFile:(NSString *)arg0;
- (void)logWithLevel:(int)arg0 format:(NSString *)arg1 arguments:(void *)arg2;
- (void)logWithLevel:(int)arg0 message:(NSString *)arg1;
- (void)_populateAslmsg:(struct __asl_object_s *)arg0 category:(NSString *)arg1 function:(char *)arg2 file:(char *)arg3 line:(long)arg4;
- (NSURL *)_newLogFileURLForRotationUsingURL:(NSURL *)arg0;
- (void)_addLogFileToCompress:(id)arg0;
- (void)_addOldLogFile:(NSString *)arg0;
- (void)_handleOldLogFilesAsync;
- (void)_compressLogFilesIfNeeded;
- (void)_cleanupOldLogFilesIfNeeded;
- (NSString *)_logFilesToCompressDefaultsKey;
- (void)_setObject:(NSObject *)arg0 forUserDefaultsKey:(NSString *)arg1;
- (id)_logFilesToCompress;
- (void)_setLogFilesToCompress:(id)arg0;
- (char)_compressLogFilePath:(NSString *)arg0;
- (void)_addOldLogFileImpl:(id)arg0 date:(NSDate *)arg1 originalPath:(NSString *)arg2;
- (NSString *)_oldLogFilesDefaultsKey;
- (id)_oldLogFiles;
- (void)_setOldLogFiles:(id)arg0;
- (TSUASLClient *)initWithIdentifier:(NSString *)arg0 facility:(char *)arg1 options:(unsigned int)arg2 filterMask:(int)arg3;
- (void)logWithLevel:(int)arg0 format:(NSString *)arg1;
- (void)addLogSink:(id)arg0;
- (NSURL *)addLogFileWithURL:(NSString *)arg0 truncate:(char)arg1 filterMask:(int)arg2;
- (void)startLoggingToStderrWithFilterMask:(int)arg0;
- (void)stopLoggingToStderr;
- (void)dealloc;
- (TSUASLClient *)init;
- (void)synchronize;
- (void)setFilter:(int)arg0;
- (void).cxx_destruct;
- (int)filter;

@end
