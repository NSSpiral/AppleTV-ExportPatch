/* Runtime dump - ListAnimationDelegate
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRListControl;
@interface ListAnimationDelegate : NSObject
{
    BRListControl * _list;
    long _animationBalance;
}

- (void)incrementBalance;
- (void)decrementBalance;
- (void)clearScroll;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (void)animationDidStart:(CAAnimation *)arg0;
- (void).cxx_destruct;
- (ListAnimationDelegate *)initWithList:(BRListControl *)arg0;
- (char)scrolling;

@end
