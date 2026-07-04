/* Runtime dump - FBScene
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBScene : NSObject <FBSceneHost>
{
    FBWindowContextManager * _contextManager;
    FBWindowContextHostManager * _contextHostManager;
    char _valid;
    <FBSceneDelegate> * _delegate;
    <FBSceneClient> * _client;
    <FBSceneClientProvider> * _clientProvider;
    FBProcess * _clientProcess;
    NSString * _identifier;
    FBSDisplay * _display;
    FBSMutableSceneSettings * _mutableSettings;
    FBSSceneSettings * _settings;
    FBSSceneClientSettings * _clientSettings;
    <FBSceneBoundsDelegate> * _boundsDelegate;
    unsigned int _transactionID;
    char _lockedForMutation;
}

@property (readonly, copy, nonatomic) NSString * identifier;
@property (readonly, retain, nonatomic) FBSDisplay * display;
@property (readonly, retain, nonatomic) FBWindowContextManager * contextManager;
@property (readonly, retain, nonatomic) FBWindowContextHostManager * contextHostManager;
@property (readonly, retain, nonatomic) FBSSceneSettings * settings;
@property (readonly, retain, nonatomic) FBSSceneClientSettings * clientSettings;
@property (readonly, retain, nonatomic) FBProcess * clientProcess;
@property (readonly, nonatomic) char valid;
@property (nonatomic) <FBSceneDelegate> * delegate;
@property (readonly, retain, nonatomic) <FBSceneClient> * client;
@property (readonly, retain, nonatomic) <FBSceneClientProvider> * clientProvider;
@property (readonly, retain, nonatomic) FBSMutableSceneSettings * mutableSettings;
@property (readonly, nonatomic) unsigned int _transactionID;
@property (nonatomic) char _lockedForMutation;
@property (nonatomic) <FBSceneBoundsDelegate> * _boundsDelegate;

- (void)dealloc;
- (void)setDelegate:(<FBSceneDelegate> *)arg0;
- (NSString *)description;
- (NSString *)debugDescription;
- (<FBSceneDelegate> *)delegate;
- (FBSSceneSettings *)settings;
- (FBSSceneClientSettings *)clientSettings;
- (void)sendActions:(id)arg0;
- (FBSDisplay *)display;
- (NSString *)identifier;
- (char)isValid;
- (FBProcess *)clientProcess;
- (void)updateSettings:(NSDictionary *)arg0 withTransitionContext:(NSObject *)arg1;
- (FBWindowContextManager *)contextManager;
- (void)_setBoundsDelegate:(NSObject *)arg0;
- (<FBSceneClientProvider> *)clientProvider;
- (void)updateSettingsWithBlock:(id /* block */)arg0;
- (void)client:(<FBSceneClient> *)arg0 attachContext:(NSObject *)arg1;
- (void)client:(<FBSceneClient> *)arg0 updateContext:(NSObject *)arg1;
- (void)client:(<FBSceneClient> *)arg0 detachContext:(NSObject *)arg1;
- (void)client:(<FBSceneClient> *)arg0 didUpdateClientSettings:(NSDictionary *)arg1 withDiff:(id)arg2 transitionContext:(FBSSceneTransitionContext *)arg3;
- (void)client:(<FBSceneClient> *)arg0 didReceiveActions:(id)arg1;
- (NSString *)_descriptionWithMultilinePrefix:(NSString *)arg0;
- (unsigned int)_transactionID;
- (FBWindowContextHostManager *)contextHostManager;
- (FBScene *)initWithIdentifier:(NSString *)arg0 display:(FBSDisplay *)arg1 initialClientSettings:(NSDictionary *)arg2 clientProvider:(<FBSceneClientProvider> *)arg3;
- (FBSMutableSceneSettings *)mutableSettings;
- (char)_lockedForMutation;
- (void)_setLockedForMutation:(char)arg0;
- (unsigned int)_incrementTransactionID;
- (void)_applyMutableSettings:(NSDictionary *)arg0 withTransitionContext:(NSObject *)arg1 completion:(id /* block */)arg2;
- (void)_invalidateWithTransitionContext:(NSObject *)arg0;
- (void)_handleSceneClientMessage:(NSString *)arg0 withBlock:(id /* block */)arg1;
- (<FBSceneBoundsDelegate> *)_boundsDelegate;
- (<FBSceneClient> *)client;

@end
