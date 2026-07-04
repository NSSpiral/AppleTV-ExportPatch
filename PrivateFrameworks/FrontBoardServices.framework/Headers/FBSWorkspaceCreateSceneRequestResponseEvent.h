/* Runtime dump - FBSWorkspaceCreateSceneRequestResponseEvent
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceCreateSceneRequestResponseEvent : FBSWorkspaceEvent
{
    NSString * _sceneID;
}

@property (copy, nonatomic) NSString * sceneID;

- (void)dealloc;
- (FBSWorkspaceCreateSceneRequestResponseEvent *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (NSString *)sceneID;
- (void)setSceneID:(NSString *)arg0;

@end
