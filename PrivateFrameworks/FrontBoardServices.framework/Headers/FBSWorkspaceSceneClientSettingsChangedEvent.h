/* Runtime dump - FBSWorkspaceSceneClientSettingsChangedEvent
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceSceneClientSettingsChangedEvent : FBSWorkspaceSceneEvent
{
    FBSSceneClientSettingsDiff * _clientSettings;
    FBSSceneTransitionContext * _transition;
}

@property (retain, nonatomic) FBSSceneClientSettingsDiff * clientSettingsDiff;
@property (retain, nonatomic) FBSSceneTransitionContext * transitionContext;

- (void)dealloc;
- (void)setTransitionContext:(FBSSceneTransitionContext *)arg0;
- (FBSSceneTransitionContext *)transitionContext;
- (FBSWorkspaceSceneClientSettingsChangedEvent *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (FBSSceneClientSettingsDiff *)clientSettingsDiff;
- (void)setClientSettingsDiff:(FBSSceneClientSettingsDiff *)arg0;

@end
