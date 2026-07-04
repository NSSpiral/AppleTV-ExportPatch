/* Runtime dump - TSCHLineAreaScatterElementBuilder
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLineAreaScatterElementBuilder : TSCHElementBuilder

- (unsigned int)countOfLabelsForSeries:(id)arg0 forGroups:(NSArray *)arg1 forBodyLayout:(NSObject *)arg2 outNewTransforms:(struct CGAffineTransform * *)arg3 outNewElementSizes:(struct CGAffineTransform)arg4 outNewClipRect:(struct CGSize * *)arg5 outNewStrings:(struct CGSize)arg6;
- (unsigned int)countOfPointsForSeries:(id)arg0 forGroups:(NSArray *)arg1 forBodyLayout:(NSObject *)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4 outUnitSymbolPath:(struct CGSize)arg5 outNewTransformArray:(NSArray *)arg6 outNewGroupIndexArray:(struct CGPath * *)arg7;
- (struct CGAffineTransform)transformForRenderingSeriesElementTopStrokeForSeries:(id)arg0 forGroups:(NSArray *)arg1 forBodyLayout:(NSObject *)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4 outNewElementPath:(struct CGSize)arg5;
- (struct CGAffineTransform)transformForRenderingSeriesElementForSeries:(id)arg0 forGroups:(NSArray *)arg1 forBodyLayout:(NSObject *)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4 outNewElementPath:(struct CGSize)arg5;
- (char)symbolTypeIsClosed:(int)arg0;
- (unsigned int)countOfElementsInSeries:(id)arg0 forGroups:(NSArray *)arg1 forBodyLayout:(NSObject *)arg2 outNewElementBounds:(struct CGRect * *)arg3 outNewClipRects:(struct CGRect)arg4 outNewElementPaths:(struct CGRect * *)arg5 outSelectionKnobLocations:(struct CGRect)arg6;
- (unsigned int)countOfErrorBarsInSeries:(id)arg0 forGroups:(NSArray *)arg1 forAxisID:(NSObject *)arg2 forBodyLayout:(NSObject *)arg3 outClipRect:(struct CGRect *)arg4 outNewErrorBarDescriptors:(struct CGSize)arg5;
- (struct CGAffineTransform)transformForRenderingLabelInBody:(NSObject *)arg0 forSeries:(unsigned int)arg1 forGroup:(unsigned int)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4;
- (unsigned int)countOfHitCheckRegionsInSeries:(id)arg0 forGroups:(NSArray *)arg1 forBodyLayout:(NSObject *)arg2 outNewElementPaths:(struct CGPath * * *)arg3 outSelectionKnobLocations:(struct CGPath * *)arg4;
- (struct CGPath *)p_newPathForSymbol:(int)arg0 context:(struct CGContext *)arg1 at:(struct CGPoint)arg2 width:(float)arg3 pathLocation:(int)arg4 stroke:(TSDStroke *)arg5;
- (struct CGPath *)p_newCirclePath:(struct CGPoint)arg0 width:(float)arg1 pathLocation:(int)arg2 stroke:(TSDStroke *)arg3;
- (struct CGPath *)p_newTrianglePath:(struct CGPoint)arg0 width:(float)arg1 pathLocation:(int)arg2 stroke:(TSDStroke *)arg3;
- (struct CGPath *)p_newYieldPath:(struct CGPoint)arg0 width:(float)arg1 pathLocation:(int)arg2 stroke:(TSDStroke *)arg3;
- (struct CGPath *)p_newSquarePath:(struct CGPoint)arg0 width:(float)arg1 pathLocation:(int)arg2 stroke:(TSDStroke *)arg3 context:(struct CGContext *)arg4;
- (struct CGPath *)p_newDiamondPath:(struct CGPoint)arg0 width:(float)arg1 pathLocation:(int)arg2 stroke:(TSDStroke *)arg3;
- (struct CGPath *)p_newCrossPath:(struct CGPoint)arg0 width:(float)arg1 pathLocation:(int)arg2 stroke:(TSDStroke *)arg3;
- (struct CGPath *)p_newPlusPath:(struct CGPoint)arg0 width:(float)arg1 pathLocation:(int)arg2 stroke:(TSDStroke *)arg3 context:(struct CGContext *)arg4;
- (float)dataPointDimension:(id)arg0 symbolType:(int)arg1 stroke:(TSDStroke *)arg2;
- (struct ? *)p_centerPointsForSeries:(id)arg0 forGroupIndexes:(SEL)arg1 xAxis:(CHXAxis *)arg2 yAxis:(struct _NSRange)arg3 nullsUseIntercept:(id)arg4 plotAreaFrame:(NSObject *)arg5;
- (void)p_addCurvedTopStroke:(struct ? *)arg0 toPath:(struct CGSize)arg1 withPointsArray:(NSArray *)arg2 withCount:(struct CGPath *)arg3;
- (float)p_bubbleMaxForSeries:(id)arg0 inChartBodyLayoutSize:(struct CGSize)arg1;
- (struct ? *)p_centerPointsForSeries:(id)arg0 forGroupIndexes:(SEL)arg1 xAxis:(CHXAxis *)arg2 yAxis:(struct _NSRange)arg3 plotAreaFrame:(NSObject *)arg4;
- (struct ? *)p_createPointArrayForSeries:(unsigned int)arg0 inAreaFrame:(NSObject *)arg1 valueStart:(id)arg2 valueEnd:(SEL)arg3 cullBadPoints:(id)arg4 outCount:(struct CGRect)arg5;
- (NSSet *)p_calculateSelectionKnobSet:(NSSet *)arg0;
- (struct ? *)p_createPointArrayForSeries:(unsigned int)arg0 inAreaFrame:(NSObject *)arg1 valueStart:(id)arg2 valueEnd:(SEL)arg3 outCount:(NSObject *)arg4;
- (void)p_addTopStroke:(struct ? *)arg0 toPath:(struct CGSize)arg1 withPointsArray:(NSArray *)arg2 withCount:(struct CGPath *)arg3 lineType:(int)arg4;
- (char)p_addBottomStroke:(struct ? *)arg0 toPath:(struct CGSize)arg1 seriesIndex:(unsigned int)arg2 valuesStart:(id)arg3 valuesEnd:(id)arg4 withPointsArray:(NSArray *)arg5 withCount:(struct CGPath *)arg6;
- (struct CGPath *)p_newUnitPathForSymbol:(int)arg0 symbolSize:(float)arg1 stroke:(TSDStroke *)arg2;
- (struct CGPath *)p_newUnitHitPathForPath:(struct CGPath *)arg0 symbolType:(int)arg1 effectiveStrokeWidth:(float)arg2;
- (void)p_addKnobsForPoint:(struct CGPoint)arg0 strokedUnitSymbolRect:(struct CGRect)arg1 toKnobSet:(struct CGSize)arg2 symbolsShowing:(id)arg3 includePoint:(NSObject *)arg4;
- (void)p_createElementsForSeries:(id)arg0 forGroups:(NSArray *)arg1 inBodyLayout:(NSObject *)arg2 outTopStrokePath:(struct CGPath * *)arg3 outTopStrokeClipRect:(struct CGPath *)arg4 outSeriesElementPath:(struct CGRect *)arg5 outSeriesElementClipRect:(struct CGSize)arg6 outSymbolElementPath:(NSString *)arg7 outSymbolElementClipRect:(struct CGPath * *)arg8 outSymbolElementHitCheckPath:(struct CGPath *)arg9 outSelectionKnobLocations:(struct CGRect *)arg10;
- (struct CGPoint)labelPointForPosition:(unsigned int)arg0 rect:(struct CGRect)arg1 stringSize:(struct CGSize)arg2 symbolType:(int)arg3;
- (char)p_centerPointForSeries:(id)arg0 forGroupIndex:(unsigned int)arg1 xAxis:(CHXAxis *)arg2 yAxis:(CHXCategoryAxis *)arg3 plotAreaFrame:(struct CGRect)arg4 nullsUseIntercept:(struct CGSize)arg5 outPoint:(NSObject *)arg6;
- (id)p_symbolKnobLocationsForSeries:(id)arg0 forGroups:(NSArray *)arg1 inBodyLayout:(NSObject *)arg2;
- (void)p_trendlineInfoForSeries:(id)arg0 forBodyLayout:(NSObject *)arg1 outVertical:(char *)arg2 outOffsetInBody:(double *)arg3;
- (char)needsSeparateHitTestingPaths;
- (struct CGAffineTransform)transformForRenderingSeriesElementSymbolsForSeries:(id)arg0 forGroups:(NSArray *)arg1 forBodyLayout:(NSObject *)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4 outNewElementPath:(struct CGSize)arg5;

@end
