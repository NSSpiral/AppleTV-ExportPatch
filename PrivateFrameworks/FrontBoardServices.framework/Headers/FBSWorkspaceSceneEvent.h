/* Runtime dump - FBSWorkspaceSceneEvent
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceSceneEvent : FBSWorkspaceEvent
{
    NSString * _sceneID;
}

@property (copy, nonatomic) NSString * sceneID;

- (void)dealloc;
- (FBSWorkspaceSceneEvent *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (NSString *)sceneID;
- (void)setSceneID:(NSString *)arg0;

@end
