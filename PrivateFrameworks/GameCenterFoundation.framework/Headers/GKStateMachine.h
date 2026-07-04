/* Runtime dump - GKStateMachine
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKStateMachine : NSObject
{
    int _lock;
    NSString * _currentState;
    NSDictionary * _validTransitions;
    <GKStateMachineDelegate> * _delegate;
    char _shouldLogStateTransitions;
}

@property (retain) NSString * currentState;
@property (retain) NSDictionary * validTransitions;
@property <GKStateMachineDelegate> * delegate;
@property (nonatomic) char shouldLogStateTransitions;

- (void)dealloc;
- (void)setDelegate:(<GKStateMachineDelegate> *)arg0;
- (GKStateMachine *)init;
- (<GKStateMachineDelegate> *)delegate;
- (NSString *)currentState;
- (void)setCurrentState:(NSString *)arg0;
- (char)_setCurrentState:(NSObject *)arg0;
- (char)shouldLogStateTransitions;
- (NSObject *)_validateTransitionFromState:(NSObject *)arg0 toState:(NSString *)arg1;
- (void)_performTransitionFromState:(NSObject *)arg0 toState:(NSString *)arg1;
- (NSObject *)missingTransitionFromState:(NSObject *)arg0 toState:(NSString *)arg1;
- (NSDictionary *)validTransitions;
- (char)applyState:(NSObject *)arg0;
- (void)setShouldLogStateTransitions:(char)arg0;
- (void)setValidTransitions:(NSDictionary *)arg0;

@end
