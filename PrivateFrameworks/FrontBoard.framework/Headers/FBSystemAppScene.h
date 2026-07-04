/* Runtime dump - FBSystemAppScene
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSystemAppScene : FBSScene <FBSSceneDelegate>
{
    FBSSceneImpl * _scene;
    <FBSSceneDelegate> * _delegate;
    BSAction * _invalidationAction;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<FBSSceneDelegate> *)arg0;
- (NSString *)description;
- (<FBSSceneDelegate> *)delegate;
- (FBSDisplay *)fbsDisplay;
- (void)scene:(FBSSceneImpl *)arg0 didUpdateWithDiff:(id)arg1 transitionContext:(FBSSceneTransitionContext *)arg2 completion:(id /* block */)arg3;
- (NSDictionary *)settings;
- (NSDictionary *)clientSettings;
- (void)sendActions:(id)arg0;
- (FBSDisplay *)display;
- (NSString *)identifier;
- (void)attachContext:(NSObject *)arg0;
- (void)detachContext:(NSObject *)arg0;
- (void)scene:(FBSSceneImpl *)arg0 didReceiveActions:(id)arg1;
- (void)updateClientSettingsWithBlock:(id /* block */)arg0;
- (NSCountedSet *)contexts;
- (FBSystemAppScene *)_initWithSceneImpl:(FBSSceneImpl *)arg0 invalidationAction:(BSAction *)arg1;
- (NSString *)_descriptionWithMultilinePrefix:(NSString *)arg0;
- (void)updateClientSettings:(NSDictionary *)arg0 withTransitionContext:(NSObject *)arg1;
- (void)attachSceneContext:(NSObject *)arg0;
- (void)detachSceneContext:(NSObject *)arg0;

@end
