/* Runtime dump - UICopyToPasteboardActivity
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICopyToPasteboardActivity : UIActivity

- (NSString *)activityType;
- (UIImage *)_activityImage;
- (NSString *)activityTitle;
- (char)canPerformWithActivityItems:(NSArray *)arg0;
- (void)performActivity;
- (void)prepareWithActivityItems:(NSArray *)arg0;
- (TSPPasteboard *)pasteboard;

@end
