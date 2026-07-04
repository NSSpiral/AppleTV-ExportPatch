/* Runtime dump - ATVRadioVisualEngagementController
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVRadioVisualEngagementController : NSObject
{
    char _visuallyEngaged;
}

@property (nonatomic) char visuallyEngaged;

- (void)_screenSaverActivated:(id)arg0;
- (void)_screenSaverDismissed:(id)arg0;
- (char)isVisuallyEngaged;
- (void)dealloc;
- (ATVRadioVisualEngagementController *)init;
- (void)setVisuallyEngaged:(char)arg0;

@end
