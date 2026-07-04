/* Runtime dump - HMSetupViewController
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMSetupViewController : UIViewController <HMSetupRemoteHost>
{
    char _cancelling;
    char _disconnected;
    char _shouldPresentWhenLoaded;
    HMHome * _home;
    HMSetupAccessoryDescription * _accessoryDescription;
    id _completionHandler;
    id _loadHandler;
    _UIAsyncInvocation * _cancelServiceInvocation;
    HMSetupRemoteViewController * _remoteViewController;
}

@property (retain, nonatomic) HMHome * home;
@property (retain, nonatomic) HMSetupAccessoryDescription * accessoryDescription;
@property (copy, nonatomic) id completionHandler;
@property (nonatomic) char cancelling;
@property (nonatomic) char disconnected;
@property (nonatomic) char shouldPresentWhenLoaded;
@property (copy, nonatomic) id loadHandler;
@property (retain, nonatomic) _UIAsyncInvocation * cancelServiceInvocation;
@property (retain, nonatomic) HMSetupRemoteViewController * remoteViewController;

- (void)accessorySetupDidFinishWithError:(NSError *)arg0;
- (void)accessorySetupDidLoad;
- (void)setupFailedWithError:(NSError *)arg0;
- (void)setupInterruptedWithError:(NSError *)arg0;
- (HMSetupViewController *)initWithHome:(HMHome *)arg0 accessoryDescription:(HMSetupAccessoryDescription *)arg1 loadHandler:(id /* block */)arg2;
- (void)setAccessoryDescription:(HMSetupAccessoryDescription *)arg0;
- (void)setLoadHandler:(id /* block */)arg0;
- (void)setCancelling:(char)arg0;
- (void)setDisconnected:(char)arg0;
- (void)setShouldPresentWhenLoaded:(char)arg0;
- (void)_finishSetupWithError:(NSError *)arg0;
- (void)_configureAndAddRemoteViewController;
- (void)setCancelServiceInvocation:(_UIAsyncInvocation *)arg0;
- (HMSetupAccessoryDescription *)accessoryDescription;
- (char)shouldPresentWhenLoaded;
- (void)_presentAsTopmostViewController;
- (id /* block */)loadHandler;
- (void)presentWhenLoaded;
- (char)isCancelling;
- (char)isDisconnected;
- (_UIAsyncInvocation *)cancelServiceInvocation;
- (void)_requestRemoteViewController;
- (HMSetupViewController *)init;
- (unsigned int)supportedInterfaceOrientations;
- (id /* block */)completionHandler;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)arg0;
- (HMSetupRemoteViewController *)remoteViewController;
- (void)setRemoteViewController:(HMSetupRemoteViewController *)arg0;
- (HMHome *)home;
- (void)setHome:(HMHome *)arg0;

@end
