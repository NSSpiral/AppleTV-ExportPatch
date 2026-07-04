/* Runtime dump - ATVStateMachine
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVStateMachine : NSObject
{
    id _stateChangeHandler;
    NSMutableArray * _events;
    NSMutableDictionary * _handlers;
    NSMutableDictionary * _defaultHandlers;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableArray * _blocksToExecuteAfterStateTransition;
    char _handlingEvent;
    char _shouldAcceptEvents;
    NSString * _name;
    NSString * _currentState;
    int _mode;
    NSString * _loggingComponent;
    NSArray * _ignorableEvents;
}

@property (readonly, nonatomic) NSString * name;
@property (copy) NSString * currentState;
@property (readonly, nonatomic) int mode;
@property char shouldAcceptEvents;
@property (copy, nonatomic) NSString * loggingComponent;
@property (copy) NSArray * ignorableEvents;

+ (void)initialize;
+ (void)registerStateMachine:(NSObject *)arg0;
+ (ATVStateMachine *)stateMachineWithName:(NSString *)arg0;
+ (void)deregisterStateMachine:(NSObject *)arg0;
+ (ATVStateMachine *)stateMachinesOfType:(Class)arg0;

- (NSString *)name;
- (NSString *)currentState;
- (int)mode;
- (void)setCurrentState:(NSString *)arg0;
- (void).cxx_destruct;
- (void)setShouldAcceptEvents:(char)arg0;
- (ATVStateMachine *)initWithName:(NSString *)arg0 initialState:(NSDictionary *)arg1 mode:(int)arg2 stateChangeHandler:(id /* block */)arg3;
- (void)setLoggingComponent:(NSString *)arg0;
- (void)deregisterHandlers;
- (void)postEvent:(NSObject *)arg0;
- (void)postEvent:(NSObject *)arg0 withContext:(NSObject *)arg1 userInfo:(NSDictionary *)arg2;
- (void)executeBlockAfterCurrentStateTransition:(NSObject *)arg0;
- (void)registerHandlerForEvent:(NSObject *)arg0 onState:(char)arg1 withBlock:(id /* block */)arg2;
- (void)registerDefaultHandlerForEvent:(NSObject *)arg0 withBlock:(id /* block */)arg1;
- (void)registerHandlerForEvent:(NSObject *)arg0 onStates:(NSArray *)arg1 withBlock:(id /* block */)arg2;
- (void)logUnhandledEvents;
- (NSString *)loggingComponent;
- (void)purgeEventQueue;
- (char)shouldAcceptEvents;
- (NSArray *)ignorableEvents;
- (void)_processNextEvent;
- (ATVStateMachine *)initWithName:(NSString *)arg0 initialState:(NSDictionary *)arg1 mode:(int)arg2;
- (void)postEvent:(NSObject *)arg0 withContext:(NSObject *)arg1;
- (void)registerStateTransitionFromState:(NSObject *)arg0 onEvent:(NSObject *)arg1 toState:(NSString *)arg2;
- (void)setIgnorableEvents:(NSArray *)arg0;
- (void)_executePostTransitionBlocks;
- (void)_processEvent:(NSObject *)arg0;
- (void)_dispatchEvent:(NSObject *)arg0;
- (NSObject *)_eventHandlerForEvent:(SEL)arg0;
- (void)_transitionToState:(NSObject *)arg0 withEvent:(NSString *)arg1 context:(NSObject *)arg2 userInfo:(NSDictionary *)arg3;

@end
