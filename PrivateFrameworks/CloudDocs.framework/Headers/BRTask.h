/* Runtime dump - BRTask
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRTask : NSObject
{
    NSArray * _argv;
    NSString * _redirectStdoutToFileAtPath;
    int _redirectStdoutToFileDescriptor;
    NSString * _redirectStderrToFileAtPath;
    int _redirectStderrToFileDescriptor;
    int _waitStatus;
}

@property (retain, nonatomic) NSArray * argv;
@property (retain, nonatomic) NSString * redirectStdoutToFileAtPath;
@property (nonatomic) int redirectStdoutToFileDescriptor;
@property (retain, nonatomic) NSString * redirectStderrToFileAtPath;
@property (nonatomic) int redirectStderrToFileDescriptor;
@property (readonly, nonatomic) int waitStatus;

+ (BRTask *)taskWithCommandWithArguments:(NSDictionary *)arg0;
+ (BRTask *)taskWithCommand:(NSObject *)arg0;
+ (NSString *)sanitizeStringForFilename:(NSString *)arg0;

- (void)dealloc;
- (BRTask *)init;
- (void)setCommandWithArguments:(NSDictionary *)arg0;
- (void)setArgv:(NSArray *)arg0;
- (NSArray *)argv;
- (NSString *)redirectStdoutToFileAtPath;
- (NSString *)redirectStderrToFileAtPath;
- (int)redirectStdoutToFileDescriptor;
- (int)redirectStderrToFileDescriptor;
- (void)setRedirectStdoutToFileAtPath:(NSString *)arg0;
- (void)setRedirectStdoutToFileDescriptor:(int)arg0;
- (void)setRedirectStderrToFileAtPath:(NSString *)arg0;
- (void)setRedirectStderrToFileDescriptor:(int)arg0;
- (int)exec;
- (void)resetRedirect;
- (int)waitStatus;
- (void)setCommand:(NSObject *)arg0;

@end
