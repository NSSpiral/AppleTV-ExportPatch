/* Runtime dump - UISocialActivity
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISocialActivity : UIApplicationExtensionActivity
{
    NSString * _builtinActivityType;
    SLComposeViewController * _socialComposeViewController;
}

@property (copy, nonatomic) NSString * builtinActivityType;
@property (retain, nonatomic) SLComposeViewController * socialComposeViewController;

+ (int)activityCategory;

- (void)dealloc;
- (NSString *)debugDescription;
- (void)_cleanup;
- (struct CGSize)_thumbnailSize;
- (NSString *)activityType;
- (char)canPerformWithActivityItems:(NSArray *)arg0;
- (UIViewController *)activityViewController;
- (UISocialActivity *)initWithActivityType:(NSObject *)arg0;
- (UISocialActivity *)initWithApplicationExtension:(NSExtension *)arg0;
- (char)_canBeExcludedByActivityViewController:(BRController *)arg0;
- (void)prepareWithActivityItems:(NSArray *)arg0;
- (char)_presentActivityOnViewController:(BRController *)arg0 animated:(char)arg1 completion:(id /* block */)arg2;
- (char)_dismissActivityFromViewController:(BRController *)arg0 animated:(char)arg1 completion:(id /* block */)arg2;
- (void)setBuiltinActivityType:(NSString *)arg0;
- (NSString *)builtinActivityType;
- (void)setSocialComposeViewController:(SLComposeViewController *)arg0;
- (SLComposeViewController *)socialComposeViewController;

@end
