/* Runtime dump - BRScrollControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVSnapScrollPointAdjuster, BRControl, BREvent, BRFadeMaskLayer, ScrollAnimationDelegate;
@interface BRScrollControl : BRControl
{
    BRControl * _content;
    BRControl * _topFade;
    BRControl * _bottomFade;
    BRControl * _leftFade;
    BRControl * _rightFade;
    BRFadeMaskLayer * _mask;
    ScrollAnimationDelegate * _animationDelegate;
    int _scrollDirection;
    int _mode;
    float _edgeFadePercent;
    float _extraBottomSpace;
    float _extraTopSpace;
    float _extraLeftSpace;
    float _extraRightSpace;
    char _scrollPointSet;
    char _constrainAllContentToEdges;
    char _useRealMasks;
    char _followsFocus;
    char _contentLayoutDone;
    char _repeatActive;
    char _autoChangeAnimationModes;
    id _scrollPointAdjuster;
}

@property (nonatomic) char autoChangeAnimationModes;
@property (copy, nonatomic) id scrollPointAdjuster;

- (char)brEventAction:(BREvent *)arg0;
- (void)setFollowsFocus:(char)arg0;
- (void)_focusChanged:(NSNotification *)arg0;
- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)setUseRealMasks:(char)arg0;
- (void)setAutoChangeAnimationModes:(char)arg0;
- (void)setScrollPointAdjuster:(ATVSnapScrollPointAdjuster *)arg0;
- (void)scrollToControl:(BRControl *)arg0;
- (void)setEdgeFadePercentage:(float)arg0;
- (void)scrollingCompleted;
- (char)autoScrolling;
- (void)setConstrainAllContentToEdges:(char)arg0;
- (char)constrainAllContentToEdges;
- (void)setAnimationMode:(int)arg0;
- (void)_minimizeVisiblePlaneArea;
- (int)animationMode;
- (void)_updateFocusNotifications;
- (char)_updateScrollPositionForFocus;
- (char)_setPlanePosition:(struct CGPoint)arg0;
- (void)_updateEdgeFading;
- (char)followsFocus;
- (char)useRealMasks;
- (float)edgeFadePercentage;
- (char)autoChangeAnimationModes;
- (ATVSnapScrollPointAdjuster *)scrollPointAdjuster;
- (void)_scrollPoint:(struct CGPoint)arg0 fromControl:(BRControl *)arg1;
- (void)_scrollRect:(struct CGRect)arg0 fromControl:(struct CGSize)arg1;
- (struct CGRect)_visibleRectOfControl:(BRControl *)arg0;
- (id)_parentScrollControl;
- (float)_calculateYPositionForPlane:(struct CGPoint)arg0 halfScrollerHeight:(float)arg1 halfPlaneHeight:(float)arg2;
- (float)_calculateXPositionForPlane:(struct CGPoint)arg0 halfScrollerWidth:(float)arg1 halfPlaneWidth:(float)arg2;
- (char)_animatingPositionChange;
- (void)_enlargeScrollPlaneHeight:(struct CGPoint)arg0 oldPosition:(struct CGPoint)arg1;
- (void)_enlargeScrollPlaneWidth:(struct CGPoint)arg0 oldPosition:(struct CGPoint)arg1;
- (void)_updateVerticalEdgeFading;
- (void)_updateHorizontalEdgeFading;
- (id)_fadeMaskForBounds:(struct CGSize)arg0;
- (void)_transitionFade:(id)arg0 toPresent:(char)arg1;
- (void)_attemptToRemoveFadeMask;
- (void)scrollToPoint:(struct CGPoint)arg0;
- (void)scrollToRect:(struct CGRect)arg0;
- (void)dealloc;
- (BRScrollControl *)init;
- (void)setScrollDirection:(int)arg0;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (BRControl *)content;
- (int)scrollDirection;
- (void)setContent:(BRControl *)arg0;
- (char)scrolling;

@end
