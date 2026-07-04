/* Runtime dump - NSConcreteTask
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteTask : NSTask
{
    NSObject<OS_dispatch_semaphore> * _lock;
    NSMutableDictionary * _dictionary;
    id _terminationHandler;
    NSObject<OS_dispatch_source> * _dsrc;
    NSPort * _tmpPort;
    int _suspendCount;
    int _pid;
    int _platformExitInfo;
    char _hasExeced;
    char _isRunning;
    char _hasPostedDeathNotification;
    char _terminationRun;
    char _qos;
}

- (void)terminate;
- (NSString *)currentDirectoryPath;
- (void)setArguments:(NSDictionary *)arg0;
- (void)launchWithDictionary:(NSMutableDictionary *)arg0;
- (int)terminationStatus;
- (int)terminationReason;
- (void)launch;
- (void)setCurrentDirectoryPath:(NSString *)arg0;
- (void)setLaunchPath:(NSString *)arg0;
- (void)interrupt;
- (int)suspendCount;
- (NSString *)launchPath;
- (void)setStandardInput:(NSObject *)arg0;
- (void)setStandardOutput:(NSObject *)arg0;
- (void)setStandardError:(NSError *)arg0;
- (NSObject *)standardInput;
- (NSObject *)standardOutput;
- (NSError *)standardError;
- (void)_setTerminationHandler:(id /* block */)arg0;
- (void)_withTaskDictionary:(NSDictionary *)arg0;
- (int)_platformExitInformation;
- (void)waitUntilExit;
- (void)setPreferredArchitectures:(id)arg0;
- (id)preferredArchitectures;
- (void)setTaskDictionary:(NSDictionary *)arg0;
- (NSDictionary *)taskDictionary;
- (void)terminateTask;
- (int)_procid;
- (void)setStartsNewProcessGroup:(char)arg0;
- (void)dealloc;
- (NSConcreteTask *)init;
- (NSDictionary *)environment;
- (char)suspend;
- (char)resume;
- (char)isRunning;
- (void)setTerminationHandler:(id /* block */)arg0;
- (int)processIdentifier;
- (id /* block */)terminationHandler;
- (void)setQualityOfService:(int)arg0;
- (int)qualityOfService;
- (void)setEnvironment:(NSDictionary *)arg0;
- (NSArray *)arguments;
- (void)finalize;

@end
