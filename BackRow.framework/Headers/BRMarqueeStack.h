/* Runtime dump - BRMarqueeStack
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRMarqueeScrollingDelegate;

@class BRControllerStack, BRMarqueeTextControl;
@interface BRMarqueeStack : NSObject <BRMarqueeScrollingDelegate>
{
    NSMutableArray * _controlStack;
    unsigned int _currentScrollingControlIndex;
    char _isFirstRun;
    char _shouldStopAllScrolling;
    char _shouldAnimateOnce;
    char _allowsSimultaneousScrollingControls;
    unsigned int _maxSimultaneousScrollingControls;
    int _transitionDirection;
}

- (void)addControlToStack:(id)arg0 atIndex:(unsigned int)arg1;
- (int)_indexOfFirstControlInNeedOfAnimation;
- (int)_indexOfNextControlInNeedOfScrollingFromIndex:(unsigned int)arg0;
- (char)shouldControlWaitToScroll:(BRMarqueeTextControl *)arg0;
- (void)controlDidFinishingScrolling:(BRMarqueeTextControl *)arg0;
- (void)setTransitionDirection:(int)arg0;
- (void)setShouldStopAllScrolling:(char)arg0;
- (void)setShouldAnimateOnce:(char)arg0;
- (void)setAllowsSimultaneousScrollingControls:(char)arg0;
- (char)allowsSimultaneousScrollingControls;
- (void)setMaxSimultaneousScrollingControls:(unsigned int)arg0;
- (unsigned int)maxSimultaneousScrollingControls;
- (void)addControlToStack:(id)arg0;
- (void)removeControlFromStack:(id)arg0;
- (BRControllerStack *)stack;
- (void)dealloc;
- (BRMarqueeStack *)init;
- (int)transitionDirection;

@end
