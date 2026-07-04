/* Runtime dump - BRMarqueeTextControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRFadeMaskLayer, BRScrollingTextPlane;
@interface BRMarqueeTextControl : BRControl
{
    BRScrollingTextPlane * _plane;
    BRControl * _leftFade;
    BRControl * _rightFade;
    BRFadeMaskLayer * _mask;
    NSTimer * _scrollTimer;
    NSTimer * _fadeMaskTimer;
    float _maskRemovalTime;
    float _scrollPosition;
    char _autoScrolls;
    char _crossfadeEnabled;
    char _crossfading;
    char _useAlphaFadeMask;
    <BRMarqueeScrollingDelegate> * _scrollingDelegate;
}

- (void)setText:(NSString *)arg0 withAttributes:(NSDictionary *)arg1;
- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (struct CGSize)renderedSize;
- (void)setAutoScrolls:(char)arg0;
- (void)setCrossfadeEnabled:(char)arg0;
- (id)HiddenBinding;
- (void)setUseAlphaFadeMask:(char)arg0;
- (NSString *)preferredActionForKey:(NSString *)arg0;
- (char)crossfadeEnabled;
- (char)useAlphaFadeMask;
- (void)setScrollingDelegate:(<BRMarqueeScrollingDelegate> *)arg0;
- (char)autoScrolls;
- (void)setScrollPosition:(float)arg0;
- (void)_resetScrollTimer;
- (id)DimmedBinding;
- (void)updateBoundDimmed;
- (void)updateBoundHidden;
- (<BRMarqueeScrollingDelegate> *)scrollingDelegate;
- (char)needsScrollingInBounds:(struct CGRect)arg0;
- (void)_realignCenteredTextToLeftJustified;
- (void)_updateEdgeMaskingIfScrollingNeeded:(char)arg0;
- (void)_clearScrollTimer;
- (void)_clearFadeMaskTimer;
- (float)maxScrollPosition;
- (void)bindDimmedBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)bindHiddenBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (float)scrollPosition;
- (void)_scrollDidStart:(id)arg0;
- (void)_scrollDidStop:(id)arg0 finished:(char)arg1;
- (char)_autoscrollInProgress;
- (void)_beginScroll:(id)arg0;
- (void)_removeFadeMask:(NSObject *)arg0;
- (void)_scrollDidStop:(id)arg0;
- (void)dealloc;
- (BRMarqueeTextControl *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)accessibilityLabel;
- (void)setAttributedString:(NSAttributedString *)arg0;
- (NSString *)attributedString;
- (struct CGSize)pixelBounds;

@end
