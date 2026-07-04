/* Runtime dump - FBSWorkspaceActionsEvent
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceActionsEvent : FBSWorkspaceEvent
{
    NSSet * _actions;
}

@property (copy, nonatomic) NSSet * actions;

- (void)dealloc;
- (NSSet *)actions;
- (FBSWorkspaceActionsEvent *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (void)setActions:(NSSet *)arg0;

@end
