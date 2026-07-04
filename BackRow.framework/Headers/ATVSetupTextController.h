/* Runtime dump - ATVSetupTextController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@class BREvent, BRImageControl, BRTextControl, BRWaitSpinnerControl;
@interface ATVSetupTextController : BRController
{
    BRTextControl * _cancelPrompt;
    BRImageControl * _imageControl;
    BRTextControl * _informationPrompt;
    BRWaitSpinnerControl * _spinner;
    BRTextControl * _title;
    char _canBePopped;
    char _showSpinner;
}

@property (nonatomic) char canBePopped;
@property (nonatomic) char showSpinner;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)setCanBePopped:(char)arg0;
- (char)canBePopped;
- (void)setShowSpinner:(char)arg0;
- (ATVSetupTextController *)initWithTitle:(BRTextControl *)arg0 text:(NSString *)arg1 cancelText:(NSString *)arg2;
- (char)showSpinner;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;
- (void).cxx_destruct;

@end
