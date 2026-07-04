/* Runtime dump - UIKeyboardEmojiSplitCategoryPicker
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiSplitCategoryPicker : UIKeyboardEmojiSplit <UIKeyboardEmojiCategoryControl>
{
    UIKeyboardEmojiCategoryController * _categoryController;
    char _whiteText;
    UIColor * _pressIndicatorColor;
    int _currentSelected;
    int _lastUsedCategory;
}

@property char whiteText;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)didMoveToWindow;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (char)whiteText;
- (void)setCategory:(int)arg0;
- (UIKeyboardEmojiSplitCategoryPicker *)initWithFrame:(struct CGRect)arg0 keyplane:(struct CGSize)arg1 key:(NSString *)arg2;
- (void)setRenderConfig:(UIKBRenderConfig *)arg0;
- (void)receiveNotifictaion:(id)arg0;
- (void)updateCategorySelectedIndicator:(int)arg0;
- (NSString *)titleForRow:(int)arg0;
- (id)symbolForRow:(int)arg0;
- (void)setWhiteText:(char)arg0;

@end
