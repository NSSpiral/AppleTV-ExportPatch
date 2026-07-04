/* Runtime dump - FBSWorkspaceDestroySceneEvent
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceDestroySceneEvent : FBSWorkspaceSceneEvent
{
    FBSSceneTransitionContext * _transitionContext;
}

@property (retain, nonatomic) FBSSceneTransitionContext * transitionContext;

- (void)dealloc;
- (void)setTransitionContext:(FBSSceneTransitionContext *)arg0;
- (FBSSceneTransitionContext *)transitionContext;
- (FBSWorkspaceDestroySceneEvent *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;

@end
