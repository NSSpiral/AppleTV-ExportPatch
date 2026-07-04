/* Runtime dump - CAMFlashButton
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMFlashButton : CAMExpandableMenuButton
{
    char _allowsAutomaticFlash;
    char _unavailable;
    UIImageView * __glyphView;
    UIImageView * __warningIndicatorView;
}

@property (nonatomic) int flashMode;
@property (nonatomic) char allowsAutomaticFlash;
@property (nonatomic) char unavailable;
@property (readonly, nonatomic) UIImageView * _glyphView;
@property (readonly, nonatomic) UIImageView * _warningIndicatorView;

- (int)flashMode;
- (void)setFlashMode:(int)arg0;
- (void)reloadData;
- (UIView *)headerView;
- (void).cxx_destruct;
- (CAMFlashButton *)initWithExpansionOrientation:(int)arg0;
- (UIImageView *)_glyphView;
- (int)numberOfMenuItems;
- (NSObject *)titleForMenuItemAtIndex:(int)arg0;
- (NSIndexSet *)hiddenIndexesWhileCollapsed;
- (char)shouldIgnoreMenuInteraction;
- (void)setUnavailable:(char)arg0;
- (void)setAllowsAutomaticFlash:(char)arg0;
- (char)isUnavailable;
- (int)modeForIndex:(int)arg0;
- (int)indexForMode:(int)arg0;
- (void)_commonCAMFlashButtonInitialization;
- (char)allowsAutomaticFlash;
- (UIImageView *)_warningIndicatorView;

@end
