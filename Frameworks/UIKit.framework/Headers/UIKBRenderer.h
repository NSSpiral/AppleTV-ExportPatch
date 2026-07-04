/* Runtime dump - UIKBRenderer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderer : NSObject
{
    struct CGContext * _cachingContext;
    id _cachingContextCompletion;
    char _opaque;
    char _containsRGBContent;
    struct CGContext * _ctx;
    float _scale;
    int _renderFlags;
    NSString * _cacheKey;
    UIImage * _renderedImage;
    struct CGSize _size;
}

@property (readonly, nonatomic) struct CGContext * context;
@property (readonly, nonatomic) NSData * contextData;
@property (readonly, nonatomic) struct CGSize size;
@property (readonly, nonatomic) float scale;
@property (readonly, nonatomic) char opaque;
@property (readonly, nonatomic) int renderFlags;
@property (readonly, nonatomic) UIImage * renderedImage;
@property (readonly, nonatomic) char containsRGBContent;
@property (retain, nonatomic) NSString * cacheKey;

+ (NSString *)rendererWithContext:(struct CGContext *)arg0 withSize:(struct CGSize)arg1 withScale:(float)arg2 opaque:(char)arg3 renderFlags:(int)arg4;
+ (void)clearInternalCaches;
+ (struct CGContext *)imageContextWithSize:(struct CGSize)arg0 scale:(float)arg1 opaque:(char)arg2 invert:(char)arg3;

- (void)dealloc;
- (struct CGSize)size;
- (float)scale;
- (struct CGContext *)context;
- (void)renderKeyContents:(id)arg0 withTraits:(NSArray *)arg1;
- (char)opaque;
- (void)renderBackgroundTraits:(NSArray *)arg0;
- (NSString *)cacheKey;
- (UIImage *)renderedImage;
- (char)loadCachedImageForHashString:(NSString *)arg0;
- (NSData *)contextData;
- (void)setCacheKey:(NSString *)arg0;
- (int)renderFlags;
- (char)containsRGBContent;
- (void)renderEdgeEffect:(NSObject *)arg0 withTraits:(NSArray *)arg1;
- (void)renderShadowEffect:(NSObject *)arg0 withTraits:(NSArray *)arg1;
- (UIKBRenderer *)initWithContext:(struct CGContext *)arg0 withSize:(struct CGSize)arg1 withScale:(float)arg2 opaque:(char)arg3 renderFlags:(int)arg4;
- (void)ensureContext;
- (struct CGColor *)_validColorForColor:(struct CGColor *)arg0;
- (void)addPathForTraits:(NSArray *)arg0 displayRect:(struct CGRect *)arg1;
- (void)addRoundRect:(struct CGRect)arg0 radius:(struct CGSize)arg1 corners:(UIStatusBarCorners *)arg2;
- (void)addPathForRenderGeometry:(NSObject *)arg0;
- (void)_drawLinearGradient:(NSObject *)arg0 inRect:(struct CGRect)arg1;
- (struct CGContext *)_contextForCacheImageSize:(struct CGSize)arg0;
- (void)_completeCacheImageWithTraitsIfNecessary:(id)arg0;
- (void)renderBackgroundTraits:(NSArray *)arg0 allowCaching:(char)arg1;
- (char)renderKeyStringContents:(id)arg0 withTraits:(NSArray *)arg1;
- (char)renderKeyImageContents:(id)arg0 withTraits:(NSArray *)arg1;
- (char)renderKeyPathContents:(id)arg0 withTraits:(NSArray *)arg1;
- (void)_renderVariantsFromKeyContents:(id)arg0 withTraits:(NSArray *)arg1;
- (void)_drawKeyImage:(UIImage *)arg0 inRect:(struct CGRect)arg1 withStyle:(struct CGSize)arg2 force1xImages:(char)arg3;
- (char)_drawSingleSymbol:(id)arg0 inRect:(struct CGRect)arg1 withStyle:(struct CGSize)arg2;
- (char)_drawKeyString:(NSString *)arg0 inRect:(struct CGRect)arg1 withStyle:(struct CGSize)arg2;
- (struct CGPath *)_thickShiftGlyphPath;
- (struct CGPath *)_thinShiftGlyphPath;
- (struct CGPath *)_deleteGlyphPaths;
- (void)drawPath:(struct CGPath *)arg0 weight:(float)arg1 transform:(struct CGAffineTransform)arg2 color:(struct CGColor *)arg3 fill:(char)arg4;
- (void)drawShiftPath:(char)arg0 weight:(float)arg1 transform:(struct CGAffineTransform)arg2 color:(struct CGColor *)arg3;
- (void)addPathForFlickPopupGeometries:(id)arg0;
- (void)addPathForFlickGeometry:(NSObject *)arg0;
- (void)addPathForSplitGeometry:(NSObject *)arg0;
- (NSObject *)pathForRenderGeometry:(NSObject *)arg0;
- (NSObject *)pathForFlickGeometry:(NSObject *)arg0;
- (id)pathForFlickPopupGeometries:(id)arg0;
- (NSObject *)pathForSplitGeometry:(NSObject *)arg0;

@end
