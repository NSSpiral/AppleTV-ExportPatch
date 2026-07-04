/* Runtime dump - UITransformAnimation
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITransformAnimation : UIAnimation
{
    struct CGAffineTransform _startTransform;
    struct CGAffineTransform _endTransform;
}

- (void)setProgress:(float)arg0;
- (struct CGAffineTransform)_transformWithMultiplier:(float)arg0;
- (void)setStartTransform:(struct CGAffineTransform)arg0;
- (void)setEndTransform:(struct CGAffineTransform)arg0;
- (struct CGAffineTransform)transformForFraction:(float)arg0;

@end
