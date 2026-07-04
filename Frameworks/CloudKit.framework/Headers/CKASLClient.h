/* Runtime dump - CKASLClient
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKASLClient : NSObject
{
    struct __asl_object_s * _aslClient;
    int _logLevel;
    NSObject<OS_dispatch_queue> * _logQueue;
}

@property (nonatomic) struct __asl_object_s * aslClient;
@property (nonatomic) int logLevel;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * logQueue;

+ (NSObject *)ASLClient;

- (NSObject<OS_dispatch_queue> *)logQueue;
- (void)_setLogLevelFromDefaults;
- (struct __asl_object_s *)aslClient;
- (unsigned int)logLevelForASL;
- (void)setAslClient:(struct __asl_object_s *)arg0;
- (NSData *)_nilTerminatedCopyOfData:(NSData *)arg0;
- (void)performLoggingBlock:(id /* block */)arg0;
- (void)_logTrafficData:(NSData *)arg0 andBinaryData:(NSData *)arg1 withContainerIdentifier:(NSString *)arg2 sectionID:(NSString *)arg3;
- (void)_slurpTrafficDataFromHumanReadableFile:(NSString *)arg0 binaryFile:(NSString *)arg1 prefixString:(NSString *)arg2 suffixString:(NSString *)arg3 containerIdentifier:(NSString *)arg4 sectionID:(NSString *)arg5;
- (void)_ensureLogDirectoryExists;
- (void)slurpAndRemoveLookasideHumanFile:(NSString *)arg0 binaryFile:(NSString *)arg1 prefixString:(NSString *)arg2 suffixString:(NSString *)arg3 containerIdentifier:(NSString *)arg4 sectionID:(NSString *)arg5;
- (void)setLogQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setLogLevel:(int)arg0;
- (void)dealloc;
- (CKASLClient *)init;
- (void).cxx_destruct;
- (int)logLevel;

@end
