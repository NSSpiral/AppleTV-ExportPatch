/* Runtime dump - FBSceneManager
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneManager : NSObject <FBSceneDelegate, FBWindowContextManagerObserver>
{
    <FBSceneManagerDelegate> * _delegate;
    NSHashTable * _observers;
    NSMutableDictionary * _displayToRootWindow;
    NSMutableDictionary * _displayToOcclusionsStack;
    unsigned int _synchronizationBlockDepth;
    unsigned int _synchronizationPort;
    NSMutableDictionary * _scenesByID;
    NSMapTable * _providerToSceneMap;
    NSHashTable * _providersWithOpenTransactions;
    FBSSceneClientSettingsDiffInspector * _clientSettingsDiffInspector;
    char _applyingOrientationTransform;
    int _orientationNotificationToken;
    int _lastOrientation;
    FBSceneEventQueue * _eventQueue;
}

@property (nonatomic) <FBSceneManagerDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (FBSceneManager *)sharedInstance;
+ (void)synchronizeChanges:(id)arg0;

- (void)dealloc;
- (void)setDelegate:(<FBSceneManagerDelegate> *)arg0;
- (FBSceneManager *)init;
- (NSString *)description;
- (<FBSceneManagerDelegate> *)delegate;
- (void)scene:(NSObject *)arg0 didReceiveActions:(id)arg1;
- (void)removeObserver:(NSObject *)arg0;
- (void)addObserver:(NSObject *)arg0;
- (void)enumerateScenesWithBlock:(id /* block */)arg0;
- (void)windowContextManagerWillStartTrackingContexts:(id)arg0;
- (void)windowContextManagerDidStopTrackingContexts:(id)arg0;
- (NSString *)createSceneWithIdentifier:(NSString *)arg0 display:(NSObject *)arg1 settings:(NSDictionary *)arg2 initialClientSettings:(NSDictionary *)arg3 clientProvider:(<FBSceneClientProvider> *)arg4 transitionContext:(FBSSceneTransitionContext *)arg5;
- (void)destroyScene:(NSObject *)arg0 withTransitionContext:(NSObject *)arg1;
- (NSString *)sceneWithIdentifier:(NSString *)arg0;
- (void)_beginSynchronizationBlock;
- (NSObject *)_occlusionStackForDisplay:(NSObject *)arg0 creatingIfNecessary:(char)arg1;
- (void)_sendOutstandingOcclusionChangesWithTransitionContext:(NSObject *)arg0;
- (void)_endSynchronizationBlock;
- (NSObject *)_rootWindowForDisplay:(NSObject *)arg0;
- (void)_destroyScene:(NSObject *)arg0 withTransitionContext:(NSObject *)arg1;
- (void)_updateScene:(NSObject *)arg0 withSettings:(NSDictionary *)arg1 transitionContext:(FBSSceneTransitionContext *)arg2;
- (void)_applyMutableSettings:(NSDictionary *)arg0 toScene:(NSObject *)arg1 asUpdate:(char)arg2 withTransitionContext:(NSObject *)arg3;
- (void)_enqueueObserverCalloutsForScene:(NSObject *)arg0 eventName:(NSString *)arg1 withBlock:(id /* block */)arg2;
- (void)_enqueueEventForScene:(NSObject *)arg0 withName:(NSString *)arg1 block:(id /* block */)arg2;
- (void)_noteSceneMovedToBackground:(NSNotification *)arg0;
- (void)_noteSceneMovedToForeground:(NSNotification *)arg0;
- (void)_noteSceneChangedLevel:(id)arg0;
- (void)_noteSceneChangedFrame:(NSObject *)arg0;
- (void)_reEvaluateNeedForRootWindowOnDisplay:(NSObject *)arg0;
- (void)_updateMainDisplayRootWindowTransformsToWindow:(NSObject *)arg0;
- (void)_positionWrapperViewInRootViewOrderedCorrectly:(id)arg0 rootWindow:(NSObject *)arg1;
- (void)_startContextHostingForScene:(NSObject *)arg0;
- (void)_stopContextHostingForScene:(NSObject *)arg0;
- (void)scene:(NSObject *)arg0 handleUpdateToSettings:(NSDictionary *)arg1 withTransitionContext:(NSObject *)arg2;
- (void)scene:(NSObject *)arg0 handleUpdateSettingsWithBlock:(id /* block */)arg1;
- (void)scene:(NSObject *)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(NSDictionary *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3;
- (NSObject *)hostManagerForSceneID:(NSObject *)arg0;
- (NSObject *)contextManagerForSceneID:(NSObject *)arg0;
- (NSPredicate *)scenesMatchingPredicate:(NSPredicate *)arg0;
- (id)scenesPassingTest:(id /* block */)arg0;
- (NSString *)createSceneWithIdentifier:(NSString *)arg0 settings:(NSDictionary *)arg1 initialClientSettings:(NSDictionary *)arg2 clientProvider:(<FBSceneClientProvider> *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
- (void)attachDefaultTransform:(NSObject *)arg0 forDisplay:(char)arg1;
- (void)removeDefaultTransform:(NSObject *)arg0 forDisplay:(char)arg1;
- (void)shutdown:(char)arg0;
- (void)_orientationChanged:(int)arg0;

@end
