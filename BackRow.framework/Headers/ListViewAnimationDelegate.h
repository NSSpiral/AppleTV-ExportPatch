/* Runtime dump - ListViewAnimationDelegate
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRListView;
@interface ListViewAnimationDelegate : NSObject
{
    BRListView * _list;
    long _animationBalance;
}

- (void)incrementBalance;
- (void)decrementBalance;
- (void)clearScroll;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (void)animationDidStart:(CAAnimation *)arg0;
- (void).cxx_destruct;
- (ListViewAnimationDelegate *)initWithList:(BRListView *)arg0;
- (char)scrolling;

@end
