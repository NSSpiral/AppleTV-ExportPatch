/* Runtime dump - LTAirPlayPresentationController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@class BRControl, BREvent, BRWaitPromptControl;
@interface LTAirPlayPresentationController : BRController
{
    BRControl * _presentationControl;
    BRWaitPromptControl * _waitPrompt;
    int _stopCount;
    double _savedAutoPresentTimeout;
    NSTimer * _backgroundTaskHoldoffTimer;
    char _suspended;
}

- (char)brEventAction:(BREvent *)arg0;
- (void)wasPopped;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)stopPresentation;
- (void)showProgress;
- (void)hideProgress;
- (void)_backgroundTaskHoldoffTimer:(NSObject *)arg0;
- (void)dealloc;
- (LTAirPlayPresentationController *)init;
- (void)suspend;
- (CALayer *)presentationLayer;
- (void)resume;
- (void).cxx_destruct;

@end
