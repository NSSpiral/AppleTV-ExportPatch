/* Runtime dump - ScrollAnimationDelegate
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRScrollControl;
@interface ScrollAnimationDelegate : NSObject
{
    BRScrollControl * _scroll;
    long _animationBalance;
}

- (void)clearScroll;
- (ScrollAnimationDelegate *)initWithScroll:(BRScrollControl *)arg0;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (void)animationDidStart:(CAAnimation *)arg0;
- (char)scrolling;

@end
