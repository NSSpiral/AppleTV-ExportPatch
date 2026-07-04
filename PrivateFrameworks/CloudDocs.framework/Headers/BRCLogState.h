/* Runtime dump - BRCLogState
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRCLogState : NSObject
{
    struct __asl_object_s * _asl_store;
    struct __asl_object_s * _asl_client;
    NSURL * _directory;
    NSString * _basename;
    int _fd;
    NSObject<OS_dispatch_source> * _fdDeletionWatcher;
}

@property (retain, nonatomic) NSURL * directory;
@property (retain, nonatomic) NSString * basename;

+ (BRCLogState *)defaultLogState;

- (BRCLogState *)init;
- (void)setLevel:(int)arg0;
- (int)indentationLevel;
- (NSString *)basename;
- (void)closeLog;
- (void)setBasename:(NSString *)arg0;
- (void)openASLStoreIfNeeded;
- (void)setPath:(char *)arg0 base:(char *)arg1;
- (char *)currentSectionID;
- (void)logMsg:(int)arg0 facility:(char *)arg1 func:(char *)arg2 src:(char *)arg3 lno:(int)arg4 msg:(char *)arg5 aslmsg:(struct __asl_object_s *)arg6;
- (NSURL *)directory;
- (void)setDirectory:(NSURL *)arg0;

@end
