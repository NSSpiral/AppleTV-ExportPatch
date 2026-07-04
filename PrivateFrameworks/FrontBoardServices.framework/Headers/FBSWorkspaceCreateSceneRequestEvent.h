/* Runtime dump - FBSWorkspaceCreateSceneRequestEvent
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceCreateSceneRequestEvent : FBSWorkspaceEvent
{
    FBSSceneClientSettingsDiff * _clientSettings;
}

@property (retain, nonatomic) FBSSceneClientSettingsDiff * clientSettingsDiff;

- (void)dealloc;
- (FBSWorkspaceCreateSceneRequestEvent *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (FBSSceneClientSettingsDiff *)clientSettingsDiff;
- (void)setClientSettingsDiff:(FBSSceneClientSettingsDiff *)arg0;

@end
