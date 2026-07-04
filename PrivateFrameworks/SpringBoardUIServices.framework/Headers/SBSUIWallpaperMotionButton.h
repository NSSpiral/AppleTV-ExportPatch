/* Runtime dump - SBSUIWallpaperMotionButton
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBSUIWallpaperMotionButton : SBFButton
{
    UILabel * _leftLabel;
    UILabel * _rightLabel;
    float _maxRightLabelWidth;
    _UIBackdropView * _backdropView;
}

- (SBSUIWallpaperMotionButton *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)_updateForStateChange;
- (float)_maxRightLabelWidth;
- (NSObject *)_newBackdropView;
- (float)_labelHorizontalPadding;
- (float)_separationWidth;

@end
