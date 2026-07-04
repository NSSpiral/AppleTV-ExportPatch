/* Runtime dump - BRStateMachine
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRStateMachine : NSObject
{
    NSRunLoop * _runloop;
    NSTimer * _timer;
    NSMutableArray * _events;
    NSMutableDictionary * _handlers;
    NSMutableDictionary * _defaultHandlers;
    NSMutableDictionary * _stateEntryHandlers;
    char shouldProcessEvents;
    char _immediate;
    char _ignoreRecursiveEvents;
    NSString * _currentState;
    NSString * _name;
}

@property (readonly, copy) NSString * currentState;
@property (readonly, copy) NSString * name;
@property (readonly) char immediate;
@property (nonatomic) char shouldProcessEvents;
@property (nonatomic) char ignoreRecursiveEvents;

+ (void)initialize;
+ (void)registerStateMachine:(NSObject *)arg0;
+ (BRStateMachine *)stateMachineWithName:(NSString *)arg0;
+ (void)deregisterStateMachine:(NSObject *)arg0;

- (BRStateMachine *)initWithName:(NSString *)arg0 initialState:(NSDictionary *)arg1 immediateMode:(char)arg2;
- (void)setIgnoreRecursiveEvents:(char)arg0;
- (void)setShouldProcessEvents:(char)arg0;
- (char)shouldProcessEvents;
- (char)immediate;
- (char)ignoreRecursiveEvents;
- (void)registerTransitionFromState:(NSObject *)arg0 onEvent:(NSObject *)arg1 toState:(NSObject *)arg2;
- (void)registerHandlerForState:(NSObject *)arg0 withBlock:(id /* block */)arg1;
- (void)dealloc;
- (NSString *)name;
- (NSString *)currentState;
- (void)deregisterHandlers;
- (void)postEvent:(NSObject *)arg0;
- (void)postEvent:(NSObject *)arg0 withContext:(NSObject *)arg1 userInfo:(NSDictionary *)arg2;
- (void)registerHandlerForEvent:(NSObject *)arg0 onState:(NSObject *)arg1 withBlock:(id /* block */)arg2;
- (void)registerDefaultHandlerForEvent:(NSObject *)arg0 withBlock:(id /* block */)arg1;
- (void)registerHandlerForEvent:(NSObject *)arg0 onStates:(NSArray *)arg1 withBlock:(id /* block */)arg2;
- (void)logUnhandledEvents;
- (void)purgeEventQueue;
- (void)_processNextEvent;
- (void)postEvent:(NSObject *)arg0 withContext:(NSObject *)arg1;
- (NSObject *)_eventHandlerForEvent:(SEL)arg0;

@end
