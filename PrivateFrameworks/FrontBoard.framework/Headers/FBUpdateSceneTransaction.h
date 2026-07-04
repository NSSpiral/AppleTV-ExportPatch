/* Runtime dump - FBUpdateSceneTransaction
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBUpdateSceneTransaction : FBTransaction <FBSceneManagerObserver, FBSynchronizedTransaction>
{
    FBSceneManager * _sceneManager;
    NSString * _sceneID;
    FBSDisplay * _display;
    FBSSceneSettings * _newSceneSettings;
    FBSSceneTransitionContext * _transitionContext;
    FBSSceneClientSettings * _clientSettings;
    <FBSceneClientProvider> * _clientProvider;
    FBProcess * _process;
    id _clientProviderProvider;
    id _clientSettingsProvider;
    FBWaitForSceneDestructionTransaction * _destuctionTransaction;
    <FBSynchronizedTransactionDelegate> * _synchronizationDelegate;
    unsigned int _transactionID;
    char _willCommitUpdateFinished;
    char _waitsForSceneCommit;
    char _readyToCommit;
    char _didCommit;
    char _destroyed;
    id _context;
}

@property (readonly, retain, nonatomic) FBScene * scene;
@property (readonly, retain, nonatomic) FBSDisplay * display;
@property (readonly, retain, nonatomic) NSString * sceneIdentifier;
@property (readonly, retain, nonatomic) FBSSceneSettings * newSettings;
@property (readonly, retain, nonatomic) FBSSceneTransitionContext * transitionContext;
@property (readonly, nonatomic) char destroyed;
@property (retain, nonatomic) id context;
@property (nonatomic) char waitsForSceneCommit;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) <FBSynchronizedTransactionDelegate> * synchronizationDelegate;

- (FBScene *)scene;
- (void)dealloc;
- (FBSSceneTransitionContext *)transitionContext;
- (FBSDisplay *)display;
- (void)removeObserver:(NSObject *)arg0;
- (NSString *)context;
- (void)setContext:(NSObject *)arg0;
- (void)addObserver:(NSObject *)arg0;
- (void)sceneManager:(FBSceneManager *)arg0 didCreateScene:(NSObject *)arg1 withClient:(NSObject *)arg2;
- (void)sceneManager:(FBSceneManager *)arg0 willUpdateScene:(NSObject *)arg1 withSettings:(NSDictionary *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3;
- (void)sceneManager:(FBSceneManager *)arg0 willCommitUpdateForScene:(NSObject *)arg1 transactionID:(unsigned int)arg2;
- (void)sceneManager:(FBSceneManager *)arg0 didCommitUpdateForScene:(NSObject *)arg1 transactionID:(unsigned int)arg2;
- (void)sceneManager:(FBSceneManager *)arg0 willDestroyScene:(NSObject *)arg1;
- (void)sceneManager:(FBSceneManager *)arg0 didDestroyScene:(NSObject *)arg1;
- (FBUpdateSceneTransaction *)initWithSceneIdentifier:(NSString *)arg0 process:(FBProcess *)arg1 display:(FBSDisplay *)arg2 newSettings:(FBSSceneSettings *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4 clientProviderProvider:(NSObject *)arg5 initialClientSettingsProvider:(/* block */ id)arg6;
- (void)_childTransactionDidComplete:(id)arg0;
- (void)_didComplete;
- (char)_canBeInterrupted;
- (NSDictionary *)_customizedDescriptionProperties;
- (void)_begin;
- (NSString *)_initWithSceneIdentifier:(NSString *)arg0 display:(FBSDisplay *)arg1 newSettings:(FBSSceneSettings *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3 clientProvider:(<FBSceneClientProvider> *)arg4 initialClientSettings:(NSDictionary *)arg5;
- (void)_commitSceneUpdate:(NSDate *)arg0;
- (<FBSynchronizedTransactionDelegate> *)synchronizationDelegate;
- (void)performSynchronizedCommit;
- (void)_createScene;
- (void)_updateScene;
- (void)_commitSceneOrWait;
- (void)_enumerateUpdateSceneObserversWithBlock:(id /* block */)arg0;
- (char)isReadyForSynchronizedCommit;
- (void)_performCommit;
- (void)setSynchronizationDelegate:(<FBSynchronizedTransactionDelegate> *)arg0;
- (FBUpdateSceneTransaction *)initWithSceneToUpdate:(NSDate *)arg0 newSettings:(FBSSceneSettings *)arg1 transitionContext:(FBSSceneTransitionContext *)arg2;
- (FBUpdateSceneTransaction *)initWithSceneToCreate:(id)arg0 display:(FBSDisplay *)arg1 newSettings:(FBSSceneSettings *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3 clientProvider:(<FBSceneClientProvider> *)arg4 initialClientSettings:(NSDictionary *)arg5;
- (NSString *)sceneIdentifier;
- (FBSSceneSettings *)newSettings;
- (char)destroyed;
- (char)waitsForSceneCommit;
- (void)setWaitsForSceneCommit:(char)arg0;
- (void)_didInterruptWithReason:(NSString *)arg0;

@end
