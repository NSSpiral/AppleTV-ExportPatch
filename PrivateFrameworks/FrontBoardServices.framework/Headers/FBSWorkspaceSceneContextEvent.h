/* Runtime dump - FBSWorkspaceSceneContextEvent
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceSceneContextEvent : FBSWorkspaceSceneEvent
{
    FBSContext * _context;
    char _orderOut;
}

@property (retain, nonatomic) FBSContext * context;
@property (nonatomic) char orderOut;

- (void)dealloc;
- (NSString *)description;
- (FBSContext *)context;
- (void)setContext:(FBSContext *)arg0;
- (FBSWorkspaceSceneContextEvent *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (char)orderOut;
- (void)setOrderOut:(char)arg0;

@end
