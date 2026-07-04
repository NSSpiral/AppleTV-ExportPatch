/* Runtime dump - CAMTimerButton
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMTimerButton : CAMExpandableMenuButton
{
    char _hideOffWhenCollapsed;
    <CAMTimerButtonDelegate> * _delegate;
    UIImageView * __glyphView;
}

@property (weak, nonatomic) <CAMTimerButtonDelegate> * delegate;
@property (nonatomic) int duration;
@property (nonatomic) char hideOffWhenCollapsed;
@property (readonly, nonatomic) UIImageView * _glyphView;

- (void)setDelegate:(<CAMTimerButtonDelegate> *)arg0;
- (<CAMTimerButtonDelegate> *)delegate;
- (int)duration;
- (void)setDuration:(int)arg0;
- (UIView *)headerView;
- (void).cxx_destruct;
- (CAMTimerButton *)initWithExpansionOrientation:(int)arg0;
- (void)_commonCAMTimerButtonInitialization;
- (void)setDuration:(int)arg0 animated:(char)arg1;
- (UIImageView *)_glyphView;
- (char)hideOffWhenCollapsed;
- (void)setHideOffWhenCollapsed:(char)arg0;
- (int)numberOfMenuItems;
- (NSObject *)titleForMenuItemAtIndex:(int)arg0;
- (NSIndexSet *)hiddenIndexesWhileCollapsed;

@end
