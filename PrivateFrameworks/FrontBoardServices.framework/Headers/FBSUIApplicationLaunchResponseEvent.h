/* Runtime dump - FBSUIApplicationLaunchResponseEvent
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSUIApplicationLaunchResponseEvent : FBSWorkspaceEvent
{
    FBSUIApplicationLaunchResponse * _response;
}

@property (retain, nonatomic) FBSUIApplicationLaunchResponse * response;

- (void)dealloc;
- (FBSUIApplicationLaunchResponse *)response;
- (FBSUIApplicationLaunchResponseEvent *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (void)setResponse:(FBSUIApplicationLaunchResponse *)arg0;

@end
