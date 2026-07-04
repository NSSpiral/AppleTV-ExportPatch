/* Runtime dump - TSCHChartLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartLayout : NSObject
{
    char mNeedsLayout;
    TSCHChartInfo * mChartInfo;
    struct ? mLayoutSettings;
    struct CGRect _legendModelGeometryFrame;
}

@property (readonly) TSCHChartInfo * chartInfo;
@property (readonly) TSCHChartModel * model;
@property (readonly) struct CGRect outerLayoutFrame;
@property (readonly) struct CGRect outerShadowFrame;
@property (readonly) struct CGRect chartAreaFrame;
@property (readonly) struct CGRect legendFrame;
@property (readonly) struct CGRect legendDrawingFrame;
@property struct CGRect legendGeometryFrame;
@property struct CGRect legendModelGeometryFrame;
@property (readonly) struct CGRect chartBodyFrame;
@property (readonly) struct CGRect titleFrame;
@property unsigned int dataSetIndex;
@property struct ? layoutSettings;

+ (NSDictionary *)chartLayoutWithChartInfo:(TSCHChartInfo *)arg0;
+ (struct CGSize)legendSizeForChartInfo:(NSDictionary *)arg0 initialWidth:(float)arg1;
+ (NSObject *)propertiesThatInvalidateLayout;

- (TSCHChartInfo *)chartInfo;
- (id)subselectionKnobPositionsForSelection:(id)arg0;
- (void)setForceOmitLegend:(char)arg0;
- (void)layoutForChartAreaSize:(struct CGSize)arg0;
- (struct CGRect)chartBodyFrame;
- (void)setLegendSize:(struct CGSize)arg0;
- (struct CGRect)chartAreaFrame;
- (struct CGRect)legendFrame;
- (struct CGRect)outerLayoutFrame;
- (void)layoutForCircumscribingSize:(struct CGSize)arg0;
- (struct ?)layoutSettings;
- (void)setLayoutSettings:(struct ?)arg0;
- (struct CGRect)titleFrame;
- (TSCHChartLayout *)initWithChartInfo:(TSCHChartInfo *)arg0;
- (void)layoutForChartBodySize:(struct CGSize)arg0;
- (void)layoutForResizingSize:(struct CGSize)arg0;
- (struct CGRect)boundsForResize;
- (NSObject *)renderersWithRep:(NSObject *)arg0;
- (struct CGRect)outerShadowFrame;
- (struct CGRect)convertChartLayoutSpaceRectToNaturalSpaceRect:(NSObject *)arg0;
- (struct CGRect)legendModelGeometryFrame;
- (struct CGPoint)convertChartLayoutSpaceToNaturalSpace:(struct CGPoint)arg0;
- (struct CGRect)convertNaturalSpaceRectToChartLayoutSpaceRect:(NSObject *)arg0;
- (void)setLegendModelGeometryFrame:(struct CGRect)arg0;
- (void)beginDynamicOperation;
- (void)endDynamicOperation;
- (unsigned int)dataSetIndex;
- (void)setDataSetIndex:(unsigned int)arg0;
- (id)hitChartElements:(struct CGPoint)arg0 passingTest:(id /* block */)arg1;
- (NSArray *)subselectionHaloPositionsForSelections:(NSArray *)arg0;
- (struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg0;
- (struct CGRect)legendDrawingFrame;
- (void)invalidateCachedOriginRelativeToChartAreaFrame;
- (struct CGRect)legendGeometryFrame;
- (void)setLegendGeometryFrame:(struct CGRect)arg0;
- (char)layoutFrameShouldEncloseInfoGeometry;
- (struct CGPoint)convertNaturalSpaceToChartLayoutSpace:(struct CGPoint)arg0;
- (void)processChanges:(id)arg0;
- (void)beginResize;
- (void)takeSizeFromTracker:(id)arg0;
- (void)endResize;
- (struct CGAffineTransform)transformToConvertChartLayoutToNatural;
- (void)dealloc;
- (void)invalidate;
- (char)isValid;
- (TSCHChartModel *)model;

@end
