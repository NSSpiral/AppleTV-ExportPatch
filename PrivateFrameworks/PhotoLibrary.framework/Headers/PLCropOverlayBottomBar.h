/* Runtime dump - PLCropOverlayBottomBar
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCropOverlayBottomBar : UIView
{
    char _playingVideo;
    char _inPopover;
    int _style;
    CAMBottomBar * _cameraBottomBar;
    PLCropOverlayPreviewBottomBar * _previewBottomBar;
    PLCropOverlayWallpaperBottomBar * _wallpaperBottomBar;
}

@property (nonatomic) int style;
@property (retain, nonatomic) CAMBottomBar * cameraBottomBar;
@property (retain, nonatomic) PLCropOverlayPreviewBottomBar * previewBottomBar;
@property (retain, nonatomic) PLCropOverlayWallpaperBottomBar * wallpaperBottomBar;
@property (nonatomic) char playingVideo;
@property (nonatomic) char inPopover;

- (char)isInPopover;
- (PLCropOverlayBottomBar *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (PLCropOverlayBottomBar *)initWithCoder:(NSCoder *)arg0;
- (void)layoutSubviews;
- (int)style;
- (void)_updateStyle;
- (void)setStyle:(int)arg0;
- (void)setStyle:(int)arg0 animated:(char)arg1;
- (void)setInPopover:(char)arg0;
- (void)setPreviewBottomBar:(PLCropOverlayPreviewBottomBar *)arg0;
- (void)setWallpaperBottomBar:(PLCropOverlayWallpaperBottomBar *)arg0;
- (CAMBottomBar *)cameraBottomBar;
- (void)setCameraBottomBar:(CAMBottomBar *)arg0;
- (PLCropOverlayWallpaperBottomBar *)wallpaperBottomBar;
- (PLCropOverlayPreviewBottomBar *)previewBottomBar;
- (void)setPlayingVideo:(char)arg0;
- (void)togglePlaybackState;
- (char)isPlayingVideo;
- (void)_commonPLCropOverlayBottomBarInitialization;
- (void)_updateBottomBars;
- (void)_updatePreviewBottomBarForPlaybackState;
- (char)_isEditingStyle:(int)arg0;

@end
