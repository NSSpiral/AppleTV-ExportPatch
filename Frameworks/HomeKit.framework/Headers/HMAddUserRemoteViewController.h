/* Runtime dump - HMAddUserRemoteViewController
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAddUserRemoteViewController : _UIRemoteViewController <HMUserManagementRemoteHost>
{
    <HMUserManagementRemoteHost> * _delegate;
}

@property (weak, nonatomic) <HMUserManagementRemoteHost> * delegate;

+ (HMAddUserRemoteViewController *)requestViewControllerWithConnectionHandler:(<ATVSecureKeyStandardLoaderConnectionHandling> *)arg0;
+ (HMAddUserRemoteViewController *)serviceViewControllerInterface;
+ (NSXPCInterface *)exportedInterface;

- (void)userManagementDidFinishWithError:(NSError *)arg0;
- (void)userManagementDidLoad;
- (void)setDelegate:(<HMUserManagementRemoteHost> *)arg0;
- (<HMUserManagementRemoteHost> *)delegate;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(NSError *)arg0;
- (void).cxx_destruct;

@end
