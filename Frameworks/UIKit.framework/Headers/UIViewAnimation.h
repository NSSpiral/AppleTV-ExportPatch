/* Runtime dump - UIViewAnimation
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewAnimation : NSObject
{
    UIView * _view;
    NSIndexPath * _indexPath;
    struct CGRect _endRect;
    float _endAlpha;
    float _startFraction;
    float _endFraction;
    int _curve;
    char _animateFromCurrentPosition;
    char _shouldDeleteAfterAnimation;
    char _editing;
    char _shouldAnimateShadow;
    char _shouldResetGroupOpacityAfterAnimation;
    char _shouldAllowGroupOpacityAfterAnimation;
    char _shouldClipToBoundsAfterAnimation;
}

@property (readonly, nonatomic) UIView * view;
@property (readonly, nonatomic) NSIndexPath * indexPath;
@property (readonly, nonatomic) struct CGRect endRect;
@property (readonly, nonatomic) float endAlpha;
@property (readonly, nonatomic) float startFraction;
@property (readonly, nonatomic) float endFraction;
@property (readonly, nonatomic) int curve;
@property (readonly, nonatomic) char animateFromCurrentPosition;
@property (readonly, nonatomic) char shouldDeleteAfterAnimation;
@property (readonly, nonatomic) char editing;
@property (nonatomic) char shouldAnimateShadow;
@property (nonatomic) char shouldResetGroupOpacityAfterAnimation;
@property (nonatomic) char shouldAllowGroupOpacityAfterAnimation;
@property (nonatomic) char shouldClipToBoundsAfterAnimation;

- (void)dealloc;
- (NSString *)description;
- (UIView *)view;
- (NSIndexPath *)indexPath;
- (int)curve;
- (float)startFraction;
- (float)endFraction;
- (char)animateFromCurrentPosition;
- (float)endAlpha;
- (void)setShouldAllowGroupOpacityAfterAnimation:(char)arg0;
- (void)setShouldResetGroupOpacityAfterAnimation:(char)arg0;
- (void)setShouldClipToBoundsAfterAnimation:(char)arg0;
- (char)shouldAnimateShadow;
- (char)shouldDeleteAfterAnimation;
- (struct CGRect)endRect;
- (char)editing;
- (char)shouldResetGroupOpacityAfterAnimation;
- (char)shouldAllowGroupOpacityAfterAnimation;
- (char)shouldClipToBoundsAfterAnimation;
- (UIViewAnimation *)initWithView:(UIView *)arg0 indexPath:(NSIndexPath *)arg1 endRect:(struct CGRect)arg2 endAlpha:(struct CGSize)arg3 startFraction:(float)arg4 endFraction:(float)arg5 curve:(float)arg6 animateFromCurrentPosition:(float)arg7 shouldDeleteAfterAnimation:(int)arg8 editing:(char)arg9;
- (void)setShouldAnimateShadow:(char)arg0;

@end
