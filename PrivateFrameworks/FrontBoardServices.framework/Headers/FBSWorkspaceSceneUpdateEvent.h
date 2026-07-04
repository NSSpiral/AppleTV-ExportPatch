/* Runtime dump - FBSWorkspaceSceneUpdateEvent
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceSceneUpdateEvent : FBSWorkspaceSceneEvent
{
    FBSSceneSettingsDiff * _settings;
    FBSSceneTransitionContext * _transitionContext;
}

@property (retain, nonatomic) FBSSceneSettingsDiff * settingsDiff;
@property (retain, nonatomic) FBSSceneTransitionContext * transitionContext;

- (void)dealloc;
- (void)setTransitionContext:(FBSSceneTransitionContext *)arg0;
- (FBSSceneTransitionContext *)transitionContext;
- (FBSWorkspaceSceneUpdateEvent *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (void)setSettingsDiff:(FBSSceneSettingsDiff *)arg0;
- (FBSSceneSettingsDiff *)settingsDiff;

@end
