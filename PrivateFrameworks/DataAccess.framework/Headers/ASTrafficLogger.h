/* Runtime dump - ASTrafficLogger
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface ASTrafficLogger : NSObject
{
    NSFileHandle * _lookasideFileHandle;
    NSString * _lookasideFilePath;
    char _isOutgoingTraffic;
    char _didFlushLogs;
}

@property (nonatomic) char isOutgoingTraffic;

+ (NSOperationQueue *)_logQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_moveLogFileContentsAtPath:(NSString *)arg0;
- (void)_openLookasideFile;
- (char)isOutgoingTraffic;
- (void)setIsOutgoingTraffic:(char)arg0;
- (void)logWBXMLData:(NSData *)arg0;
- (void)flushLogs;
- (void)logPlainTextData:(NSData *)arg0;

@end
