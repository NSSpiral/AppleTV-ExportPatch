/* Runtime dump - DOMHTMLOptionElement
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLOptionElement : DOMHTMLElement

@property char disabled;
@property (readonly) DOMHTMLFormElement * form;
@property (copy) NSString * label;
@property char defaultSelected;
@property char selected;
@property (copy) NSString * value;
@property (readonly, copy) NSString * text;
@property (readonly) int index;

- (NSString *)itemTitle;
- (NSObject *)createSelectedItem;
- (NSObject *)createPickerCell;
- (void)populateCell:(NSObject *)arg0;
- (NSString *)value;
- (void)setValue:(NSString *)arg0;
- (NSString *)text;
- (void)setSelected:(char)arg0;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (int)index;
- (DOMHTMLFormElement *)form;
- (char)selected;
- (char)disabled;
- (void)setDisabled:(char)arg0;
- (char)defaultSelected;
- (void)setDefaultSelected:(char)arg0;

@end
