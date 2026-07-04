/* Runtime dump - UIAlphaAnimation
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlphaAnimation : UIAnimation
{
    float _startAlpha;
    float _endAlpha;
}

- (void)setProgress:(float)arg0;
- (float)_alphaForMultiplier:(float)arg0;
- (void)setStartAlpha:(float)arg0;
- (void)setEndAlpha:(float)arg0;
- (float)alphaForFraction:(float)arg0;

@end
