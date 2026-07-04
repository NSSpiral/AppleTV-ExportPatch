/* Runtime dump - SSRollableLog
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRollableLog : NSObject
{
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    double _lastFileStatTime;
    NSFileHandle * _fileHandle;
    NSObject<OS_dispatch_source> * _fileObserverSource;
    SSLogFileOptions * _options;
}

@property (readonly) SSLogFileOptions * logOptions;

- (void)dealloc;
- (void)writeString:(NSString *)arg0;
- (SSRollableLog *)initWithLogOptions:(SSLogFileOptions *)arg0;
- (void)_openLogFile;
- (void)_checkLogFileSize;
- (void)_closeLogFile;
- (NSObject *)_logFilePathWithIndex:(int)arg0;
- (NSString *)_activeLogFilePath;
- (void)_rollLogFiles;
- (SSLogFileOptions *)logOptions;

@end
