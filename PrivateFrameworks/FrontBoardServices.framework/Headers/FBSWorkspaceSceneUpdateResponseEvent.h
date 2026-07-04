/* Runtime dump - FBSWorkspaceSceneUpdateResponseEvent
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceSceneUpdateResponseEvent : FBSWorkspaceSceneEvent
{
    FBSWorkspaceSceneUpdateResponse * _response;
}

@property (retain, nonatomic) FBSWorkspaceSceneUpdateResponse * response;

- (void)dealloc;
- (FBSWorkspaceSceneUpdateResponse *)response;
- (FBSWorkspaceSceneUpdateResponseEvent *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (void)setResponse:(FBSWorkspaceSceneUpdateResponse *)arg0;

@end
