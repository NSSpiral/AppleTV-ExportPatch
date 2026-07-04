/* Runtime dump - TSDImager
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDImager : NSObject <TSDCanvasDelegate>
{
    NSArray * mInfos;
    struct CGColor * mBackgroundColor;
    struct CGRect mUnscaledClipRect;
    float mViewScale;
    struct CGSize mScaledImageSize;
    struct CGSize mMaximumScaledImageSize;
    char mUseScaledImageSize;
    char mDistortedToMatch;
    char mImageMustHaveEvenDimensions;
    char mShouldReuseBitmapContext;
    struct UIEdgeInsets mContentInset;
    TSKDocumentRoot * mDocumentRoot;
    TSDCanvas * mCanvas;
    struct CGRect mActualScaledClipRect;
    char mDrawingIntoPDF;
    char mIsPrinting;
    char mShouldUseSRGBColorSpace;
    struct CGContext * mReusableBitmapContext;
    struct CGRect mReusableBounds;
    struct CGRect mReusableIntegralBounds;
    struct CGRect mReusableActualScaledClipRect;
    struct CGSize mReusableScaledImageSize;
    char mReusableShouldUseSRGBColorSpace;
    id mPostRenderAction;
}

@property (readonly, retain, nonatomic) TSDCanvas * canvas;
@property (retain, nonatomic) NSArray * infos;
@property (nonatomic) struct CGColor * backgroundColor;
@property (nonatomic) struct CGRect unscaledClipRect;
@property (nonatomic) float viewScale;
@property (nonatomic) struct CGSize scaledImageSize;
@property (nonatomic) struct CGSize maximumScaledImageSize;
@property (nonatomic) char distortedToMatch;
@property (nonatomic) char imageMustHaveEvenDimensions;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (readonly, nonatomic) struct CGRect actualScaledClipRect;
@property (nonatomic) char shouldReuseBitmapContext;
@property (nonatomic) char isPrinting;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (struct CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg0;
- (char)isPrintingCanvas;
- (char)isCanvasDrawingIntoPDF:(id)arg0;
- (TSDImager *)initWithDocumentRoot:(NSObject *)arg0;
- (float)viewScale;
- (struct CGRect)unscaledClipRect;
- (void)setInfos:(NSArray *)arg0;
- (void)setPostRenderAction:(NSObject *)arg0;
- (void)setUnscaledClipRect:(struct CGRect)arg0;
- (char)drawPageInContext:(struct CGContext *)arg0 createPage:(char)arg1;
- (char)isPrinting;
- (void)setScaledImageSize:(struct CGSize)arg0;
- (NSArray *)infos;
- (char)p_configureCanvas;
- (char)shouldReuseBitmapContext;
- (struct CGImage *)p_newImageInReusableContext;
- (void)p_drawPageInContext:(struct CGContext *)arg0 createPage:(char)arg1;
- (struct CGSize)scaledImageSize;
- (struct CGSize)maximumScaledImageSize;
- (void)setMaximumScaledImageSize:(struct CGSize)arg0;
- (NSData *)pdfData;
- (struct CGRect)actualScaledClipRect;
- (char)distortedToMatch;
- (void)setDistortedToMatch:(char)arg0;
- (char)imageMustHaveEvenDimensions;
- (void)setImageMustHaveEvenDimensions:(char)arg0;
- (void)setShouldReuseBitmapContext:(char)arg0;
- (void)setIsPrinting:(char)arg0;
- (void)dealloc;
- (void)setBackgroundColor:(struct CGColor *)arg0;
- (struct CGColor *)backgroundColor;
- (struct UIEdgeInsets)contentInset;
- (void)setContentInset:(struct UIEdgeInsets)arg0;
- (struct CGImage *)newImage;
- (NSString *)documentRoot;
- (void)setViewScale:(float)arg0;
- (TSDCanvas *)canvas;

@end
