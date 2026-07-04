/* Runtime dump - BRTextEntryDialog
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRTextEntryController.h>

@protocol BRTextFieldDelegate;

@class BREvent, BROptionDialog;
@interface BRTextEntryDialog : BRTextEntryController <BRTextFieldDelegate>
{
    NSString * _dialogID;
    char _canceled;
    BROptionDialog * _errorDialog;
}

@property (retain, nonatomic) BROptionDialog * errorDialog;

- (char)brEventAction:(BREvent *)arg0;
- (BRTextEntryDialog *)initWithTextEntryStyle:(int)arg0;
- (id)runModal;
- (void)textDidEndEditing:(id /* <BRTextField> */)arg0;
- (void)setErrorDialog:(BROptionDialog *)arg0;
- (BROptionDialog *)errorDialog;
- (NSString *)dialogID;
- (void)dealloc;
- (void)textDidChange:(id /* <BRTextField> */)arg0;

@end
