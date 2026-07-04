/* Runtime dump - UIWebFormDateTimePeripheral
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebFormDateTimePeripheral : NSObject <UIFormPeripheral>
{
    DOMHTMLInputElement * _inputElement;
    <UIWebFormControl> * _control;
}

@property (retain, nonatomic) DOMHTMLInputElement * _inputElement;
@property (retain, nonatomic) <UIWebFormControl> * _control;

+ (NSObject *)createPeripheralWithDOMHTMLInputElement:(NSObject *)arg0;

- (void)dealloc;
- (void)beginEditing;
- (void)endEditing;
- (<UIWebFormControl> *)_control;
- (NSObject *)assistantView;
- (void)set_inputElement:(DOMHTMLInputElement *)arg0;
- (DOMHTMLInputElement *)_inputElement;
- (int)_datePickerModeForInputType:(NSObject *)arg0;
- (void)set_control:(<UIWebFormControl> *)arg0;
- (UIWebFormDateTimePeripheral *)initWithDOMHTMLInputElement:(NSObject *)arg0;

@end
