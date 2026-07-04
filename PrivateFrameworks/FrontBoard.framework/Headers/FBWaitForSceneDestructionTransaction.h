/* Runtime dump - FBWaitForSceneDestructionTransaction
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWaitForSceneDestructionTransaction : FBTransaction <FBSceneManagerObserver>
{
    FBSceneManager * _sceneManager;
    FBScene * _sceneToWaitForDeath;
}

@property (readonly, retain, nonatomic) FBScene * scene;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (FBScene *)scene;
- (FBWaitForSceneDestructionTransaction *)initWithScene:(FBScene *)arg0;
- (void)dealloc;
- (void)sceneManager:(FBSceneManager *)arg0 didCreateScene:(NSObject *)arg1 withClient:(NSObject *)arg2;
- (void)sceneManager:(FBSceneManager *)arg0 willUpdateScene:(NSObject *)arg1 withSettings:(NSDictionary *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3;
- (void)sceneManager:(FBSceneManager *)arg0 willCommitUpdateForScene:(NSObject *)arg1 transactionID:(unsigned int)arg2;
- (void)sceneManager:(FBSceneManager *)arg0 didCommitUpdateForScene:(NSObject *)arg1 transactionID:(unsigned int)arg2;
- (void)sceneManager:(FBSceneManager *)arg0 willDestroyScene:(NSObject *)arg1;
- (void)sceneManager:(FBSceneManager *)arg0 didDestroyScene:(NSObject *)arg1;
- (void)_didComplete;
- (NSDictionary *)_customizedDescriptionProperties;
- (void)_begin;

@end
