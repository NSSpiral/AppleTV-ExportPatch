/* Runtime dump - TSCHChartDrawableLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartDrawableLayout : TSWPTextHostLayout
{
    struct ? mChartInvalidFlags;
    TSCHChartLayout * mChartLayout;
    TSDLayoutGeometry * mLayoutGeometryWhileCallingSuperComputeLayoutGeometry;
    TSDLayoutGeometry * mLastPureGeometry;
    TSDLayoutGeometry * mLastChartAreaGeometry;
    struct CGSize mMinSizeCache;
    char mInResize;
    char mSuppressChartLayoutInvalidation;
    TSDLayoutGeometry * mLegendGeometryForResize;
    TSCHChartDrawableLayoutLegendResizer * mLegendResizer;
}

@property (readonly, nonatomic) TSCHChartInfo * chartInfo;
@property (readonly, retain, nonatomic) TSCHChartLayout * chartLayout;
@property (readonly, nonatomic) char is3DChart;
@property (readonly, nonatomic) NSIndexSet * pieWedgeExplosionSeriesIndices;
@property (copy, nonatomic) NSArray * pieWedgeExplosions;
@property (copy, nonatomic) NSDictionary * seriesIndexedPieWedgeExplosions;
@property (readonly, nonatomic) TSCHChartModel * model;
@property (nonatomic) unsigned int dataSetIndex;
@property (copy, nonatomic) TSDLayoutGeometry * legendGeometry;
@property (copy, nonatomic) TSDLayoutGeometry * legendModelGeometry;
@property (retain, nonatomic) TSCHChartLayout * p_chartLayoutNoCreate;
@property (readonly, retain, nonatomic) TSCHChartLayout * p_chartLayout;
@property (retain, nonatomic) TSCHChartDrawableLayoutLegendResizer * p_legendResizer;
@property (copy, nonatomic) TSDLayoutGeometry * p_lastPureGeometry;
@property (copy, nonatomic) TSDLayoutGeometry * p_lastChartAreaGeometry;
@property (copy, nonatomic) TSDLayoutGeometry * p_legendGeometryForResize;

- (TSCHChartInfo *)chartInfo;
- (TSCHChartLayout *)chartLayout;
- (NSObject *)renderersWithRep:(NSObject *)arg0;
- (NSDictionary *)seriesIndexedPieWedgeExplosions;
- (void)setSeriesIndexedPieWedgeExplosions:(NSDictionary *)arg0;
- (unsigned int)dataSetIndex;
- (void)setDataSetIndex:(unsigned int)arg0;
- (NSObject *)propertiesThatInvalidateLayout;
- (void)processChanges:(id)arg0;
- (char)is3DChart;
- (char)p_isPrintingInBackground;
- (char)p_isRenderingForKPF;
- (Class)repClassOverride;
- (TSCHChartLayout *)p_chartLayoutNoCreate;
- (void)setP_chartLayoutNoCreate:(TSCHChartLayout *)arg0;
- (NSDictionary *)chartDrawableInfo;
- (void)p_validateChartLayout;
- (TSCHChartLayout *)p_chartLayout;
- (void)p_postLayoutPropertyValueDidChangeNotification;
- (NSIndexSet *)pieWedgeExplosionSeriesIndices;
- (id)pieWedgeExplosionsForSeriesIndices:(id)arg0;
- (id)p_chartLayout2D;
- (void)p_setLegendSize:(struct CGSize)arg0;
- (void)p_setLegendGeometry:(NSObject *)arg0 fromTransform:(struct CGAffineTransform)arg1 onLayout:(NSObject *)arg2 shouldUpdateLayoutItemSize:(char)arg3;
- (void)p_clearChartLayout;
- (void)invalidateChartLayoutState;
- (void)invalidateSize;
- (void)p_forceValidateChartLayout;
- (TSDLayoutGeometry *)p_lastPureGeometry;
- (void)setP_lastPureGeometry:(TSDLayoutGeometry *)arg0;
- (void)setP_lastChartAreaGeometry:(TSDLayoutGeometry *)arg0;
- (NSDictionary *)layoutGeometryFromInfo;
- (void)p_convertValidChartLayout:(NSObject *)arg0 andInfoGeometry:(NSObject *)arg1 toPureGeometry:(id *)arg2 toChartAreaGeometry:(id *)arg3 toShadowGeometry:(id *)arg4;
- (void)offsetGeometryBy:(struct CGPoint)arg0;
- (TSDLayoutGeometry *)p_lastChartAreaGeometry;
- (TSDLayoutGeometry *)p_legendGeometryForResize;
- (void)setP_legendGeometryForResize:(TSDLayoutGeometry *)arg0;
- (NSObject *)p_constrainAndResizePureGeometry:(NSObject *)arg0 withValidChartLayout:(NSObject *)arg1 toChartAreaGeometry:(id *)arg2 toShadowGeometry:(id *)arg3 toInfoGeometry:(id *)arg4;
- (NSObject *)computeLayoutGeometry;
- (void)processChangedProperty:(int)arg0;
- (char)changesShouldClearLayout:(NSObject *)arg0;
- (void)invalidateChartLayoutStructure;
- (char)changesShouldSetNeedsLayout:(NSObject *)arg0;
- (struct CGSize)p_calcMinSize;
- (struct CGRect)alignmentFrameForProvidingGuidesInRoot;
- (float)p_approximateMultiDataControlUnscaledHeight;
- (float)p_approximatedAdditionalHeightForMultiDataControlWithMinimumAccommodatingScale:(float)arg0;
- (struct CGRect)frameForCulling;
- (float)p_approximateMultiDataControlUnscaledMinimumWidth;
- (id)visibleGeometries;
- (struct CGRect)boundsInfluencingExteriorWrap;
- (struct CGRect)p_addMultiDataControlToInlineWrapBounds:(id)arg0;
- (struct CGRect)alignmentFrame;
- (NSString *)i_computeWrapPath;
- (void)setChartLayoutPropertyValue:(id)arg0 forKey:(NSString *)arg1;
- (NSArray *)pieWedgeExplosions;
- (void)setPieWedgeExplosions:(NSArray *)arg0;
- (TSDLayoutGeometry *)legendGeometry;
- (void)setLegendGeometry:(TSDLayoutGeometry *)arg0;
- (TSDLayoutGeometry *)legendModelGeometry;
- (void)setLegendModelGeometry:(TSDLayoutGeometry *)arg0;
- (struct CGRect)boundsForStandardKnobs;
- (id)computeInfoGeometryDuringResize;
- (char)canRotateChildLayout:(NSObject *)arg0;
- (char)supportsParentRotation;
- (NSObject *)computeInfoGeometryFromPureLayoutGeometry:(NSObject *)arg0;
- (void)p_addEdgeAlignmentGuidesForRect:(struct CGRect)arg0 array:(struct CGSize)arg1;
- (void)take3DDepth;
- (int)wrapFitType;
- (struct CGRect)insertionFrame;
- (NSString *)i_computeUnitedWrapPath;
- (float)viewScaleForZoomingToSelectionPath:(NSString *)arg0 targetPointSize:(float)arg1;
- (TSCHChartDrawableLayoutLegendResizer *)p_legendResizer;
- (void)setP_legendResizer:(TSCHChartDrawableLayoutLegendResizer *)arg0;
- (TSCHChartDrawableLayout *)initWithInfo:(NSDictionary *)arg0;
- (void)dealloc;
- (void)invalidate;
- (void)validate;
- (TSCHChartModel *)model;
- (struct CGSize)minimumSize;

@end
