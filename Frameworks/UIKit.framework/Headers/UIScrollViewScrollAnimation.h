/* Runtime dump - UIScrollViewScrollAnimation
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScrollViewScrollAnimation : UIAnimation
{
    struct CGPoint _originalOffset;
    struct CGPoint _targetOffset;
    float _accuracy;
    char _adjustsForContentOffsetDelta;
}

- (void)dealloc;
- (void)adjustForContentOffsetDelta:(struct CGPoint)arg0;
- (void)setProgress:(float)arg0;

@end
