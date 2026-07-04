/* Runtime dump - UIKBBackgroundView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBBackgroundView : UIKBSplitImageView <UIKBCacheableView>
{
    UIKBTree * _keyplane;
    UITextInputTraits * _inputTraits;
    int _visualStyle;
    NSObject * _geometryCacheKey;
    struct CGRect _splitLeftRect;
    struct CGRect _splitLeftCacheRect;
    struct CGRect _splitRightRect;
    struct CGRect _splitRightCacheRect;
    int _topCorners;
    char _isSplit;
    char _centerFilled;
    char _hasCandidateKeys;
    UIKBRenderConfig * _renderConfig;
}

@property (retain, nonatomic) UIKBRenderConfig * renderConfig;
@property (retain, nonatomic) NSObject * geometryCacheKey;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSString * cacheKey;
@property (readonly, nonatomic) char cacheDeferable;
@property (readonly, nonatomic) float cachedWidth;
@property (readonly, nonatomic) char keepNonPersistent;

- (UIKBBackgroundView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)layoutSubviews;
- (UIKBRenderConfig *)renderConfig;
- (void)setRenderConfig:(UIKBRenderConfig *)arg0;
- (void)displayLayer:(MDDisplayLayer *)arg0;
- (void)refreshStyleForKeyplane:(id)arg0 inputTraits:(UITextInputTraits *)arg1;
- (void)setGeometryCacheKey:(NSObject *)arg0;
- (NSString *)cacheKey;
- (float)cachedWidth;
- (id)cacheKeysForRenderFlags:(id)arg0;
- (void)drawContentsOfRenderers:(id)arg0;
- (char)cacheDeferable;
- (char)keepNonPersistent;
- (NSObject *)geometryCacheKey;

@end
