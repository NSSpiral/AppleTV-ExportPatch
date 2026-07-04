/* Runtime dump - FBProcessManager
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBProcessManager : NSObject <FBApplicationProcessDelegate, FBApplicationProcessObserver>
{
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSHashTable * _observers;
    NSMapTable * _processesByPID;
    NSMapTable * _processesByBundleID;
    FBApplicationProcess * _systemAppProcess;
    BKSProcessAssertion * _systemAppProcessAssertion;
    FBApplicationProcess * _foregroundAppProcess;
    int _workspaceLocked;
    int _workspaceLockedToken;
}

@property (readonly, retain, nonatomic) FBApplicationProcess * systemApplicationProcess;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (FBProcessManager *)sharedInstance;

- (void)dealloc;
- (FBProcessManager *)init;
- (NSString *)description;
- (void)removeObserver:(NSObject *)arg0;
- (void)addObserver:(NSObject *)arg0;
- (FBApplicationProcess *)systemApplicationProcess;
- (NSString *)applicationProcessesForBundleIdentifier:(NSString *)arg0;
- (NSObject *)createApplicationProcessForBundleID:(NSObject *)arg0 withExecutionContext:(NSObject *)arg1;
- (id)allApplicationProcesses;
- (id)_systemServiceClientAdded:(id)arg0;
- (id)applicationProcessForPID:(int)arg0;
- (void)noteProcess:(NSObject *)arg0 didUpdateState:(NSObject *)arg1;
- (void)noteProcessDidExit:(id)arg0;
- (id)processForPID:(int)arg0;
- (NSURLConnection *)_serviceClientAddedWithConnection:(NSURLConnection *)arg0;
- (void)applicationProcessWillLaunch:(id)arg0;
- (char)_isWorkspaceLocked;
- (NSString *)_serviceClientAddedWithAuditToken:(struct ? *)arg0;
- (void)_updateWorkspaceLockedState;
- (NSString *)_queue_processesForBundleIdentifier:(NSString *)arg0;
- (NSString *)processesForBundleIdentifier:(NSString *)arg0;
- (id)_queue_processForPID:(int)arg0;
- (void)_queue_addProcess:(NSObject *)arg0 completion:(id /* block */)arg1;
- (id)_serviceClientAddedWithPID:(int)arg0 isUIApp:(char)arg1 isExtension:(char)arg2 bundleID:(NSString *)arg3;
- (void)_queue_removeProcess:(NSObject *)arg0 withBundleID:(NSString *)arg1 pid:(int)arg2;
- (void)_queue_notifyObserversUsingBlock:(id /* block */)arg0 completion:(/* block */ id)arg1;
- (id)allProcesses;
- (NSObject *)createApplicationProcessForBundleID:(NSObject *)arg0;
- (char)ping;

@end
