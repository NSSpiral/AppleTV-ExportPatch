/* Runtime dump - UIWebSelectPopover
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebSelectPopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl>
{
    UIWebSelectTableViewController * _tableViewController;
}

@property (retain, nonatomic) UIWebSelectTableViewController * _tableViewController;

- (void)dealloc;
- (UIWebSelectTableViewController *)_tableViewController;
- (NSObject *)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (UIWebSelectPopover *)initWithDOMHTMLSelectElement:(NSObject *)arg0 cachedItems:(NSArray *)arg1 singleSelectionItem:(<UIWebSelectedItemPrivate> *)arg2 singleSelectionIndex:(unsigned int)arg3 multipleSelection:(char)arg4;
- (void)_userActionDismissedPopover:(id)arg0;
- (void)set_tableViewController:(UIWebSelectTableViewController *)arg0;

@end
