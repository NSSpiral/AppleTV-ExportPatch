/* Runtime dump - WKSelectPopover
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKSelectPopover : WKFormRotatingAccessoryPopover <WKFormControl>
{
    WKContentView * _view;
    struct RetainPtr<WKSelectTableViewController> _tableViewController;
}

- (void)dealloc;
- (void).cxx_construct;
- (NSObject *)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (void)_userActionDismissedPopover:(id)arg0;
- (void).cxx_destruct;
- (WKSelectPopover *)initWithView:(WKContentView *)arg0 hasGroups:(char)arg1;

@end
