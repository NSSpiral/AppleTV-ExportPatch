/* Runtime dump - TSCHElementBuilder
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHElementBuilder : NSObject

+ (struct CGRect)clipRectForElementsDrawnByRenderState:(NSObject *)arg0;
+ (float)referenceLineLabelTopAxisPadding;
+ (float)referenceLineLabelRightAxisPadding;
+ (struct CGRect)p_chartLayoutSpaceClipRectUnionForElementsDrawnByRenderState:(NSObject *)arg0 returningItemCount:(SEL)arg1;
+ (struct CGRect)elementsRectForElementsDrawnByRenderState:(NSObject *)arg0;

- (unsigned int)countOfReferenceLineLabelsForAxisID:(NSObject *)arg0 forRefLineLabelsLayout:(NSObject *)arg1 outNewTransforms:(struct CGAffineTransform * *)arg2 outNewElementSizes:(struct CGAffineTransform)arg3 outNewClipRects:(struct CGSize * *)arg4 outNewParagraphStyles:(struct CGSize)arg5 outNewStrings:(struct CGRect * *)arg6 outNewLabelTypes:(struct CGRect)arg7 outReferenceLines:(id * *)arg8 includeOutsideChartBodyBounds:(id * *)arg9 outOutsideChartBodyBounds:(id * *)arg10;
- (unsigned int)countOfReferenceLineLabelsForReferenceLine:(id)arg0 forRefLineLabelsLayout:(NSObject *)arg1 outNewTransforms:(struct CGAffineTransform * *)arg2 outNewElementSizes:(struct CGAffineTransform)arg3 outNewClipRects:(struct CGSize * *)arg4 outNewParagraphStyles:(struct CGSize)arg5 outNewStrings:(struct CGRect * *)arg6 outNewLabelTypes:(struct CGRect)arg7 includeOutsideChartBodyBounds:(id * *)arg8 outOutsideChartBodyBounds:(id)arg9;
- (unsigned int)countOfLabelsForSeries:(id)arg0 forGroups:(NSArray *)arg1 forBodyLayout:(NSObject *)arg2 outNewTransforms:(struct CGAffineTransform * *)arg3 outNewElementSizes:(struct CGAffineTransform)arg4 outNewClipRect:(struct CGSize * *)arg5 outNewStrings:(struct CGSize)arg6;
- (unsigned int)countOfElementsInSeries:(id)arg0 forGroups:(NSArray *)arg1 forBodyLayout:(NSObject *)arg2 outNewElementBounds:(struct CGRect * *)arg3 outNewClipRects:(struct CGRect)arg4 outNewElementPaths:(struct CGRect * *)arg5 outSelectionKnobLocations:(struct CGRect)arg6;
- (unsigned int)countOfReferenceLinesForAxisID:(NSObject *)arg0 forBodyLayout:(NSObject *)arg1 outClipRect:(struct CGRect *)arg2 outNewClipRects:(struct CGSize)arg3 outNewLineDescriptors:(NSArray *)arg4 outReferenceLines:(struct CGRect * *)arg5 includeOutsideChartBodyBounds:(struct CGRect)arg6 outOutsideChartBodyBounds:(struct ? * *)arg7;
- (struct CGAffineTransform)transformForRenderingLabelForReferenceLine:(id)arg0 ofType:(unsigned int)arg1 range:(struct _NSRange)arg2 inLayoutItem:(NSObject *)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5;
- (unsigned int)countOfErrorBarsInSeries:(id)arg0 forGroups:(NSArray *)arg1 forAxisID:(NSObject *)arg2 forBodyLayout:(NSObject *)arg3 outClipRect:(struct CGRect *)arg4 outNewErrorBarDescriptors:(struct CGSize)arg5;
- (void)trendlineElementForSeries:(id)arg0 forBodyLayout:(NSObject *)arg1 outElementBounds:(struct CGRect *)arg2 outElementClipRect:(struct CGSize)arg3 outElementPath:(NSString *)arg4;
- (struct CGAffineTransform)transformForRenderingTrendlineTextForSeries:(id)arg0 forAreaLayout:(NSObject *)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3 outParagraphStyle:(struct CGSize)arg4 outNewString:(NSString *)arg5;
- (struct CGAffineTransform)transformForRenderingR2TextForSeries:(id)arg0 forAreaLayout:(NSObject *)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3 outParagraphStyle:(struct CGSize)arg4 outString:(NSString *)arg5;
- (struct CGPoint)labelPointForPosition:(unsigned int)arg0 rect:(struct CGRect)arg1 stringSize:(struct CGSize)arg2;
- (struct CGAffineTransform)transformForRenderingLabelInBody:(NSObject *)arg0 forSeries:(unsigned int)arg1 forGroup:(unsigned int)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4;
- (unsigned int)countOfHitCheckRegionsInSeries:(id)arg0 forGroups:(NSArray *)arg1 forBodyLayout:(NSObject *)arg2 outNewElementPaths:(struct CGPath * * *)arg3 outSelectionKnobLocations:(struct CGPath * *)arg4;
- (unsigned int)countOfGridLinesInBody:(NSObject *)arg0 forAxis:(id)arg1 minor:(char)arg2 outNewLineDescriptors:(struct ? * *)arg3;
- (char)hasAxisLineInBody:(NSObject *)arg0 forAxis:(id)arg1 outTransform:(struct CGAffineTransform *)arg2 outLine:(struct ? *)arg3;
- (unsigned int)p_countOfReferenceLineLabelsForReferenceLine:(id)arg0 forRefLineLabelsLayout:(NSObject *)arg1 substringRange:(struct _NSRange *)arg2 outNewTransforms:(struct CGAffineTransform * *)arg3 outNewElementSizes:(struct CGAffineTransform)arg4 outNewClipRects:(struct CGSize * *)arg5 outNewParagraphStyles:(struct CGSize)arg6 outNewStrings:(struct CGRect * *)arg7 outNewLabelTypes:(struct CGRect)arg8 includeOutsideChartBodyBounds:(id * *)arg9 outOutsideChartBodyBounds:(id)arg10;
- (void)p_trendlineInfoForSeries:(id)arg0 forBodyLayout:(NSObject *)arg1 outVertical:(char *)arg2 outOffsetInBody:(double *)arg3;
- (struct CGAffineTransform)p_transformForRenderingTrendlineTextNotR2:(char)arg0 forSeries:(CHDPieSeries *)arg1 forAreaLayout:(NSObject *)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4 outParagraphStyle:(struct CGSize)arg5 outString:(NSString *)arg6;

@end
