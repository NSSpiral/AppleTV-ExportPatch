/* Runtime dump - PLCropOverlayPreviewBottomBar
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCropOverlayPreviewBottomBar : UIView
{
    int _backgroundStyle;
    UIButton * _cancelButton;
    UIButton * _doneButton;
    UIButton * _playbackButton;
}

@property (nonatomic) int backgroundStyle;
@property (readonly, nonatomic) UIButton * cancelButton;
@property (readonly, nonatomic) UIButton * doneButton;
@property (readonly, nonatomic) UIButton * playbackButton;

- (UIButton *)doneButton;
- (PLCropOverlayPreviewBottomBar *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (PLCropOverlayPreviewBottomBar *)initWithCoder:(NSCoder *)arg0;
- (void)layoutSubviews;
- (UIButton *)cancelButton;
- (void)setBackgroundStyle:(int)arg0;
- (int)backgroundStyle;
- (void)setBackgroundStyle:(int)arg0 animated:(char)arg1;
- (UIButton *)playbackButton;
- (void)_updateBackgroundStyle;
- (void)_commonPLCropOverlayEditPhotoBottomBarInitialization;

@end
