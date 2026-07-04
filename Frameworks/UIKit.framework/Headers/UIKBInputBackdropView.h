/* Runtime dump - UIKBInputBackdropView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBInputBackdropView : UIView
{
    UIKBBackdropView * _inputBackdropFullView;
    UIKBBackdropView * _inputBackdropLeftView;
    UIKBBackdropView * _inputBackdropRightView;
    unsigned int _innerCorners;
    char _isTransitioning;
    float _transitionGap;
    float _transitionLeftOffset;
    int _style;
    char _hasStartRect;
    char _hasEndRect;
    struct CGRect _savedStartRect;
    struct CGRect _savedEndRect;
}

@property (retain, nonatomic) UIKBBackdropView * inputBackdropFullView;
@property (retain, nonatomic) UIKBBackdropView * inputBackdropLeftView;
@property (retain, nonatomic) UIKBBackdropView * inputBackdropRightView;

+ (char)_retroactivelyRequiresConstraintBasedLayout;

- (void)dealloc;
- (char)_isTransitioning;
- (void)_setRenderConfig:(NSObject *)arg0;
- (int)textEffectsVisibilityLevel;
- (void)layoutInputBackdropToFullWithRect:(struct CGRect)arg0;
- (UIKBBackdropView *)inputBackdropLeftView;
- (UIKBBackdropView *)inputBackdropRightView;
- (UIKBBackdropView *)inputBackdropFullView;
- (void)transitionToStyle:(int)arg0 isSplit:(char)arg1;
- (void)_setFrame:(struct CGRect)arg0 leftOffset:(struct CGSize)arg1 gapWidth:(float)arg2 progress:(float)arg3 innerCorners:(float)arg4;
- (void)_setInitialProgressWithFrame:(struct CGRect)arg0;
- (void)layoutInputBackdropToSplitWithLeftViewRect:(struct CGRect)arg0 andRightViewRect:(struct CGSize)arg1 innerCorners:(unsigned int)arg2;
- (void)_setFrame:(struct CGRect)arg0 leftOffset:(struct CGSize)arg1 gapWidth:(float)arg2 progress:(float)arg3;
- (UIKBInputBackdropView *)initWithFrame:(struct CGRect)arg0 primaryBackdrop:(struct CGSize)arg1;
- (void)_setProgress:(float)arg0 withFrame:(struct CGRect)arg1;
- (void)_beginSplitTransitionIfNeeded:(float)arg0 gapWidth:(float)arg1;
- (void)_endSplitTransitionIfNeeded:(char)arg0;
- (void)setInputBackdropFullView:(UIKBBackdropView *)arg0;
- (void)setInputBackdropLeftView:(UIKBBackdropView *)arg0;
- (void)setInputBackdropRightView:(UIKBBackdropView *)arg0;

@end
