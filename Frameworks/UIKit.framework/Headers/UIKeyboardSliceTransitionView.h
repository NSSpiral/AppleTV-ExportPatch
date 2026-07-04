/* Runtime dump - UIKeyboardSliceTransitionView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardSliceTransitionView : UIKeyboardSplitTransitionView
{
    struct CGImage * _defaultKeyplaneImage;
    struct CGImage * _splitKeyplaneImage;
    CALayer * _leftKeys;
    CALayer * _rightKeys;
    CALayer * _spaceFill;
    NSMutableDictionary * _controlKeys;
    CALayer * _topEdgeHighlight;
    UIKBCacheToken * _keyplaneToken;
    int _orientation;
    struct ? _rebuildFlags;
}

- (UIKeyboardSliceTransitionView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setHidden:(char)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)updateWithProgress:(float)arg0;
- (void)rebuildTransitionForSplitStyleChange:(NSDictionary *)arg0;
- (void)transformForProgress:(float)arg0;
- (struct CGImage *)defaultKeyboardImage;
- (struct CGImage *)splitKeyboardImage;
- (void)initializeLayers;
- (void)rebuildFromKeyplane:(id)arg0 toKeyplane:(UIKBCacheToken_Keyplane *)arg1 keyboardType:(int)arg2 orientation:(int)arg3;
- (void)rebuildControlKeys:(unsigned long long)arg0;
- (char)canDisplayTransition;
- (void)rebuildMoreIntlKeys;
- (void)rebuildShiftSlices;
- (void)rebuildReturnSlices;
- (void)updateTransition;
- (void)_delayedUpdateTransition;
- (void)setRebuildFlags;
- (NSObject *)crossfadeOpacityAnimation;
- (float)adjustedLeftWidthAtMergePoint;
- (float)adjustedRightWidthAtMergePoint;
- (void)rebuildTopEdgeHighlightTransition;
- (void)rebuildShadows;
- (struct CGImage *)getKeyboardImageAsSplit:(char)arg0;
- (void)updateTransitionForSlice:(id)arg0 withStart:(SBJsonStreamWriterStateArrayStart *)arg1 startContents:(id)arg2 end:(id)arg3 endContents:(id)arg4 updateContents:(char)arg5;
- (NSNumber *)meshTransformForProgress:(float)arg0;
- (void)rebuildPositionTransition;
- (void)rebuildBackgroundAndShadowTransitions;
- (void)rebuildBackgroundGradientTransitions;
- (void)refreshKeyplaneImages;
- (void)rebuildSliceTransitions;

@end
