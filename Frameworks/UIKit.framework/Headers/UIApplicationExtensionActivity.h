/* Runtime dump - UIApplicationExtensionActivity
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIApplicationExtensionActivity : UIActivity
{
    NSExtension * _applicationExtension;
    NSExtensionItem * __injectedExtensionItem;
    UIViewController * _extensionViewController;
    id _extensionContextIdentifier;
    UIViewController * _presenterViewController;
    id _presenterCompletion;
    _UIActivityBundleHelper * _activityBundleHelper;
    NSString * _localizedExtensionBundleName;
    UIImage * _renderedActivityImage;
    UIImage * _renderedActivitySettingsImage;
    id _extensionRequestCleanupCompletion;
}

@property (retain, nonatomic) NSExtension * applicationExtension;
@property (retain, nonatomic) NSExtensionItem * _injectedExtensionItem;
@property (retain, nonatomic) UIViewController * extensionViewController;
@property (copy, nonatomic) id extensionContextIdentifier;
@property (nonatomic) UIViewController * presenterViewController;
@property (copy, nonatomic) id presenterCompletion;
@property (retain, nonatomic) _UIActivityBundleHelper * activityBundleHelper;
@property (copy, nonatomic) NSString * localizedExtensionBundleName;
@property (retain, nonatomic) UIImage * renderedActivityImage;
@property (retain, nonatomic) UIImage * renderedActivitySettingsImage;
@property (copy, nonatomic) id extensionRequestCleanupCompletion;

+ (int)activityCategory;
+ (NSArray *)_applicationExtensionActivitiesForItems:(NSArray *)arg0;

- (void)dealloc;
- (NSString *)debugDescription;
- (void)_cleanup;
- (NSString *)activityType;
- (UIImage *)_activityImage;
- (NSString *)activityTitle;
- (NSExtension *)applicationExtension;
- (UIImage *)_activitySettingsImage;
- (char)canPerformWithActivityItems:(NSArray *)arg0;
- (void)setApplicationExtension:(NSExtension *)arg0;
- (void)set_injectedExtensionItem:(NSExtensionItem *)arg0;
- (NSString *)localizedExtensionBundleName;
- (_UIActivityBundleHelper *)activityBundleHelper;
- (void)setLocalizedExtensionBundleName:(NSString *)arg0;
- (UIImage *)renderedActivityImage;
- (void)setRenderedActivityImage:(UIImage *)arg0;
- (UIImage *)renderedActivitySettingsImage;
- (void)setRenderedActivitySettingsImage:(UIImage *)arg0;
- (NSExtensionItem *)_injectedExtensionItem;
- (char)_isServiceExtension;
- (void)setExtensionRequestCleanupCompletion:(id /* block */)arg0;
- (void)setExtensionContextIdentifier:(NSString *)arg0;
- (void)_instantiateExtensionViewControllerWithInputItems:(NSArray *)arg0;
- (void)setPresenterViewController:(UIViewController *)arg0;
- (void)setPresenterCompletion:(id /* block */)arg0;
- (void)_presentExtensionViewControllerIfPossible;
- (UIViewController *)extensionViewController;
- (id /* block */)extensionRequestCleanupCompletion;
- (void)setExtensionViewController:(UIViewController *)arg0;
- (UIViewController *)presenterViewController;
- (id /* block */)presenterCompletion;
- (UIApplicationExtensionActivity *)initWithApplicationExtension:(NSExtension *)arg0;
- (void)_injectedJavaScriptResult:(NSObject *)arg0;
- (char)_canBeExcludedByActivityViewController:(BRController *)arg0;
- (void)prepareWithActivityItems:(NSArray *)arg0;
- (char)_presentActivityOnViewController:(BRController *)arg0 animated:(char)arg1 completion:(id /* block */)arg2;
- (char)_dismissActivityFromViewController:(BRController *)arg0 animated:(char)arg1 completion:(id /* block */)arg2;
- (NSString *)extensionContextIdentifier;
- (void)setActivityBundleHelper:(_UIActivityBundleHelper *)arg0;

@end
