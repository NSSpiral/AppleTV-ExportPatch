/* Runtime dump - HMAddUserViewController
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAddUserViewController : UIViewController <HMUserManagementRemoteHost>
{
    char _shouldPresentWhenLoaded;
    HMHome * _home;
    id _completionHandler;
    id _loadHandler;
    _UIAsyncInvocation * _cancelServiceInvocation;
    HMAddUserRemoteViewController * _remoteViewController;
}

@property (retain, nonatomic) HMHome * home;
@property (copy, nonatomic) id completionHandler;
@property (nonatomic) char shouldPresentWhenLoaded;
@property (copy, nonatomic) id loadHandler;
@property (retain, nonatomic) _UIAsyncInvocation * cancelServiceInvocation;
@property (retain, nonatomic) HMAddUserRemoteViewController * remoteViewController;

- (void)userManagementDidFinishWithError:(NSError *)arg0;
- (void)userManagementDidLoad;
- (void)setLoadHandler:(id /* block */)arg0;
- (void)setShouldPresentWhenLoaded:(char)arg0;
- (void)_finishSetupWithError:(NSError *)arg0;
- (void)_configureAndAddRemoteViewController;
- (void)setCancelServiceInvocation:(_UIAsyncInvocation *)arg0;
- (char)shouldPresentWhenLoaded;
- (void)_presentAsTopmostViewController;
- (id /* block */)loadHandler;
- (void)presentWhenLoaded;
- (_UIAsyncInvocation *)cancelServiceInvocation;
- (HMAddUserViewController *)initWithHome:(HMHome *)arg0 loadHandler:(id /* block */)arg1;
- (void)_requestRemoteViewController;
- (char)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (id /* block */)completionHandler;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)arg0;
- (HMAddUserRemoteViewController *)remoteViewController;
- (void)setRemoteViewController:(HMAddUserRemoteViewController *)arg0;
- (HMHome *)home;
- (void)setHome:(HMHome *)arg0;

@end
