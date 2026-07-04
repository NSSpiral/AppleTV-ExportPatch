/* Runtime dump - FBSWorkspaceEvent
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceEvent : NSObject <BSXPCCoding>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (FBSWorkspaceEvent *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;

@end
