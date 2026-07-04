/* Runtime dump - WebFormDelegate
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebFormDelegate : NSObject <WebFormDelegate>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)_sharedWebFormDelegate;

- (void)textFieldDidBeginEditing:(UITextField *)arg0 inFrame:(char)arg1;
- (void)textFieldDidEndEditing:(UITextField *)arg0 inFrame:(char)arg1;
- (void)textDidChangeInTextField:(id)arg0 inFrame:(char)arg1;
- (void)textDidChangeInTextArea:(id)arg0 inFrame:(char)arg1;
- (void)didFocusTextField:(id)arg0 inFrame:(char)arg1;
- (char)textField:(UITextField *)arg0 doCommandBySelector:(SEL)arg1 inFrame:(char)arg2;
- (void)frame:(struct CGRect)arg0 sourceFrame:(NSObject *)arg1 willSubmitForm:(id)arg2 withValues:(NSArray *)arg3 submissionListener:(id)arg4;
- (void)willSendSubmitEventToForm:(id)arg0 inFrame:(char)arg1 withValues:(NSArray *)arg2;

@end
