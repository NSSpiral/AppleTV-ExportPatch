/* Runtime dump - UIDynamicAnimatorTicker
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDynamicAnimatorTicker : NSObject
{
    UIDynamicAnimator * _animator;
}

@property UIDynamicAnimator * animator;

- (void)setAnimator:(UIDynamicAnimator *)arg0;
- (UIDynamicAnimator *)animator;
- (void)_displayLinkTick:(id)arg0;

@end
