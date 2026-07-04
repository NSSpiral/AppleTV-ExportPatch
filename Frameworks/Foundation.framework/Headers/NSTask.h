/* Runtime dump - NSTask
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSTask : NSObject

@property (copy) NSString * launchPath;
@property (copy) NSArray * arguments;
@property (copy) NSDictionary * environment;
@property (copy) NSString * currentDirectoryPath;
@property (retain) id standardInput;
@property (retain) id standardOutput;
@property (retain) id standardError;
@property (readonly) int processIdentifier;
@property (readonly) char running;
@property (readonly) int terminationStatus;
@property (readonly) int terminationReason;
@property (copy) id terminationHandler;
@property int qualityOfService;

+ (NSTask *)currentTaskDictionary;
+ (NSDictionary *)launchedTaskWithDictionary:(NSDictionary *)arg0;
+ (NSString *)launchedTaskWithLaunchPath:(NSString *)arg0 arguments:(NSArray *)arg1;
+ (NSTask *)allocWithZone:(struct _NSZone *)arg0;

- (void)terminate;
- (NSString *)currentDirectoryPath;
- (void)setArguments:(NSArray *)arg0;
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
- (NSTask *)init;
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

@end
