/* Runtime dump - TSDImageFill
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDImageFill : TSDFill <TSDMixing, TSSPreset, TSSPresetSource, NSCopying, NSMutableCopying>
{
    TSPData * mImageData;
    TSPData * mOriginalImageData;
    char mInterpretsUntaggedImageDataAsGeneric;
    int mTechnique;
    TSUColor * mTintColor;
    TSUFlushableCachedImage * mStandardSizeTintedImage;
    TSUFlushableCachedImage * mHalfSizeTintedImage;
    TSUFlushableCachedImage * mQuarterSizeTintedImage;
    TSUColor * mReferenceColor;
    struct CGSize mFillSize;
    char mHasIndicatedInterestInProvider;
    NSObject<OS_dispatch_queue> * mTempRenderLock;
    struct CGImage * mTempRenderCopy;
    struct CGImage * mSourceOfTempRenderCopy;
    int mTempRenderCount;
}

@property (readonly, retain, nonatomic) TSPData * imageData;
@property (readonly, retain, nonatomic) TSPData * originalImageData;
@property (readonly, nonatomic) char interpretsUntaggedImageDataAsGeneric;
@property (nonatomic) int technique;
@property (readonly, nonatomic) struct CGSize fillSize;
@property (readonly, copy, nonatomic) TSUColor * tintColor;
@property (readonly, nonatomic) float scale;
@property (readonly, nonatomic) NSString * presetKind;

+ (TSDImageFill *)instanceWithArchive:(struct FillArchive *)arg0 unarchiver:(struct FillArchive)arg1;
+ (TSDImageFill *)presetKinds;
+ (void)bootstrapPresetsOfKind:(NSString *)arg0 inTheme:(TSSTheme *)arg1 alternate:(int)arg2;
+ (NSURL *)imageFillDataFromURL:(NSURL *)arg0 withContext:(NSObject *)arg1 error:(id *)arg2;

- (void)saveToArchive:(struct FillArchive *)arg0 archiver:(struct /* ? */)arg1;
- (TSDImageFill *)initWithArchive:(struct FillArchive *)arg0 unarchiver:(struct FillArchive)arg1;
- (void)drawSwatchInRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1;
- (NSString *)presetKind;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (struct CGSize)fillSize;
- (TSDImageFill *)initWithImageData:(TSPData *)arg0 technique:(int)arg1 tintColor:(TSUColor *)arg2 size:(struct CGSize)arg3 originalImageData:(TSPData *)arg4;
- (void)paintPath:(struct CGPath *)arg0 naturalBounds:(struct CGRect)arg1 inContext:(struct CGSize)arg2 isPDF:(char)arg3;
- (char)tsch_hasAllResources;
- (TSPData *)originalImageData;
- (SEL)mapThemeAssetSelector;
- (void)p_paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1;
- (char)drawsInOneStep;
- (struct CGSize)renderedImageSizeForObjectSize:(struct CGSize)arg0;
- (NSObject *)p_validatedImageProvider;
- (char)interpretsUntaggedImageDataAsGeneric;
- (void)p_setFillSizeForApplicationData;
- (UIImage *)p_standardSizeCachedImage;
- (char)p_shouldApplyTintedImage;
- (UIImage *)p_quarterSizeCachedImage;
- (UIImage *)p_halfSizeCachedImage;
- (char)canApplyToCALayer;
- (char)canApplyToCALayerByAddingSublayers;
- (NSObject *)p_cachedImageForSize:(struct CGSize)arg0 inContext:(struct CGContext *)arg1 orLayer:(CAReplicatorLayer *)arg2;
- (struct CGRect)p_drawnRectForImageSize:(NSObject *)arg0 destRect:(SEL)arg1 inContext:(struct CGSize)arg2;
- (struct CGSize)p_sizeOfFillImageForDestRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1;
- (void)p_drawBitmapImage:(struct CGImage *)arg0 withOrientation:(int)arg1 inContext:(struct CGContext *)arg2 bounds:(struct CGRect)arg3;
- (void)p_drawPDFWithProvider:(NSObject *)arg0 inContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2;
- (struct CGImage *)p_newTintedImageWithScale:(float)arg0;
- (struct CGImage *)p_newStandardSizeImage;
- (struct CGImage *)p_newHalfSizeImage;
- (struct CGImage *)p_newQuarterSizeImage;
- (TSDImageFill *)initWithGenericImageData:(NSData *)arg0 technique:(int)arg1 tintColor:(TSUColor *)arg2 size:(struct CGSize)arg3 originalImageData:(TSPData *)arg4;
- (NSObject *)imageDataAtFillSize;
- (char)shouldBeReappliedToCALayer:(id)arg0;
- (void)applyToCALayer:(id)arg0 withScale:(float)arg1;
- (char)p_shouldPersistFillSizeForData:(NSData *)arg0;
- (void)setTechnique:(int)arg0;
- (int)technique;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (float)scale;
- (TSDImageFill *)copyWithZone:(struct _NSZone *)arg0;
- (char)isOpaque;
- (TSUColor *)tintColor;
- (TSDImageFill *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (TSUColor *)referenceColor;
- (TSPData *)imageData;
- (void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1;
- (int)fillType;

@end
