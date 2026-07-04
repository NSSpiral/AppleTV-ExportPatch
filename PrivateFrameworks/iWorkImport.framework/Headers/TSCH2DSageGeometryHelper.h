/* Runtime dump - TSCH2DSageGeometryHelper
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH2DSageGeometryHelper : TSCHSageGeometryHelper
{
    float mVerticalAxisOverhang;
    float mHorizontalAxisOverhang;
    float mRightAxisWidthChange;
    float mBottomAxisHeightChange;
    float mTopAxisHeightChange;
    struct CGSize mBottomLeftChartTitleOverhang;
    struct CGSize mTopRightChartTitleOverhang;
    struct CGSize mBottomLeftValueAxisTitleOverhang;
    struct CGSize mTopRightValueAxisTitleOverhang;
    struct CGSize mBottomLeftCategoryAxisTitleOverhang;
    struct CGSize mTopRightCategoryAxisTitleOverhang;
    struct CGSize mBottomLeftValueAxisY2TitleOverhang;
    struct CGSize mTopRightValueAxisY2TitleOverhang;
    struct CGRect mChartBodyBounds;
    struct CGRect mExplodedBounds;
    struct CGRect mChartTitleBounds;
    struct CGRect mValueAxisTitleBounds;
    struct CGRect mCategoryAxisTitleBounds;
    struct CGRect mValueAxisY2TitleBounds;
    struct CGRect mTopLegendBounds;
    struct CGRect mLeftLegendBounds;
    struct CGRect mBottomLegendBounds;
    struct CGRect mRightLegendBounds;
    struct CGRect mTopAxisLabelsBounds;
    struct CGRect mLeftAxisLabelsBounds;
    struct CGRect mBottomAxisLabelsBounds;
    struct CGRect mRightAxisLabelsBounds;
    struct CGRect mTopAxisBounds;
    struct CGRect mLeftAxisBounds;
    struct CGRect mBottomAxisBounds;
    struct CGRect mRightAxisBounds;
    struct CGPoint mExplodedBodyShift;
    struct CGPoint mOutsideLabelsChartTitleShift;
    char mChartLayoutValid;
    char mChartExplodedSizeValid;
    char mChartAxisSizeValid;
    char mChartAxisLabelsSizeValid;
    char mChartTitleSizeValid;
    char mValueAxisTitleSizeValid;
    char mCategoryAxisTitleSizeValid;
    char mValueAxisY2TitleSizeValid;
    char mChartLegendSizeValid;
    char mChartValueElementsGeometryValid;
}

+ (struct CGRect)computeSageChartAreaBoundsForChartInfo:(NSDictionary *)arg0 geometryRect:(SEL)arg1 returningContainingViewportSize:(NSObject *)arg2;

- (char)aspectRatioLocked;
- (struct CGRect)computeSageLayoutCBB;
- (void)calculateChartAxisLabelsSize;
- (void)calculateChartAxisSize;
- (void)calculateChartTitleSize;
- (void)calculateValueAxisTitleSize;
- (void)calculateCategoryAxisTitleSize;
- (void)calculateValueAxisY2TitleSize;
- (char)calculateChartExplodedSize;
- (void)calculateChartBodySize;
- (float)_topAxisOuterWidth;
- (char)leftAxisLabelsVisible;
- (float)_verticalAxisLabelsWidth:(BOOL)arg0;
- (char)bottomAxisLabelsVisible;
- (float)_horizontalAxisLabelsHeight;
- (char)rightAxisLabelsVisible;
- (char)topAxisLabelsVisible;
- (NSObject *)p_model;
- (char)p_labelsVisible:(id)arg0;
- (float)_rightAxisOuterWidth;
- (float)_bottomAxisOuterWidth;
- (float)_leftAxisOuterWidth;
- (struct CGSize)measureText:(NSString *)arg0 withParagraphStyle:(TSWPParagraphStyle *)arg1;
- (float)chartTitlePadding;
- (char)isScatter;
- (float)yAxisTitlePadding:(char)arg0;
- (float)xAxisTitlePadding;
- (float)p_widthFromTicksAndStrokeForAxis:(id)arg0;
- (float)_seriesSymbolWidth;
- (float)distanceFromYAxisUsingParagraphStyle:(NSObject *)arg0;
- (float)seriesCategoryLabelsHorizontalGutter;
- (float)distanceFromXAxisUsingParagraphStyle:(NSObject *)arg0;
- (char)isArea;
- (float)seriesCategoryLabelsVerticalGutter;
- (float)fontHeight:(id)arg0;
- (float)xAxisLabelHeight;
- (float)yAxisLabelHeight:(char)arg0;
- (char)isVertical;
- (char)isPie;
- (char)isLine;

@end
