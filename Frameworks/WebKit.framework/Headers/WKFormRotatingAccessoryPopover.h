/* Runtime dump - WKFormRotatingAccessoryPopover
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKFormRotatingAccessoryPopover : WKRotatingPopover <WKRotatingPopoverDelegate>
{
    WKContentView * _view;
}

- (WKFormRotatingAccessoryPopover *)initWithView:(WKContentView *)arg0;
- (void)accessoryDone;
- (unsigned int)popoverArrowDirections;
- (void)popoverWasDismissed:(id)arg0;

@end
