/* Runtime dump - FigStateMachine
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigStateMachine : NSObject
{
    id _owner;
    int _lock;
    char _performsAtomicStateTransitions;
    unsigned int _currentState;
    struct FigStateMachineStateConfiguration * _stateConfigurations;
    char _stateCount;
    NSString * _label;
}

@property (nonatomic) char performsAtomicStateTransitions;
@property (readonly) unsigned int currentState;
@property (readonly) NSString * label;
@property (readonly) NSString * currentStateLabel;

+ (void)initialize;

- (void)dealloc;
- (NSString *)description;
- (unsigned int)currentState;
- (NSString *)label;
- (FigStateMachine *)initWithLabel:(NSString *)arg0 stateCount:(char)arg1 initialState:(unsigned int)arg2 owner:(NSObject *)arg3;
- (void)setLabel:(NSString *)arg0 forState:(unsigned int)arg1;
- (void)whenTransitioningFromState:(unsigned int)arg0 toState:(unsigned int)arg1 callHandler:(id /* block */)arg2;
- (void)whenTransitioningToState:(unsigned int)arg0 callHandler:(id /* block */)arg1;
- (char)transitionToState:(unsigned int)arg0 fromState:(unsigned int)arg1;
- (char)transitionToState:(unsigned int)arg0 errorStatus:(long)arg1;
- (NSString *)currentStateLabel;
- (void)setPerformsAtomicStateTransitions:(char)arg0;
- (void)whenTransitioningToStateFails:(unsigned int)arg0 callHandler:(id /* block */)arg1;
- (char)_transitionToState:(unsigned int)arg0 fromStates:(unsigned int)arg1 errorStatus:(long)arg2;
- (NSObject *)labelForState:(unsigned int)arg0;
- (void)markStateAsTerminal:(unsigned int)arg0;
- (void)whenTransitioningToStates:(unsigned int)arg0 callHandler:(id /* block */)arg1;
- (void)whenTransitioningToStatesFail:(unsigned int)arg0 callHandler:(id /* block */)arg1;
- (char)transitionToState:(unsigned int)arg0 fromStates:(unsigned int)arg1;
- (char)performsAtomicStateTransitions;
- (char)transitionToState:(unsigned int)arg0;

@end
