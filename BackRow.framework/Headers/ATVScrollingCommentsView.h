/* Runtime dump - ATVScrollingCommentsView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVFadeLayer, BREvent;
@interface ATVScrollingCommentsView : BRControl
{
    char __shouldAnimateWithConstVelocity;
    NSArray * _commentViews;
    int _currentIndex;
    struct ? _pageOverlap;
    float __snapOffset;
    NSArray * __activeCommentViews;
    ATVFadeLayer * __topFade;
    ATVFadeLayer * __bottomFade;
    NSObject<OS_dispatch_source> * _axScrollingCommentTimer;
}

@property (retain, nonatomic) NSArray * commentViews;
@property (nonatomic) int currentIndex;
@property (nonatomic) struct ? pageOverlap;
@property (nonatomic) float _snapOffset;
@property (nonatomic) char _shouldAnimateWithConstVelocity;
@property (copy, nonatomic) NSArray * _activeCommentViews;
@property (retain, nonatomic) ATVFadeLayer * _topFade;
@property (retain, nonatomic) ATVFadeLayer * _bottomFade;
@property (retain, nonatomic) NSObject<OS_dispatch_source> * axScrollingCommentTimer;

+ (ATVScrollingCommentsView *)commentsViewWithCommentViews:(NSArray *)arg0 initialIndex:(int)arg1;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (NSArray *)accessibilityControls;
- (void)setPageOverlap:(struct ?)arg0;
- (ATVScrollingCommentsView *)initWithCommentViews:(NSArray *)arg0 initialIndex:(int)arg1;
- (void)setCommentViews:(NSArray *)arg0;
- (NSArray *)commentViews;
- (void)set_topFade:(ATVFadeLayer *)arg0;
- (ATVFadeLayer *)_topFade;
- (void)set_bottomFade:(ATVFadeLayer *)arg0;
- (ATVFadeLayer *)_bottomFade;
- (void)set_activeCommentViews:(NSArray *)arg0;
- (struct CGSize)_maxCommentSize;
- (float)_snapOffset;
- (NSArray *)_activeCommentViews;
- (char)_shouldAnimateWithConstVelocity;
- (char)_goBackward;
- (void)set_shouldAnimateWithConstVelocity:(char)arg0;
- (struct ?)pageOverlap;
- (void)set_snapOffset:(float)arg0;
- (NSObject<OS_dispatch_source> *)axScrollingCommentTimer;
- (void)setAxScrollingCommentTimer:(NSObject<OS_dispatch_source> *)arg0;
- (void)_accessibilityAnnounceCommentChanges;
- (ATVScrollingCommentsView *)init;
- (NSString *)accessibilityLabel;
- (int)currentIndex;
- (void).cxx_destruct;
- (void)setCurrentIndex:(int)arg0;
- (char)_goForward;

@end
