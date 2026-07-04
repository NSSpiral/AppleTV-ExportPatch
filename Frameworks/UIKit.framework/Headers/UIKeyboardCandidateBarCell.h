/* Runtime dump - UIKeyboardCandidateBarCell
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateBarCell : UICollectionViewCell <UIKBCacheableView>
{
    char _beginsFirstPage;
    char _endsLastPage;
    char _isAtLeftEdge;
    UIKBThemedView * _themedView;
    UILabel * _label;
    NSString * _candidateText;
}

@property (retain, nonatomic) UIKBThemedView * themedView;
@property (retain, nonatomic) UILabel * label;
@property (copy, nonatomic) NSString * candidateText;
@property (nonatomic) char beginsFirstPage;
@property (nonatomic) char endsLastPage;
@property (nonatomic) char isAtLeftEdge;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSString * cacheKey;
@property (readonly, nonatomic) char cacheDeferable;
@property (readonly, nonatomic) float cachedWidth;
@property (readonly, nonatomic) char keepNonPersistent;

+ (UIFont *)font;
+ (NSString *)reuseIdentifier;
+ (float)widthForCandidateText:(NSString *)arg0;
+ (struct UIEdgeInsets)cacheInsets;
+ (char)drawsSideBorders;
+ (UIKeyboardCandidateBarCell *)textColorWithHighlight:(char)arg0 whiteText:(char)arg1;
+ (char)highlightAffectsBackground;

- (UIKeyboardCandidateBarCell *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)didMoveToWindow;
- (void)setHighlighted:(char)arg0;
- (void)prepareForReuse;
- (void)setSelected:(char)arg0;
- (void)setCandidate:(NSDate *)arg0;
- (UILabel *)label;
- (void)setLabel:(UILabel *)arg0;
- (void)_setRenderConfig:(NSObject *)arg0;
- (void)displayLayer:(MDDisplayLayer *)arg0;
- (NSString *)cacheKey;
- (float)cachedWidth;
- (id)cacheKeysForRenderFlags:(id)arg0;
- (char)cacheDeferable;
- (char)keepNonPersistent;
- (void)setThemedView:(UIKBThemedView *)arg0;
- (UIKBThemedView *)themedView;
- (void)updateLabels;
- (void)applyLayoutAttributes:(NSDictionary *)arg0;
- (void)updateIsAtLeftEdgeState;
- (void)setBeginsFirstPage:(char)arg0;
- (void)setEndsLastPage:(char)arg0;
- (char)beginsFirstPage;
- (char)endsLastPage;
- (void)setCandidateText:(NSString *)arg0;
- (NSString *)candidateText;
- (char)isAtLeftEdge;
- (void)setIsAtLeftEdge:(char)arg0;

@end
