/* Runtime dump - FBSWorkspaceCreateSceneEvent
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceCreateSceneEvent : FBSWorkspaceSceneUpdateEvent
{
    FBSSceneClientSettingsDiff * _clientSettings;
    FBSDisplay * _display;
}

@property (retain, nonatomic) FBSSceneClientSettingsDiff * clientSettingsDiff;
@property (retain, nonatomic) FBSDisplay * display;

- (void)dealloc;
- (FBSDisplay *)display;
- (FBSWorkspaceCreateSceneEvent *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (FBSSceneClientSettingsDiff *)clientSettingsDiff;
- (void)setClientSettingsDiff:(FBSSceneClientSettingsDiff *)arg0;
- (void)setDisplay:(FBSDisplay *)arg0;

@end
