/* Runtime dump - UIWebSelectMultiplePicker
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebSelectMultiplePicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate>
{
    DOMHTMLSelectElement * _selectionNode;
    NSArray * _cachedItems;
    <UIWebSelectedItemPrivate> * _singleSelectionItem;
    unsigned int _singleSelectionIndex;
    float _fontSize;
    float _maximumTextWidth;
    int _textAlignment;
    float _layoutWidth;
}

@property (retain, nonatomic) DOMHTMLSelectElement * _selectionNode;
@property (retain, nonatomic) NSArray * _cachedItems;
@property (retain, nonatomic) <UIWebSelectedItemPrivate> * _singleSelectionItem;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)pickerView:(UIView *)arg0 row:(int)arg1 column:(int)arg2 checked:(char)arg3;
- (int)numberOfComponentsInPickerView:(NSObject *)arg0;
- (int)pickerView:(UIView *)arg0 numberOfRowsInComponent:(int)arg1;
- (void)layoutSubviews;
- (NSObject *)pickerView:(UIView *)arg0 viewForRow:(int)arg1 forComponent:(int)arg2 reusingView:(NSObject *)arg3;
- (NSObject *)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (void)set_selectionNode:(DOMHTMLSelectElement *)arg0;
- (void)set_cachedItems:(NSArray *)arg0;
- (void)set_singleSelectionItem:(<UIWebSelectedItemPrivate> *)arg0;
- (DOMHTMLSelectElement *)_selectionNode;
- (int)_itemIndexForRowIndex:(int)arg0;
- (UIWebSelectMultiplePicker *)initWithDOMHTMLSelectElement:(NSObject *)arg0 cachedItems:(NSArray *)arg1 singleSelectionItem:(<UIWebSelectedItemPrivate> *)arg2 singleSelectionIndex:(unsigned int)arg3 multipleSelection:(char)arg4;
- (NSArray *)_cachedItems;
- (<UIWebSelectedItemPrivate> *)_singleSelectionItem;

@end
