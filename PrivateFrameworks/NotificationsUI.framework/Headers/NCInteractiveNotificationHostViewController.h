/* Runtime dump - NCInteractiveNotificationHostViewController
 * Image: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
 */

@interface NCInteractiveNotificationHostViewController : _UIRemoteViewController <NCInteractiveNotificationHostInterface, NCInteractiveNotificationHostDelegate>
{
    char _proximityMonitoringEnabled;
    char _showsKeyboard;
    char _modal;
    <NCInteractiveNotificationHostDelegate> * _delegate;
    float _bottomOverhangHeight;
    float _maximumHeight;
    NCViewServiceDescriptor * _inlayViewService;
    NCViewServiceDescriptor * _accessoryViewService;
}

@property (nonatomic) <NCInteractiveNotificationHostDelegate> * delegate;
@property (nonatomic) char showsKeyboard;
@property (nonatomic) float bottomOverhangHeight;
@property (nonatomic) char modal;
@property (nonatomic) float maximumHeight;
@property (retain, nonatomic) NCViewServiceDescriptor * inlayViewService;
@property (retain, nonatomic) NCViewServiceDescriptor * accessoryViewService;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;
+ (NCInteractiveNotificationHostViewController *)serviceViewControllerInterface;
+ (NSXPCInterface *)exportedInterface;
+ (void)requestInteractiveNotificationControllerWithName:(NSString *)arg0 bundleIdentifier:(NSString *)arg1 context:(NSObject *)arg2 completion:(id /* block */)arg3;

- (char)isModal;
- (void)dealloc;
- (void)setDelegate:(<NCInteractiveNotificationHostDelegate> *)arg0;
- (<NCInteractiveNotificationHostDelegate> *)delegate;
- (char)showsKeyboard;
- (void)_dismissWithContext:(NSObject *)arg0;
- (void)_requestDismissalEnabled:(char)arg0;
- (void)_requestPreferredContentHeight:(float)arg0;
- (void)_setActionEnabled:(char)arg0 atIndex:(unsigned int)arg1;
- (void)_requestProximityMonitoringEnabled:(char)arg0;
- (float)bottomOverhangHeight;
- (NCViewServiceDescriptor *)inlayViewService;
- (NCViewServiceDescriptor *)accessoryViewService;
- (void)setModal:(char)arg0;
- (void)setMaximumHeight:(float)arg0;
- (void)interactiveNotificationDidAppear;
- (void)didChangeRevealPercent:(float)arg0;
- (void)handleActionAtIndex:(int)arg0;
- (void)handleActionIdentifier:(NSString *)arg0;
- (void)willPresentFromActionIdentifier:(NSString *)arg0;
- (float)maximumHeight;
- (void)setShowsKeyboard:(char)arg0;
- (void)setBottomOverhangHeight:(float)arg0;
- (void)setInlayViewService:(NCViewServiceDescriptor *)arg0;
- (void)setAccessoryViewService:(NCViewServiceDescriptor *)arg0;
- (void)_setProximityMonitoringEnabled:(char)arg0;
- (void)_proximityStateChanged:(NSNotification *)arg0;
- (void)getActionContextWithCompletion:(id /* block */)arg0;

@end
