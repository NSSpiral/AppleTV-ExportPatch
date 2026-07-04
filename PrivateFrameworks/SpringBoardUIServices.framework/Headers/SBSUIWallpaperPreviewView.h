/* Runtime dump - SBSUIWallpaperPreviewView
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBSUIWallpaperPreviewView : UIView
{
    UITapGestureRecognizer * _tapGestureRecognizer;
    SBSUIWallpaperMotionButton * _motionButton;
    SBFLockScreenDateView * _dateView;
    SBFWallpaperView * _wallpaperView;
}

@property (retain, nonatomic) SBFLockScreenDateView * dateView;
@property (retain, nonatomic) SBFWallpaperView * wallpaperView;

- (SBSUIWallpaperPreviewView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (SBFWallpaperView *)wallpaperView;
- (void)setWallpaperView:(SBFWallpaperView *)arg0;
- (void)setDateView:(SBFLockScreenDateView *)arg0;
- (SBFLockScreenDateView *)dateView;
- (void)_toggleMotion;
- (void)_updateMotionEffectsButton;
- (void)_layoutDateView;
- (void)_layoutWallpaperView;
- (void)_layoutMotionButton;
- (float)_motionButtonInset;

@end
