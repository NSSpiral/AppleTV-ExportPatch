/* Runtime dump - UIPrintActivity
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintActivity : UIActivity
{
    UIViewController * _wrapperViewController;
}

@property (retain) UIViewController * wrapperViewController;

- (void)dealloc;
- (NSString *)activityType;
- (UIImage *)_activityImage;
- (NSString *)activityTitle;
- (void)activityDidFinish:(char)arg0;
- (char)canPerformWithActivityItems:(NSArray *)arg0;
- (void)performActivity;
- (NSObject *)printInteractionControllerParentViewController:(BRController *)arg0;
- (void)prepareWithActivityItems:(NSArray *)arg0;
- (NSObject *)_embeddedActivityViewController;
- (void)setWrapperViewController:(UIViewController *)arg0;
- (void)cancelPrintOptions;
- (UIPrintInteractionController *)printInteractionController;
- (UIViewController *)wrapperViewController;

@end
