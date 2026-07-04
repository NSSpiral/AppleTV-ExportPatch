/* Runtime dump - TSCHBarColumnElementBuilder
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHBarColumnElementBuilder : TSCHElementBuilder
{
    char mVertical;
}

+ (void)calculateGapsForChartModel:(NSObject *)arg0 forTotalWidth:(float)arg1 outBarWidth:(float *)arg2 outBarGroupGap:(float *)arg3 outBarGap:(float *)arg4;

- (unsigned int)countOfBarRectsForSeries:(id)arg0 forGroups:(NSArray *)arg1 forBodyLayout:(NSObject *)arg2 outNewGroupIndexArray:(unsigned int * *)arg3 outNewElementRectsArray:(unsigned int)arg4 outNewClipRectsArray:(struct CGRect * *)arg5;
- (struct CGRect)nudgeBarElementFrame:(NSObject *)arg0 inPlotAreaFrame:(SEL)arg1 usingBarModelCache:(struct CGRect)arg2 unitSpaceValueBegin:(struct CGSize)arg3 unitSpaceValueEnd:(id)arg4 withViewScale:(struct CGRect)arg5;
- (unsigned int)countOfLabelsForSeries:(id)arg0 forGroups:(NSArray *)arg1 forBodyLayout:(NSObject *)arg2 outNewTransforms:(struct CGAffineTransform * *)arg3 outNewElementSizes:(struct CGAffineTransform)arg4 outNewClipRect:(struct CGSize * *)arg5 outNewStrings:(struct CGSize)arg6;
- (unsigned int)countOfElementsInSeries:(id)arg0 forGroups:(NSArray *)arg1 forBodyLayout:(NSObject *)arg2 outNewElementBounds:(struct CGRect * *)arg3 outNewClipRects:(struct CGRect)arg4 outNewElementPaths:(struct CGRect * *)arg5 outSelectionKnobLocations:(struct CGRect)arg6;
- (unsigned int)countOfErrorBarsInSeries:(id)arg0 forGroups:(NSArray *)arg1 forAxisID:(NSObject *)arg2 forBodyLayout:(NSObject *)arg3 outClipRect:(struct CGRect *)arg4 outNewErrorBarDescriptors:(struct CGSize)arg5;
- (void)p_trendlineInfoForSeries:(id)arg0 forBodyLayout:(NSObject *)arg1 outVertical:(char *)arg2 outOffsetInBody:(double *)arg3;
- (unsigned int)p_logicalSeriesIndexForSeries:(id)arg0;
- (void)p_nudgeBarElementFrame:(struct CGRect *)arg0 inPlotAreaFrame:(struct CGSize)arg1 usingBarModelCache:(NSObject *)arg2 unitSpaceValueBegin:(struct CGRect)arg3 unitSpaceValueEnd:(struct CGSize)arg4 withViewScale:(float)arg5;
- (void)p_calcGapsForBodyLayout:(NSObject *)arg0 outBarWidth:(float *)arg1 outBarGroupGap:(float *)arg2 outBarGap:(float *)arg3;
- (struct CGRect)p_createBarRectInFrame:(NSObject *)arg0 forSeries:(SEL)arg1 valueIndex:(struct CGRect)arg2 valueAxis:(struct CGSize)arg3 groupAxis:(TSCHChartAxis *)arg4 barWidth:(id)arg5 barGroupGap:(unsigned int)arg6 barGap:(id)arg7;
- (unsigned int)p_numberOfSeriesForGapCalcInModel:(NSObject *)arg0;
- (double)p_beginValueForSeries:(id)arg0 index:(unsigned int)arg1 unitSpaceIntercept:(double)arg2 relativelyPositive:(char)arg3 valueAxis:(TSCHChartValueAxis *)arg4;
- (TSCHBarColumnElementBuilder *)initWithVertical:(char)arg0;
- (TSCHBarColumnElementBuilder *)init;

@end
