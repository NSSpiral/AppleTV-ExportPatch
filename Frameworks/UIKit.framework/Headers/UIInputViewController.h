/* Runtime dump - UIInputViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewController : UIViewController <_UITextDocumentInterfaceDelegate, UITextInputDelegate>
{
    char _alignsToContentViewController;
    NSObject<UITextDocumentProxy> * _textDocumentProxy;
    NSString * _primaryLanguage;
}

@property (retain, nonatomic) UIInputView * inputView;
@property (readonly, nonatomic) NSObject<UITextDocumentProxy> * textDocumentProxy;
@property (copy, nonatomic) NSString * primaryLanguage;
@property (readonly, nonatomic) UIKeyboard * _keyboard;
@property (nonatomic) char _alignsToContentViewController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)_requiresProxyInterface;

- (void)dealloc;
- (UIInputViewController *)initWithCoder:(NSCoder *)arg0;
- (void)didReceiveMemoryWarning;
- (void)setView:(UIView *)arg0;
- (UIInputViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)loadView;
- (void)textWillChange:(NSDictionary *)arg0;
- (void)textDidChange:(char)arg0;
- (void)viewDidLoad;
- (void)_setExtensionContext:(NSObject *)arg0;
- (struct CGSize)_systemLayoutSizeFittingSize:(struct CGSize)arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2;
- (UIInputView *)inputView;
- (void)setInputView:(UIInputView *)arg0;
- (NSString *)primaryLanguage;
- (void)selectionWillChange:(NSDictionary *)arg0;
- (void)selectionDidChange:(NSDictionary *)arg0;
- (void)setPrimaryLanguage:(NSString *)arg0;
- (void)dismissKeyboard;
- (UIKeyboard *)_keyboard;
- (NSObject *)_compatibilityController;
- (void)_willResetDocumentState;
- (void)_didResetDocumentState;
- (void)_setupInputController;
- (id)_proxyInterface;
- (id)_textDocumentInterface;
- (NSObject<UITextDocumentProxy> *)textDocumentProxy;
- (void)_setTextDocumentProxy:(NSObject *)arg0;
- (NSString *)_extensionContext;
- (char)_shouldForwardSystemLayoutFittingSizeChanges;
- (void)advanceToNextInputMode;
- (void)returnToPreviousInputMode;
- (void)requestSupplementaryLexiconWithCompletion:(id /* block */)arg0;
- (char)_alignsToContentViewController;
- (void)set_alignsToContentViewController:(char)arg0;

@end
