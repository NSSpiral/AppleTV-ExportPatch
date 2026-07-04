/* Runtime dump - UIKBThemedView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBThemedView : UIView <UIKBCacheableView>
{
    CALayer * _borders;
    CALayer * _background;
    char _lightKeyboard;
    char _active;
    char _usePersistentCaching;
    int _style;
    struct UIEdgeInsets _cacheInsets;
}

@property (nonatomic) char active;
@property (nonatomic) int style;
@property (nonatomic) struct UIEdgeInsets cacheInsets;
@property (nonatomic) char usePersistentCaching;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSString * cacheKey;
@property (readonly, nonatomic) char cacheDeferable;
@property (readonly, nonatomic) float cachedWidth;
@property (readonly, nonatomic) char keepNonPersistent;

- (void)didMoveToWindow;
- (void)layoutSubviews;
- (int)style;
- (char)_canDrawContent;
- (void)setStyle:(int)arg0;
- (UIKBThemedView *)initWithFrame:(struct CGRect)arg0 style:(struct CGSize)arg1;
- (char)active;
- (void)_setRenderConfig:(NSObject *)arg0;
- (void)setActive:(char)arg0;
- (void)displayLayer:(MDDisplayLayer *)arg0;
- (NSString *)cacheKey;
- (float)cachedWidth;
- (id)cacheKeysForRenderFlags:(id)arg0;
- (void)drawContentsOfRenderers:(id)arg0;
- (char)cacheDeferable;
- (char)keepNonPersistent;
- (void)setCacheInsets:(struct UIEdgeInsets)arg0;
- (void)setUsePersistentCaching:(char)arg0;
- (struct UIEdgeInsets)cacheInsets;
- (void)_popuplateLayer:(id)arg0 withContents:(UIKBKeyDisplayContents *)arg1;
- (NSObject *)borderFilterTypeForCurrentStyle;
- (char)_hasInsets;
- (NSObject *)traitsForCurrentStyle;
- (char)usePersistentCaching;

@end
