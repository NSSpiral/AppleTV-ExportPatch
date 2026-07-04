/* Runtime dump - HMSetupRemoteViewController
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMSetupRemoteViewController : _UIRemoteViewController <HMSetupRemoteHost>
{
    <HMSetupRemoteHost> * _delegate;
}

@property (weak, nonatomic) <HMSetupRemoteHost> * delegate;

+ (HMSetupRemoteViewController *)requestViewControllerWithConnectionHandler:(<ATVSecureKeyStandardLoaderConnectionHandling> *)arg0;
+ (HMSetupRemoteViewController *)serviceViewControllerInterface;
+ (NSXPCInterface *)exportedInterface;

- (void)accessorySetupDidFinishWithError:(NSError *)arg0;
- (void)accessorySetupDidLoad;
- (void)setDelegate:(<HMSetupRemoteHost> *)arg0;
- (<HMSetupRemoteHost> *)delegate;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(NSError *)arg0;
- (void).cxx_destruct;

@end
