/* Runtime dump - BRCFileCoordinator
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFileCoordinator : NSFileCoordinator
{
    BRCAccountSession * _session;
    unsigned long long _startStamp;
    NSURL * _url1;
    NSURL * _url2;
    NSObject<OS_dispatch_source> * _timer;
    id _doneHandler;
    char _cancelled;
    char _isUpdateForReconnecting;
}

@property (nonatomic) char isUpdateForReconnecting;

+ (void)itemDidAppearAtPath:(NSString *)arg0 logicalFilename:(NSString *)arg1;
+ (void)itemDidDisappearAtPath:(NSString *)arg0 logicalFilename:(NSString *)arg1;
+ (void)itemAtPath:(NSString *)arg0 didBounceToName:(NSString *)arg1;
+ (void)itemAtPath:(NSString *)arg0 logicalFilename:(NSString *)arg1 didMoveToPath:(NSString *)arg2 logicalFilename:(NSString *)arg3 hasContentUpdate:(char)arg4;

- (void)cancel;
- (void).cxx_destruct;
- (void)cancelAfter:(double)arg0;
- (void)_obtainedCoordination:(id)arg0 url1:(NSURL *)arg1 url2:(NSURL *)arg2 handler:(id /* block */)arg3 fcHandler:(/* block */ id)arg4 error:(NSError *)arg5;
- (BRCFileCoordinator *)initWithSession:(BRCAccountSession *)arg0 cancelAfter:(double)arg1 doneHandler:(id /* block */)arg2;
- (void)scheduleReadOfItemAtURL:(NSURL *)arg0 target:(NSObject *)arg1;
- (void)scheduleDeleteOfItemAtURL:(NSURL *)arg0 target:(NSObject *)arg1;
- (void)scheduleUpdateOfItemAtURL:(NSURL *)arg0 target:(NSObject *)arg1;
- (void)scheduleRenameOfItemAtURL:(NSURL *)arg0 toItemAtURL:(NSURL *)arg1 contentUpdate:(char)arg2 target:(NSObject *)arg3;
- (char)isUpdateForReconnecting;
- (void)setIsUpdateForReconnecting:(char)arg0;

@end
