/* Runtime dump - ATVAirPlayCRDModeShroudController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@class ATVAirPlayCRDModeMessageControl, BREvent;
@interface ATVAirPlayCRDModeShroudController : BRController
{
    ATVAirPlayCRDModeMessageControl * _message;
    char _shouldRequestPINBeforeExit;
}

+ (void)autoshowIfNeeded;

- (char)brEventAction:(BREvent *)arg0;
- (NSArray *)accessibilityScreenContent;
- (void)layoutSubcontrols;
- (void)wasPushed;
- (void)wasPopped;
- (void)_parentalControlPasscodeSuccessful:(id)arg0;
- (char)suppressAutoDismissableDialogs;
- (void)_requestPINBeforeExit;
- (void)_parentalControlPasscodeCancel:(id)arg0;
- (void)dealloc;
- (ATVAirPlayCRDModeShroudController *)init;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;
- (void).cxx_destruct;

@end
