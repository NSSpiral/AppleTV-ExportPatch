/* Runtime dump - BRAutoScrollingTextControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRMarqueeTextControl, BRTextControl;
@interface BRAutoScrollingTextControl : BRControl
{
    NSAttributedString * _text;
    BRMarqueeTextControl * _scrollingTextControl;
    BRTextControl * _textControl;
    char _crossfadeEnabled;
    char _autoScrollEnabled;
    char _displaysText;
    char _useAlphaFadeMask;
    char _animationUsesDelay;
    char _animateOnEnter;
    char _skipsNextAnimations;
}

@property (nonatomic) char animateOnEnter;
@property (nonatomic) char skipsNextAnimations;

- (void)setText:(NSAttributedString *)arg0 withAttributes:(NSDictionary *)arg1;
- (void)layoutSubcontrols;
- (void)setAutoScrollEnabled:(char)arg0;
- (void)setAnimationUsesDelay:(char)arg0;
- (void)setDisplaysText:(char)arg0;
- (void)setCrossfadeEnabled:(char)arg0;
- (void)setAnimateOnEnter:(char)arg0;
- (void)setUseAlphaFadeMask:(char)arg0;
- (void)setNeedsLayoutWithoutAnimations;
- (NSString *)preferredActionForKey:(NSString *)arg0;
- (void)_removeTextControl;
- (void)_removeMarqueeControl;
- (void)setSkipsNextAnimations:(char)arg0;
- (char)animateOnEnter;
- (char)skipsNextAnimations;
- (char)crossfadeEnabled;
- (char)autoScrollEnabled;
- (char)displaysText;
- (char)animationUsesDelay;
- (char)useAlphaFadeMask;
- (void)dealloc;
- (BRAutoScrollingTextControl *)init;
- (void)setAttributedString:(NSAttributedString *)arg0;
- (NSString *)attributedString;

@end
