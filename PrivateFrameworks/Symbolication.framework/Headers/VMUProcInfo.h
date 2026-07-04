/* Runtime dump - VMUProcInfo
 * Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUProcInfo : NSObject
{
    unsigned int _task;
    char _needTaskPortDealloc;
    NSString * _name;
    NSArray * _arguments;
    NSArray * _envVars;
    NSString * _procTableName;
    NSString * _realAppName;
    NSString * _requestedAppName;
    NSString * _firstArg;
    int _pid;
    int _ppid;
    struct timeval _startTime;
}

+ (VMUProcInfo *)getProcessIds;
+ (char)isProcessRunning:(int)arg0;
+ (int)processParentId:(int)arg0;

- (VMUProcInfo *)initWithTask:(unsigned int)arg0;
- (char)terminate;
- (void)dealloc;
- (VMUProcInfo *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)name;
- (int)compare:(NSObject *)arg0;
- (void)update;
- (char)isRunning;
- (struct timeval)startTime;
- (unsigned int)task;
- (int)pid;
- (VMUProcInfo *)initWithPid:(int)arg0;
- (int)ppid;
- (NSArray *)arguments;
- (int)cpuType;
- (char)isApp;
- (NSString *)realAppName;
- (NSString *)userAppName;
- (id)_infoFromCommandLine:(int)arg0;
- (NSString *)procTableName;
- (NSArray *)envVars;
- (id)firstArgument;
- (NSString *)requestedAppName;
- (char)isCFM;
- (id)valueForEnvVar:(id)arg0;
- (char)isMachO;
- (char)isNative;
- (char)signal:(int)arg0;
- (int)compareByName:(NSString *)arg0;
- (int)compareByUserAppName:(NSString *)arg0;
- (void)finalize;

@end
