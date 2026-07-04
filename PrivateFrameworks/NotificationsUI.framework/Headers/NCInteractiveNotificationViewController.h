/* Runtime dump - NCInteractiveNotificationViewController
 * Image: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
 */

@interface NCInteractiveNotificationViewController : UIViewController <NCInteractiveNotificationServiceInterface>
{
    char _modal;
    NSDictionary * _context;
    float _maximumHeight;
}

@property (copy, nonatomic) NSDictionary * context;
@property (nonatomic) char modal;
@property (nonatomic) float maximumHeight;

+ (NSXPCInterface *)_exportedInterface;
+ (NCInteractiveNotificationViewController *)_remoteViewControllerInterface;

- (char)isModal;
- (void)dealloc;
- (NSDictionary *)context;
- (void)setContext:(NSDictionary *)arg0;
- (void)viewDidLoad;
- (char)showsKeyboard;
- (void)_setContext:(NSObject *)arg0;
- (float)preferredContentHeight;
- (float)bottomOverhangHeight;
- (NCViewServiceDescriptor *)inlayViewService;
- (NCViewServiceDescriptor *)accessoryViewService;
- (void)setModal:(char)arg0;
- (void)setMaximumHeight:(float)arg0;
- (void)interactiveNotificationDidAppear;
- (void)didChangeRevealPercent:(float)arg0;
- (NSString *)actionContext;
- (id)actionTitles;
- (void)handleActionAtIndex:(unsigned int)arg0;
- (void)proximityStateDidChange:(char)arg0;
- (void)handleActionIdentifier:(NSString *)arg0;
- (void)willPresentFromActionIdentifier:(NSString *)arg0;
- (void)_getInitialStateWithCompletion:(id /* block */)arg0;
- (void)_setMaximumHeight:(float)arg0;
- (void)_setModal:(char)arg0;
- (void)_interactiveNotificationDidAppear;
- (void)_proximityStateDidChange:(char)arg0;
- (void)_didChangeRevealPercent:(float)arg0;
- (void)_willPresentFromActionIdentifier:(NSString *)arg0;
- (void)_getActionContextWithCompletion:(id /* block */)arg0;
- (void)_getActionTitlesWithCompletion:(id /* block */)arg0;
- (void)_handleActionAtIndex:(unsigned int)arg0;
- (void)_handleActionIdentifier:(NSString *)arg0;
- (void)dismissWithContext:(NSDictionary *)arg0;
- (void)requestDismissalEnabled:(char)arg0;
- (void)requestPreferredContentHeight:(float)arg0;
- (void)setActionEnabled:(char)arg0 atIndex:(unsigned int)arg1;
- (void)requestProximityMonitoringEnabled:(char)arg0;
- (float)maximumHeight;

@end
