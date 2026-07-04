/* Runtime dump - HMUserListRemoteViewController
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMUserListRemoteViewController : _UIRemoteViewController <HMUserManagementRemoteHost>
{
    <HMUserManagementRemoteHost> * _delegate;
}

@property (weak, nonatomic) <HMUserManagementRemoteHost> * delegate;

+ (HMUserListRemoteViewController *)requestViewControllerWithConnectionHandler:(<ATVSecureKeyStandardLoaderConnectionHandling> *)arg0;
+ (HMUserListRemoteViewController *)serviceViewControllerInterface;
+ (NSXPCInterface *)exportedInterface;

- (void)userManagementDidFinishWithError:(NSError *)arg0;
- (void)userManagementDidLoad;
- (void)setDelegate:(<HMUserManagementRemoteHost> *)arg0;
- (<HMUserManagementRemoteHost> *)delegate;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(NSError *)arg0;
- (void).cxx_destruct;

@end
