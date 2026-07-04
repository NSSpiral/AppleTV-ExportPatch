/* Runtime dump - UIWebFormSelectPeripheral
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebFormSelectPeripheral : NSObject <UIFormPeripheral>
{
    DOMHTMLSelectElement * _selectionNode;
    <UIWebFormControl> * _selectControl;
}

@property (retain, nonatomic) DOMHTMLSelectElement * _selectionNode;
@property (retain, nonatomic) <UIWebFormControl> * _selectControl;

+ (NSObject *)createPeripheralWithDOMHTMLSelectElement:(NSObject *)arg0;

- (void)dealloc;
- (void)beginEditing;
- (void)endEditing;
- (void)set_selectionNode:(DOMHTMLSelectElement *)arg0;
- (DOMHTMLSelectElement *)_selectionNode;
- (void)set_selectControl:(<UIWebFormControl> *)arg0;
- (UIWebFormSelectPeripheral *)initWithDOMHTMLSelectElement:(NSObject *)arg0;
- (NSObject *)assistantView;
- (<UIWebFormControl> *)_selectControl;

@end
