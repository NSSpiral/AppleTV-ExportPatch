/* Runtime dump - CIEnhancementCalculation
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIEnhancementCalculation : NSObject
{
    struct ? originalFaceColor;
    CIEnhancementHistogram * lumHist;
    CIEnhancementHistogram * rgbSumHist;
    CIEnhancementHistogram * satHist;
    CIEnhancementHistogram * borderHist;
    float exposureValue;
    float maxShadow;
    float minShadow;
    float exposureValueAtZeroShadow;
    float curvePercent;
    char faceInputSet;
    float percentFaceChange;
}

@property (readonly) struct ? originalFaceColor;
@property (readonly) CIEnhancementHistogram * lumHist;
@property (readonly) CIEnhancementHistogram * rgbSumHist;
@property (readonly) CIEnhancementHistogram * satHist;
@property (readonly) CIEnhancementHistogram * borderHist;

+ (float)bestWarmthForI:(float)arg0 q:(float)arg1 percentChange:(float *)arg2;

- (float)faceBalanceWarmth;
- (id)faceBalanceStrength;
- (struct ?)originalFaceColor;
- (id)vibrance;
- (unsigned long)curveCount;
- (struct CGPoint)curvePointAtIndex:(unsigned long)arg0;
- (void)setRGBSumHistogram:(id)arg0;
- (void)setLuminanceHistogram:(id)arg0;
- (void)setBorderHistogram:(id)arg0;
- (void)setSaturationHistogram:(id)arg0;
- (void)setFaceColorFromChromaI:(float)arg0 andChromaQ:(float)arg1;
- (id)rawShadow;
- (int)putShadowsAnalysisInto:(float *)arg0;
- (void)downSampleHistogram:(id)arg0 to:(unsigned int)arg1 storeIn:(float *)arg2;
- (void)printAnalysis;
- (void)setCurvePercent:(float)arg0;
- (void)setupFaceColor:(UIColor *)arg0 redIndex:(int)arg1 greenIndex:(int)arg2 blueIndex:(int)arg3;
- (void)setExposureValue:(float)arg0;
- (void)setShadowsMin:(float)arg0 max:(float)arg1 zeroExposure:(float)arg2;
- (void)printHistogram:(id)arg0 downsampledTo:(unsigned int)arg1;
- (void)printHistogramsDownsampledTo:(unsigned int)arg0;
- (CIEnhancementHistogram *)lumHist;
- (CIEnhancementHistogram *)rgbSumHist;
- (CIEnhancementHistogram *)satHist;
- (CIEnhancementHistogram *)borderHist;
- (void)dealloc;
- (CIEnhancementCalculation *)init;
- (BOOL)shadow;

@end
