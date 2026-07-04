/* Runtime dump - WKDateTimePopover
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKDateTimePopover : WKFormRotatingAccessoryPopover <WKFormControl>
{
    struct RetainPtr<WKDateTimePopoverViewController> _viewController;
    WKContentView * _view;
}

- (struct RetainPtr<WKDateTimePopoverViewController>)viewController;
- (void).cxx_construct;
- (NSObject *)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (void).cxx_destruct;
- (void)clear:(NSString *)arg0;
- (WKDateTimePopover *)initWithView:(WKContentView *)arg0 datePickerMode:(int)arg1;

@end
