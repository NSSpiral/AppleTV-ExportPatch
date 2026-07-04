/* Runtime dump - FBSSceneImpl
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneImpl : FBSScene
{
    <FBSSceneDelegate> * _delegate;
    NSString * _identifier;
    FBSSceneSettings * _settings;
    FBSSceneClientSettings * _clientSettings;
    <FBSSceneUpdater> * _updater;
    CADisplay * _display;
    FBSDisplay * _fbsDisplay;
    FBSSerialQueue * _callOutQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _contexts;
    char _shouldObserveContexts;
}

- (void)dealloc;
- (void)setDelegate:(<FBSSceneDelegate> *)arg0;
- (NSString *)description;
- (<FBSSceneDelegate> *)delegate;
- (FBSDisplay *)fbsDisplay;
- (FBSSceneSettings *)settings;
- (FBSSceneClientSettings *)clientSettings;
- (void)sendActions:(id)arg0;
- (CADisplay *)display;
- (NSString *)identifier;
- (void)attachContext:(NSObject *)arg0;
- (void)detachContext:(NSObject *)arg0;
- (FBSSceneImpl *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0 identifier:(NSString *)arg1 display:(CADisplay *)arg2 settings:(FBSSceneSettings *)arg3 clientSettings:(FBSSceneClientSettings *)arg4;
- (void)updateClientSettingsWithBlock:(id /* block */)arg0;
- (NSMutableArray *)contexts;
- (void)updater:(<FBSSceneUpdater> *)arg0 didUpdateSettings:(NSDictionary *)arg1 withDiff:(id)arg2 transitionContext:(FBSSceneTransitionContext *)arg3 completion:(id /* block */)arg4;
- (NSOperationQueue *)_initWithInternalQueue:(NSObject<OS_dispatch_queue> *)arg0 callOutQueue:(FBSSerialQueue *)arg1 updater:(<FBSSceneUpdater> *)arg2 identifier:(NSString *)arg3 display:(CADisplay *)arg4 settings:(FBSSceneSettings *)arg5 clientSettings:(FBSSceneClientSettings *)arg6;
- (void)updater:(<FBSSceneUpdater> *)arg0 didReceiveActions:(id)arg1;
- (NSString *)_descriptionWithMultilinePrefix:(NSString *)arg0;
- (void)_queue_invalidate;
- (void)updateClientSettings:(NSDictionary *)arg0 withTransitionContext:(NSObject *)arg1;
- (void)attachSceneContext:(NSObject *)arg0;
- (void)detachSceneContext:(NSObject *)arg0;
- (void)_performDelegateCallOut:(id)arg0;
- (NSOperationQueue *)_initWithQueue:(NSObject<OS_dispatch_queue> *)arg0 callOutQueue:(FBSSerialQueue *)arg1 identifier:(NSString *)arg2 display:(CADisplay *)arg3 settings:(FBSSceneSettings *)arg4 clientSettings:(FBSSceneClientSettings *)arg5;
- (void)_updateContext:(NSObject *)arg0;
- (FBSSceneImpl *)_initWithWorkspace:(FBWorkspace *)arg0 updater:(<FBSSceneUpdater> *)arg1 identifier:(NSString *)arg2 display:(CADisplay *)arg3 settings:(FBSSceneSettings *)arg4 clientSettings:(FBSSceneClientSettings *)arg5;
- (NSOperationQueue *)_initWithCallOutQueue:(FBSSerialQueue *)arg0 updater:(<FBSSceneUpdater> *)arg1 identifier:(NSString *)arg2 display:(CADisplay *)arg3 settings:(FBSSceneSettings *)arg4 clientSettings:(FBSSceneClientSettings *)arg5;
- (char)sceneContextShouldObserveUpdates:(id)arg0;
- (void)sceneContextDidUpdate:(NSDate *)arg0;
- (void)sceneContextDidInvalidate:(NSDate *)arg0;

@end
