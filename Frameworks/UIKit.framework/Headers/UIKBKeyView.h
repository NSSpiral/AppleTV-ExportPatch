/* Runtime dump - UIKBKeyView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBKeyView : UIView <UIKBCacheableView>
{
    UIKBTree * m_keyplane;
    UIKBTree * m_key;
    struct CGRect m_drawFrame;
    struct __CFBoolean * m_allowsCaching;
    UIKBRenderConfig * m_renderConfig;
    CALayer * _keyBorders;
    CALayer * _keyBackgrounds;
    CALayer * _keyForegrounds;
    CALayer * _keyCaps;
    CALayer * _keyCapHint;
    int _renderedKeyState;
    NSString * _cachedTraitsHashString;
    char _renderAsMask;
    UIKeyboardMenuView * _popupMenu;
}

@property (readonly, nonatomic) UIKBTree * keyplane;
@property (readonly, nonatomic) UIKBTree * key;
@property (nonatomic) struct CGRect drawFrame;
@property (retain, nonatomic) UIKBRenderConfig * renderConfig;
@property (nonatomic) UIKeyboardMenuView * popupMenu;
@property (readonly, nonatomic) struct CGRect variantFrame;
@property (readonly, nonatomic) UIKBKeyView * contentsKeyView;
@property (nonatomic) char renderAsMask;
@property (readonly) int cachedRenderFlags;
@property (readonly, nonatomic) struct UIEdgeInsets displayInsets;
@property (retain, nonatomic) NSString * cachedTraitsHashString;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSString * cacheKey;
@property (readonly, nonatomic) char cacheDeferable;
@property (readonly, nonatomic) float cachedWidth;
@property (readonly, nonatomic) char keepNonPersistent;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)layoutSubviews;
- (UIKBRenderConfig *)renderConfig;
- (UIKBTree *)key;
- (int)didInputSubTree:(id)arg0;
- (UIKBKeyView *)contentsKeyView;
- (UIKBKeyView *)initWithFrame:(struct CGRect)arg0 keyplane:(struct CGSize)arg1 key:(UIKBTree *)arg2;
- (id)subTreeHitTest:(struct CGPoint)arg0;
- (void)willDisplayModalActionView:(NSObject *)arg0 withSubTreeKeyView:(NSObject *)arg1 completion:(id /* block */)arg2;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)setRenderConfig:(UIKBRenderConfig *)arg0;
- (UIImage *)_generateBackdropMaskImage;
- (void)_applyAppearanceInvocations;
- (int)textEffectsVisibilityLevel;
- (void)updateForKeyplane:(id)arg0 key:(UIKBTree *)arg1;
- (void)displayLayer:(MDDisplayLayer *)arg0;
- (void)setDrawFrame:(struct CGRect)arg0;
- (UIKBTree *)keyplane;
- (NSString *)cacheKey;
- (float)cachedWidth;
- (id)cacheKeysForRenderFlags:(id)arg0;
- (void)drawContentsOfRenderers:(id)arg0;
- (char)cacheDeferable;
- (char)keepNonPersistent;
- (struct CGRect)variantFrame;
- (void)setPopupMenu:(UIKeyboardMenuView *)arg0;
- (void)dimKeyCaps:(float)arg0 duration:(float)arg1;
- (void)_popuplateLayer:(id)arg0 withContents:(UIKBKeyDisplayContents *)arg1;
- (char)_viewShouldBeOpaque;
- (struct CGRect)drawFrame;
- (int)cachedRenderFlags;
- (char)renderAsMask;
- (struct UIEdgeInsets)displayInsets;
- (NSString *)cachedTraitsHashString;
- (char)requiresSublayers;
- (char)_shouldUpdateLayers;
- (void)setCachedTraitsHashString:(NSString *)arg0;
- (UIKeyboardMenuView *)popupMenu;
- (void)setRenderAsMask:(char)arg0;

@end
