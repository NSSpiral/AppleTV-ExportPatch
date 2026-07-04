/* Runtime dump - TSDFrame
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDFrame : TSDStroke
{
    TSDFrameSpec * mSpec;
    NSString * mFrameName;
    float mAssetScale;
    char mScaledSizesValid;
    float mLeftWidth;
    float mRightWidth;
    float mTopHeight;
    float mBottomHeight;
    struct CGSize mAdornmentSize;
}

@property (readonly, nonatomic) float assetScale;
@property (readonly, nonatomic) TSDFrameSpec * frameSpec;

+ (Class)mutableClass;

- (void)saveToArchive:(struct StrokeArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDFrame *)initWithArchive:(struct StrokeArchive *)arg0 unarchiver:(struct StrokeArchive)arg1;
- (void)drawSwatchInRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1;
- (char)isNullStroke;
- (char)shouldRender;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (float)assetScale;
- (TSDFrameSpec *)frameSpec;
- (TSDFrame *)initWithFrameSpec:(TSDFrameSpec *)arg0 assetScale:(float)arg1;
- (char)supportsLineOptions;
- (char)supportsPattern;
- (void)paintPath:(struct CGPath *)arg0 wantsInteriorStroke:(char)arg1 inContext:(struct CGContext *)arg2 useFastDrawing:(char)arg3;
- (char)canApplyDirectlyToRepCALayer;
- (char)canApplyToCAShapeLayer;
- (struct _TSDStrokeOutsets)outsets;
- (char)prefersToApplyToCAShapeLayerDuringManipulation;
- (char)drawsInOneStep;
- (NSString *)strokeByTransformingByTransform:(struct CGAffineTransform)arg0;
- (struct CGRect)coverageRect:(NSObject *)arg0;
- (char)hasMask;
- (TSDFrame *)initWithFrameName:(NSString *)arg0;
- (struct CGRect)coverageRectWithoutAdornment:(id)arg0;
- (char)shouldRenderForSizeIncludingCoverage:(struct CGSize)arg0;
- (TSDFrame *)initWithFrameSpec:(TSDFrameSpec *)arg0 assetScale:(float)arg1 archivableFrameName:(NSString *)arg2;
- (TSDFrame *)initWithFrameSpec:(TSDFrameSpec *)arg0;
- (NSString *)archivableFrameName;
- (struct CGRect)p_uncoveredRectWithoutAdornment:(id)arg0;
- (struct CGRect)p_coverageRectWithoutAdornment:(id)arg0;
- (struct CGRect)i_adornmentRectForRect:(NSObject *)arg0;
- (struct CGRect)p_coverageRectWithAdornment:(ATVFeedSuperShowcasePosterAdornmentElement *)arg0;
- (struct CGSize)p_minimumRenderedSize;
- (char)i_willRenderForRect:(struct CGRect)arg0;
- (float)minimumAssetScale;
- (char)containsPoint:(struct CGPoint)arg0 whenStrokingRect:(struct CGRect)arg1;
- (float)equivalentStrokeWidth;
- (float)i_leftWidth;
- (float)i_rightWidth;
- (float)i_topHeight;
- (float)i_bottomHeight;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSDFrame *)copyWithZone:(struct _NSZone *)arg0;
- (TSDFrame *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (char)supportsColor;
- (char)isFrame;
- (char)isNearlyWhite;
- (NSString *)frameName;

@end
