/* Runtime dump - BRTextEntryButtonsDialog
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRTextEntryDialog.h>

@class BRTextControlWithWiderFocusFrame;
@interface BRTextEntryButtonsDialog : BRTextEntryDialog
{
    BRTextControlWithWiderFocusFrame * _otherButton;
    NSObject<BRTextEntryDelegate> * _textEntryDelegate;
}

@property (weak, nonatomic) NSObject<BRTextEntryDelegate> * delegate;

- (BRTextEntryButtonsDialog *)initWithTextEntryStyle:(int)arg0;
- (void)layoutSubcontrols;
- (void)_switchFocusToSubmitButton;
- (void)_submitButtonClick:(id)arg0;
- (char)_isSubmitButtonFocused;
- (void)_removeFocusFromSubmitButton;
- (NSString *)_submitButtonTitle;
- (void)_otherButtonClick:(id)arg0;
- (NSString *)_otherButtonTitle;
- (void)setDelegate:(NSObject<BRTextEntryDelegate> *)arg0;
- (NSObject<BRTextEntryDelegate> *)delegate;
- (void).cxx_destruct;

@end
