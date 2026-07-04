/* Runtime dump - FBSUIApplicationLaunchResponse
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSUIApplicationLaunchResponse : FBSWorkspaceResponse
{
    char _supportsTaskSuspension;
    char _supportsTaskSuspensionOnLock;
    BSMachSendRight * _taskPort;
}

@property (nonatomic) char supportsTaskSuspension;
@property (nonatomic) char supportsTaskSuspensionOnLock;
@property (retain, nonatomic) BSMachSendRight * taskPort;

- (void)dealloc;
- (void)setSupportsTaskSuspension:(char)arg0;
- (void)setSupportsTaskSuspensionOnLock:(char)arg0;
- (FBSUIApplicationLaunchResponse *)initWithXPCDictionary:(NSDictionary *)arg0;
- (BSMachSendRight *)taskPort;
- (void)setTaskPort:(BSMachSendRight *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (char)supportsTaskSuspension;
- (char)supportsTaskSuspensionOnLock;

@end
