/* Runtime dump - UIMessageActivity
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMessageActivity : UIActivity
{
    char _sourceIsManaged;
    MFMessageComposeViewController * _messageComposeViewController;
}

@property (nonatomic) char sourceIsManaged;
@property (retain, nonatomic) MFMessageComposeViewController * messageComposeViewController;

+ (int)activityCategory;

- (void)dealloc;
- (void)_cleanup;
- (NSString *)activityType;
- (UIImage *)_activityImage;
- (NSString *)activityTitle;
- (UIImage *)_activitySettingsImage;
- (char)canPerformWithActivityItems:(NSArray *)arg0;
- (char)sourceIsManaged;
- (UIViewController *)activityViewController;
- (void)setSourceIsManaged:(char)arg0;
- (void)prepareWithActivityItems:(NSArray *)arg0;
- (void)setMessageComposeViewController:(MFMessageComposeViewController *)arg0;
- (MFMessageComposeViewController *)messageComposeViewController;
- (void)messageComposeViewController:(MFMessageComposeViewController *)arg0 didFinishWithResult:(int)arg1;

@end
