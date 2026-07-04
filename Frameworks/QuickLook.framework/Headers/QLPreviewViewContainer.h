/* Runtime dump - QLPreviewViewContainer
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewViewContainer : UIView
{
    QLPreviewViewController * _controller;
}

@property QLPreviewViewController * controller;

- (void)layoutSubviews;
- (QLPreviewViewController *)controller;
- (void)setController:(QLPreviewViewController *)arg0;

@end
