/* Runtime dump - FBSWorkspaceSceneActionsEvent
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceSceneActionsEvent : FBSWorkspaceSceneEvent
{
    NSSet * _actions;
}

@property (copy, nonatomic) NSSet * actions;

- (void)dealloc;
- (NSSet *)actions;
- (FBSWorkspaceSceneActionsEvent *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (void)setActions:(NSSet *)arg0;

@end
