/* Runtime dump - FBProcess
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBProcess : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    FBProcessState * _state;
    NSString * _name;
    NSString * _jobLabel;
    NSString * _bundleIdentifier;
    NSObject<OS_dispatch_queue> * _callOutQueue;
    FBWorkspace * _workspace;
    NSHashTable * _observers;
    <FBProcessDelegate> * _delegate;
    int _unsafe_pid;
    BSProcessDeathWatcher * _processDeathObserver;
    char _updatingState;
}

@property (readonly, copy, nonatomic) FBProcessState * state;
@property (readonly, copy, nonatomic) NSString * name;
@property (readonly, copy, nonatomic) NSString * jobLabel;
@property (readonly, copy, nonatomic) NSString * bundleIdentifier;
@property (readonly, retain, nonatomic) FBWorkspace * workspace;
@property (nonatomic) <FBProcessDelegate> * delegate;
@property (nonatomic) int queue_pid;
@property (copy, nonatomic) NSString * queue_name;
@property (copy, nonatomic) NSString * queue_jobLabel;
@property (nonatomic) char queue_running;
@property (nonatomic) int queue_taskState;
@property (nonatomic) int queue_visibility;

- (void)dealloc;
- (void)setDelegate:(<FBProcessDelegate> *)arg0;
- (NSString *)description;
- (FBProcessState *)state;
- (NSString *)name;
- (NSString *)bundleIdentifier;
- (FBWorkspace *)_workspace;
- (void)removeObserver:(NSObject *)arg0;
- (NSOperationQueue *)_queue;
- (void)addObserver:(NSObject *)arg0;
- (char)isApplicationProcess;
- (char)isSystemApplicationProcess;
- (FBWorkspace *)workspace;
- (char)isExtensionProcess;
- (int)_queue_pid;
- (void)_queue_setPid:(int)arg0;
- (id)_createWorkspace;
- (void)_queue_setName:(NSString *)arg0;
- (NSString *)_queue_name;
- (NSString *)_queue_jobLabel;
- (void)_queue_enumerateObserversWithBlock:(id /* block */)arg0;
- (void)_queue_updateStateWithBlock:(id /* block */)arg0;
- (void)_queue_toggleProcessDeathObserver:(char)arg0;
- (void)_queue_setTaskState:(int)arg0;
- (void)_queue_setVisibility:(int)arg0;
- (int)_queue_effectiveVisibilityForVisibility:(int)arg0;
- (void)_queue_setRunning:(char)arg0;
- (void)_queue_callExitObservers;
- (void)_queue_processDidExit;
- (FBProcess *)initWithBundleID:(NSString *)arg0 pid:(int)arg1 callOutQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (NSString *)jobLabel;
- (NSObject *)_queue_delegate;
- (char)_queue_isRunning;
- (void)_queue_setJobLabel:(NSString *)arg0;
- (char)_queue_isForeground;
- (int)_queue_taskState;
- (int)_queue_visibility;

@end
