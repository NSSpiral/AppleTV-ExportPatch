/* Runtime dump - UIWebDefaultDateTimePopover
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebDefaultDateTimePopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl>
{
    UIWebDateTimePopoverViewController * _webDateTimeViewController;
}

@property (retain, nonatomic) UIWebDateTimePopoverViewController * _webDateTimeViewController;

- (void)dealloc;
- (NSObject *)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (void)clear:(NSString *)arg0;
- (UIWebDefaultDateTimePopover *)initWithDOMHTMLInputElement:(NSObject *)arg0 datePickerMode:(int)arg1;
- (void)set_webDateTimeViewController:(UIWebDateTimePopoverViewController *)arg0;
- (UIWebDateTimePopoverViewController *)_webDateTimeViewController;

@end
