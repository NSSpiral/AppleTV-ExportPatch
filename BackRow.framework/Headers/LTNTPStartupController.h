/* Runtime dump - LTNTPStartupController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@class BREvent, BRTextControl, BRWaitPromptControl;
@interface LTNTPStartupController : BRController
{
    BRWaitPromptControl * _promptAndSpinner;
    BRTextControl * _subtext;
}

- (char)brEventAction:(BREvent *)arg0;
- (void)_timeChangeNotification:(NSNotification *)arg0;
- (void)layoutSubcontrols;
- (void)wasPushed;
- (void)wasPopped;
- (void)_checkForNetworkTimeAfterPosted;
- (void)dealloc;
- (LTNTPStartupController *)init;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;
- (void).cxx_destruct;
- (void)_networkChanged:(NSNotification *)arg0;

@end
