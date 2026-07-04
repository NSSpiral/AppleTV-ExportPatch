/* Runtime dump - FBSSceneClientSettingsDiffInspector
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneClientSettingsDiffInspector : NSObject
{
    BSMutableSettings * _observerInfo;
    char _iteratingObservers;
}

- (void)dealloc;
- (FBSSceneClientSettingsDiffInspector *)init;
- (NSString *)description;
- (void)inspectDiff:(id)arg0 withContext:(void *)arg1;
- (void)observeOtherSetting:(unsigned int)arg0 withBlock:(id /* block */)arg1;
- (void)observeOcclusionsWithBlock:(id /* block */)arg0;
- (void)_addObserver:(NSObject *)arg0 forSetting:(unsigned int)arg1 inInfo:(NSDictionary *)arg2;
- (void)removeAllObservers;
- (void)observeClassWithBlock:(id /* block */)arg0;
- (void)observePreferredLevelWithBlock:(id /* block */)arg0;
- (void)observePreferredInterfaceOrientationWithBlock:(id /* block */)arg0;

@end
