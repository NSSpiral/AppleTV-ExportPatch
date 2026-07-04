/* Runtime dump - UIActivity
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIActivity : NSObject
{
    int _defaultPriority;
    id _activityCompletionHandler;
    id _activityCompletionWithItemsHandler;
}

@property (readonly, nonatomic) NSExtension * applicationExtension;
@property (copy, nonatomic) id activityCompletionHandler;
@property (copy, nonatomic) id activityCompletionWithItemsHandler;

+ (int)activityCategory;
+ (UIImage *)_activityFunctionImage:(UIImage *)arg0;
+ (UIActivity *)_activityImageForApplication:(id)arg0;
+ (UIActivity *)_activitySettingsImageForApplication:(id)arg0;
+ (UIImage *)_activityGenericImage:(UIImage *)arg0;

- (void)dealloc;
- (void)_cleanup;
- (struct CGSize)_thumbnailSize;
- (NSString *)activityType;
- (UIImage *)_activityImage;
- (NSString *)activityTitle;
- (NSExtension *)applicationExtension;
- (void)activityDidFinish:(char)arg0;
- (UIImage *)_activitySettingsImage;
- (char)canPerformWithActivityItems:(NSArray *)arg0;
- (void)performActivity;
- (UIImage *)activityImage;
- (UIViewController *)activityViewController;
- (void)activityDidFinish:(char)arg0 items:(NSArray *)arg1 error:(NSError *)arg2;
- (void)_injectedJavaScriptResult:(NSObject *)arg0;
- (char)_canBeExcludedByActivityViewController:(BRController *)arg0;
- (void)prepareWithActivityItems:(NSArray *)arg0;
- (char)_presentActivityOnViewController:(BRController *)arg0 animated:(char)arg1 completion:(id /* block */)arg2;
- (char)_dismissActivityFromViewController:(BRController *)arg0 animated:(char)arg1 completion:(id /* block */)arg2;
- (id /* block */)activityCompletionHandler;
- (void)setActivityCompletionHandler:(id /* block */)arg0;
- (id /* block */)activityCompletionWithItemsHandler;
- (void)setActivityCompletionWithItemsHandler:(id /* block */)arg0;
- (UIImage *)activitySettingsImage;
- (char)_canPerformWithSuppliedActivityItems:(NSArray *)arg0;
- (id)_beforeActivity;
- (void)_setActivityCompletionHandler:(id /* block */)arg0;
- (void)_setActivityCompletionWithItemsHandler:(id /* block */)arg0;
- (NSObject *)_embeddedActivityViewController;
- (void)_willPresentAsFormSheet;
- (void)_setSubject:(SBFSubject *)arg0;
- (NSObject *)_subjectForActivityItem:(NSObject *)arg0;
- (NSObject *)_dataTypeIdentifierForActivityItem:(NSObject *)arg0;
- (NSObject *)_thumbnailImageForActivityItem:(NSObject *)arg0;
- (NSObject *)_attachmentNameForActivityItem:(NSObject *)arg0;

@end
