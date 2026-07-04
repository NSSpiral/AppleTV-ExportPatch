/* Runtime dump - LTThermalNoticeController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BREvent;
@interface LTThermalNoticeController : BRViewController
{
    NSTimer * _activityTimer;
}

+ (void)showThermalLevelPopup;

- (char)brEventAction:(BREvent *)arg0;
- (void)wasPopped;
- (void)_simulateActivity:(id)arg0;
- (LTThermalNoticeController *)init;
- (void).cxx_destruct;

@end
