/* Runtime dump - CAMFocusSplitAttachmentView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMFocusSplitAttachmentView : CAMFocusAttachmentView
{
    char _split;
}

@property (nonatomic) char split;

- (CAMFocusSplitAttachmentView *)initWithFrame:(struct CGRect)arg0;
- (void)_updateText;
- (void)setSplit:(char)arg0;
- (char)split;

@end
