/* Runtime dump - CAMFocusLockAttachmentView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMFocusLockAttachmentView : CAMFocusAttachmentView
{
    char _locked;
}

@property (nonatomic) char locked;

- (CAMFocusLockAttachmentView *)initWithFrame:(struct CGRect)arg0;
- (char)isLocked;
- (void)setLocked:(char)arg0;
- (void)_updateText;

@end
