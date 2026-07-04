/* Runtime dump - UIKBKeyplaneView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBKeyplaneView : UIKBSplitImageView <UIKBCacheableView>
{
    UIKBTree * _keyplane;
    UIKBTree * _defaultKeyplane;
    UIKBCacheToken * _cacheToken;
    UIKBKeyView * _candidateGapView;
    NSMutableDictionary * _subviewIndex;
    NSMutableDictionary * _activeViewIndex;
    NSMutableDictionary * _renderedKeyViews;
    NSMutableDictionary * _delayedDeactivationKeys;
    NSTimer * _activatedTimer;
    char _performingDeactivation;
    char _shouldDrawRect;
    UIKBRenderConfig * _renderConfig;
    UIKBSplitImageView * _keyBorders;
    UIKBSplitImageView * _keyBackgrounds;
    UIKBSplitImageView * _keyCaps;
}

@property (retain, nonatomic) UIKBTree * keyplane;
@property (retain, nonatomic) UIKBTree * defaultKeyplane;
@property (retain, nonatomic) UIKBCacheToken * cacheToken;
@property (retain, nonatomic) UIKBRenderConfig * renderConfig;
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
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (NSString *)viewForKey:(NSString *)arg0;
- (UIKBRenderConfig *)renderConfig;
- (void)setRenderConfig:(UIKBRenderConfig *)arg0;
- (void)displayLayer:(MDDisplayLayer *)arg0;
- (void)setKeyplane:(UIKBTree *)arg0;
- (UIKBTree *)keyplane;
- (NSString *)cacheKey;
- (float)cachedWidth;
- (id)cacheKeysForRenderFlags:(id)arg0;
- (void)drawContentsOfRenderers:(id)arg0;
- (char)cacheDeferable;
- (char)keepNonPersistent;
- (void)purgeSubviews;
- (void)purgeKeyViews;
- (void)setState:(int)arg0 forKey:(NSString *)arg1;
- (int)stateForKey:(NSString *)arg0;
- (char)validForKeyplane:(id)arg0 withVisualStyle:(int)arg1;
- (UIKBKeyplaneView *)initWithFrame:(struct CGRect)arg0 keyplane:(struct CGSize)arg1;
- (void)setDefaultKeyplane:(UIKBTree *)arg0;
- (void)setCacheToken:(UIKBCacheToken *)arg0;
- (void)updateDecorationViewsIfNeeded;
- (void)deactivateKeys;
- (id)activeKeyViews;
- (void)deactivateAdaptiveKey:(NSString *)arg0;
- (void)addKeyToDelayedDeactivationSet:(NSSet *)arg0;
- (void)dimKeyCaps:(float)arg0 duration:(float)arg1;
- (char)isPasscodeStyle;
- (UIKBCacheToken *)cacheToken;
- (UIKBTree *)defaultKeyplane;
- (int)cornerMaskForKey:(NSString *)arg0 recursive:(char)arg1;
- (void)cancelDelayedDeactivation;
- (void)performDelayedDeactivation:(id)arg0;
- (void)scheduleDelayedDeactivation;
- (char)_shouldAllowKey:(NSString *)arg0;
- (void)removeKeyFromDelayedDeactivationSet:(NSSet *)arg0;
- (void)deactivateKey:(NSString *)arg0 previousState:(int)arg1;
- (NSString *)containingViewForKey:(NSString *)arg0 withState:(int)arg1;
- (NSString *)cacheIdentifierForKey:(NSString *)arg0 withState:(int)arg1;
- (Class)classForKey:(NSString *)arg0;
- (NSString *)cacheIdentifierForKey:(NSString *)arg0;
- (NSString *)viewForKey:(NSString *)arg0 state:(int)arg1;
- (void)activateKeys;
- (void)purgeLayerContents;

@end
