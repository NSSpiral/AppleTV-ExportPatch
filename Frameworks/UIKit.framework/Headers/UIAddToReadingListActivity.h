/* Runtime dump - UIAddToReadingListActivity
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAddToReadingListActivity : UIActivity

- (NSString *)activityType;
- (UIImage *)_activityImage;
- (NSString *)activityTitle;
- (char)canPerformWithActivityItems:(NSArray *)arg0;
- (void)performActivity;
- (void)prepareWithActivityItems:(NSArray *)arg0;
- (void)_addToReadingList:(NSArray *)arg0 withTitle:(NSString *)arg1;

@end
