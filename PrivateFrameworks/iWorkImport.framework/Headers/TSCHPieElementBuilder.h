/* Runtime dump - TSCHPieElementBuilder
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPieElementBuilder : TSCHElementBuilder

- (unsigned int)countOfLabelsForSeries:(id)arg0 forGroups:(NSArray *)arg1 forBodyLayout:(NSObject *)arg2 outNewTransforms:(struct CGAffineTransform * *)arg3 outNewElementSizes:(struct CGAffineTransform)arg4 outNewClipRect:(struct CGSize * *)arg5 outNewStrings:(struct CGSize)arg6;
- (struct CGPath *)newElementPathInBody:(NSObject *)arg0 forSeries:(CHDPieSeries *)arg1 outTransform:(struct CGAffineTransform *)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4 outWedgeCenterPoint:(struct CGSize)arg5 outSelectionKnobLocations:(struct CGRect)arg6;
- (unsigned int)countOfElementsInSeries:(id)arg0 forGroups:(NSArray *)arg1 forBodyLayout:(NSObject *)arg2 outNewElementBounds:(struct CGRect * *)arg3 outNewClipRects:(struct CGRect)arg4 outNewElementPaths:(struct CGRect * *)arg5 outSelectionKnobLocations:(struct CGRect)arg6;
- (unsigned int)countOfGridLinesInBody:(NSObject *)arg0 forAxis:(id)arg1 minor:(char)arg2 outNewLineDescriptors:(struct ? * *)arg3;
- (char)hasAxisLineInBody:(NSObject *)arg0 forAxis:(id)arg1 outTransform:(struct CGAffineTransform *)arg2 outLine:(struct ? *)arg3;

@end
