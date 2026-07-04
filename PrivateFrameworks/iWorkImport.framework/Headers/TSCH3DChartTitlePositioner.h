/* Runtime dump - TSCH3DChartTitlePositioner
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartTitlePositioner : NSObject
{
    TSCH3DScene * mScene;
    TSCHChartInfo * mInfo;
    struct tvec2<float> mCachedCategoryAxisLabelsSize;
    struct tvec2<float> mCachedValueAxisLabelsSize;
    struct tvec2<float> mCachedSeriesLabelsSize;
}

@property (readonly, nonatomic) TSCHChartInfo * info;
@property (readonly, nonatomic) TSCH3DScene * scene;

+ (NSDictionary *)positionerWithInfo:(TSCHChartInfo *)arg0 scene:(TSCH3DScene *)arg1;

- (float)wrapWidthForSize:(struct CGSize)arg0 labelTransform:(struct LabelTransform *)arg1;
- (TSCH3DChartTitlePositioner *)initWithInfo:(TSCHChartInfo *)arg0 scene:(TSCH3DScene *)arg1;
- (void)applyParagraphStyle:(NSObject *)arg0 onLabelTransform:(struct LabelTransform *)arg1 alignmentDimension:(struct tvec2<float>)arg2;
- (struct tvec2<float>)sizeOfCategoryAxisLabels;
- (struct tvec2<float>)sizeOfValueAxisLabels;
- (struct tvec2<float>)sizeOfSeriesLabels;
- (TSCH3DScene *)scene;
- (void)dealloc;
- (TSCHChartInfo *)info;
- (void).cxx_construct;

@end
