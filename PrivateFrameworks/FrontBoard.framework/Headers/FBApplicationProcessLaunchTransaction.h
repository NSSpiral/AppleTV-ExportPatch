/* Runtime dump - FBApplicationProcessLaunchTransaction
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationProcessLaunchTransaction : FBTransaction <FBApplicationProcessObserver>
{
    FBProcessManager * _processManager;
    NSString * _bundleID;
    FBApplicationProcess * _process;
    id _executionContextProvider;
    FBWaitForProcessDeathTransaction * _deathTransaction;
    FBProcessExecutionContext * _executionContext;
    char _processIsValid;
    char _failedLaunch;
    char _exited;
}

@property (readonly, retain, nonatomic) FBApplicationProcess * process;
@property (readonly, nonatomic) char failedLaunch;
@property (readonly, nonatomic) char exited;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)removeObserver:(NSObject *)arg0;
- (void)addObserver:(NSObject *)arg0;
- (FBApplicationProcessLaunchTransaction *)initWithApplicationBundleID:(NSString *)arg0 executionContextProvider:(NSObject *)arg1;
- (FBApplicationProcess *)process;
- (void)_childTransactionDidComplete:(id)arg0;
- (void)_didComplete;
- (char)_canBeInterrupted;
- (NSDictionary *)_customizedDescriptionProperties;
- (void)_begin;
- (void)applicationProcessDidExit:(id)arg0 withContext:(NSObject *)arg1;
- (void)applicationProcessWillLaunch:(id)arg0;
- (void)applicationProcessDidLaunch:(id)arg0;
- (FBApplicationProcessLaunchTransaction *)initWithApplicationProcess:(NSString *)arg0;
- (char)exited;
- (char)failedLaunch;
- (void)_queue_launchProcess:(NSObject *)arg0;
- (void)_queue_noteExited;

@end
