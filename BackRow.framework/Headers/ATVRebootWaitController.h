/* Runtime dump - ATVRebootWaitController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BREvent;
@interface ATVRebootWaitController : BRViewController
{
    NSTimer * _holdoffTimer;
}

- (char)brEventAction:(BREvent *)arg0;
- (void)wasPopped;
- (void)_holdOffScreenSaver:(id)arg0;
- (void)_handleUpdateProgress:(id)arg0;
- (NSString *)secondaryProgressImagePath;
- (void)dealloc;
- (ATVRebootWaitController *)init;

@end
