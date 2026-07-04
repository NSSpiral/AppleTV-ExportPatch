/* Runtime dump - UIWebFormDelegate
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebFormDelegate : NSObject <WebFormDelegate>
{
    UIWebBrowserView * _webBrowserView;
    _UIWebFormDelegateEditedFormsMap * _editedForms;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)acceptedAutoFillWord:(id)arg0;
- (struct ?)suggestionsForString:(NSString *)arg0 inputIndex:(unsigned int)arg1;
- (char)hasCurrentSuggestions;
- (char)_shouldIgnoreFormTextChangesInFrame:(NSObject *)arg0;
- (void)_didEditFormElement:(NSObject *)arg0 inFrame:(char)arg1;
- (void)_clearEditedFormsInFrame:(NSObject *)arg0;
- (void)textFieldDidBeginEditing:(UITextField *)arg0 inFrame:(char)arg1;
- (void)textFieldDidEndEditing:(UITextField *)arg0 inFrame:(char)arg1;
- (void)textDidChangeInTextField:(id)arg0 inFrame:(char)arg1;
- (void)textDidChangeInTextArea:(id)arg0 inFrame:(char)arg1;
- (void)didFocusTextField:(id)arg0 inFrame:(char)arg1;
- (char)textField:(UITextField *)arg0 doCommandBySelector:(SEL)arg1 inFrame:(char)arg2;
- (void)frame:(struct CGRect)arg0 sourceFrame:(NSObject *)arg1 willSubmitForm:(id)arg2 withValues:(NSArray *)arg3 submissionListener:(id)arg4;
- (void)willSendSubmitEventToForm:(id)arg0 inFrame:(char)arg1 withValues:(NSArray *)arg2;
- (UIWebFormDelegate *)initWithWebBrowserView:(UIWebBrowserView *)arg0;
- (void)dataSourceHasChangedForFrame:(NSObject *)arg0;
- (char)formWasEdited;

@end
