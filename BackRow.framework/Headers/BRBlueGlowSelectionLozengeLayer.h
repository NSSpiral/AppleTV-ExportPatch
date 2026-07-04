/* Runtime dump - BRBlueGlowSelectionLozengeLayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSelectionLozengeLayer.h>
@interface BRBlueGlowSelectionLozengeLayer : BRSelectionLozengeLayer
{
    char _cursorFocused;
    char _clearCenter;
    char _shouldDisableAnimations;
}

- (void)layoutSubcontrols;
- (void)setFocused:(char)arg0;
- (float)bottomGlowHeight;
- (float)topGlowHeight;
- (float)edgeGlowWidth;
- (void)setDisableAnimationOnNextSubcontrolLayout:(char)arg0;
- (void)_updateHiddenStateWithHidden:(char)arg0 focused:(char)arg1;
- (void)setClearCenter:(char)arg0;
- (char)clearCenter;
- (CAMediaTimingFunction *)animationTimingFunction;
- (void)setHidden:(char)arg0;
- (BRBlueGlowSelectionLozengeLayer *)init;
- (float)animationDuration;

@end
