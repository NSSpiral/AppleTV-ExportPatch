/* Runtime dump - SBUIPluginController
 * Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIPluginController : NSObject <SBPluginBundleController>
{
    <SBUIPluginControllerHost> * _host;
    char _isVisible;
}

@property (nonatomic) <SBUIPluginControllerHost> * host;
@property (nonatomic) char visible;

- (void)setVisible:(char)arg0;
- (char)isVisible;
- (<SBUIPluginControllerHost> *)host;
- (void)setHost:(<SBUIPluginControllerHost> *)arg0;
- (char)handledMenuButtonDownEvent;
- (char)handledMenuButtonUpEvent;
- (char)handledMenuButtonTap;
- (void)registeredWithHost;
- (char)supportedAndEnabled;
- (char)wantsActivationEvent:(int)arg0 eventSource:(int)arg1 interval:(double *)arg2;
- (void)prepareForActivationEvent:(int)arg0 eventSource:(int)arg1 afterInterval:(double)arg2;
- (void)cancelPendingActivationEvent:(int)arg0;
- (char)handleActivationEvent:(int)arg0 eventSource:(int)arg1 context:(void *)arg2;
- (char)handledPasscodeUnlockWithCompletion:(id /* block */)arg0;
- (void)handleBluetoothDismissal;
- (void)handlePreheatCommand;
- (char)handledWiredMicButtonTap;
- (char)handledButtonDownEventFromSource:(int)arg0;
- (char)handledButtonUpEventFromSource:(int)arg0;
- (char)handledButtonTapFromSource:(int)arg0;
- (NSString *)viewControllerForActivationContext:(NSObject *)arg0;
- (void)viewPartiallyRevealedWithPercentRevealed:(float)arg0;
- (void)handleViewFullyRevealed;

@end
