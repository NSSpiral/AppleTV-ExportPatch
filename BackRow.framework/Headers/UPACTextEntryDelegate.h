/* Runtime dump - UPACTextEntryDelegate
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRTextFieldDelegate;
@interface UPACTextEntryDelegate : NSObject <BRTextFieldDelegate>
{
    char _allowEmptyInput;
    id _completionHandler;
    NSString * _text;
}

@property (copy, nonatomic) id completionHandler;
@property (retain, nonatomic) NSString * text;
@property (nonatomic) char allowEmptyInput;

- (void)textDidEndEditing:(id /* <BRTextField> */)arg0;
- (void)setAllowEmptyInput:(char)arg0;
- (char)allowEmptyInput;
- (void)dealloc;
- (UPACTextEntryDelegate *)init;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (id /* block */)completionHandler;
- (void)textDidChange:(id /* <BRTextField> */)arg0;
- (void)setCompletionHandler:(id /* block */)arg0;

@end
