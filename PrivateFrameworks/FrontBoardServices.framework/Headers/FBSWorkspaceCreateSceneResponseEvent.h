/* Runtime dump - FBSWorkspaceCreateSceneResponseEvent
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceCreateSceneResponseEvent : FBSWorkspaceSceneUpdateResponseEvent

@property (retain, nonatomic) FBSWorkspaceCreateSceneResponse * response;

- (void)dealloc;
- (FBSWorkspaceCreateSceneResponseEvent *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;

@end
