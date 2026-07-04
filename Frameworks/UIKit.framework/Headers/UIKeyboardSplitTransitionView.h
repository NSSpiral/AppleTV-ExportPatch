/* Runtime dump - UIKeyboardSplitTransitionView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardSplitTransitionView : UIView
{
    float _currentProgress;
    float _liftOffProgress;
    float _finishProgress;
    float _finishDuration;
    double _finalTransitionStartTime;
    CADisplayLink * _displayLink;
    id _completionBlock;
    struct CGRect _startFrame;
    struct CGRect _endFrame;
    <UIKeyboardKeyplaneTransitionDelegate> * _transitionDelegate;
    <UIKeyboardSplitTransitionDataSource> * _transitionDataSource;
    char _centerFilled;
    char _isRebuilding;
    char _isSplitTranslation;
    UIKeyboardSliceSet * _sliceSet;
}

@property (copy) id completionBlock;
@property (nonatomic) <UIKeyboardKeyplaneTransitionDelegate> * splitTransitionDelegate;
@property (nonatomic) <UIKeyboardSplitTransitionDataSource> * splitTransitionDataSource;
@property (readonly) NSArray * shadowLayers;
@property (readonly) NSArray * backgroundLayers;

- (void)dealloc;
- (void)didMoveToWindow;
- (void)setFrame:(struct CGRect)arg0;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)finalizeTransition;
- (void)updateWithProgress:(float)arg0;
- (void)transitionToFinalState:(NSObject *)arg0;
- (void)finishWithProgress:(float)arg0 completionBlock:(id /* block */)arg1;
- (void)setSplitTransitionDelegate:(<UIKeyboardKeyplaneTransitionDelegate> *)arg0;
- (void)rebuildTransitionForSplitStyleChange:(NSDictionary *)arg0;
- (NSArray *)backgroundLayers;
- (NSArray *)shadowLayers;
- (id)topDropShadow;
- (id)centerDropShadow;
- (id)bottomDropShadow;
- (id)outerCenterDropShadow;
- (CALayer *)colorsForBackgroundLayer:(int)arg0;
- (char)shouldAllowRubberiness;
- (<UIKeyboardKeyplaneTransitionDelegate> *)splitTransitionDelegate;
- (char)transitionIsVisible;
- (void)transformForProgress:(float)arg0;
- (struct CGImage *)defaultKeyboardImage;
- (struct CGImage *)splitKeyboardImage;
- (void)initializeLayers;
- (struct CGSize)sizeForShadowLayer:(int)arg0;
- (struct CGRect)rectEnclosingKeyplane:(id)arg0;
- (void)rebuildFromKeyplane:(id)arg0 toKeyplane:(UIKBCacheToken_Keyplane *)arg1 keyboardType:(int)arg2 orientation:(int)arg3;
- (void)rebuildControlKeys:(unsigned long long)arg0;
- (char)canDisplayTransition;
- (struct CGImage *)keyImageWithToken:(NSString *)arg0;
- (char)showIntlKey;
- (char)showDictationKey;
- (<UIKeyboardSplitTransitionDataSource> *)splitTransitionDataSource;
- (void)setSplitTransitionDataSource:(<UIKeyboardSplitTransitionDataSource> *)arg0;

@end
