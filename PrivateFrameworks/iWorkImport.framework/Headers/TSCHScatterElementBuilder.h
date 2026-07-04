/* Runtime dump - TSCHScatterElementBuilder
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHScatterElementBuilder : TSCHLineAreaScatterElementBuilder

- (unsigned int)countOfHitCheckRegionsInSeries:(id)arg0 forGroups:(NSArray *)arg1 forBodyLayout:(NSObject *)arg2 outNewElementPaths:(struct CGPath * * *)arg3 outSelectionKnobLocations:(struct CGPath * *)arg4;
- (void)p_addTopStroke:(struct ? *)arg0 toPath:(struct CGSize)arg1 withPointsArray:(NSArray *)arg2 withCount:(struct CGPath *)arg3 lineType:(int)arg4;
- (void)p_addKnobsForPoint:(struct CGPoint)arg0 strokedUnitSymbolRect:(struct CGRect)arg1 toKnobSet:(struct CGSize)arg2 symbolsShowing:(id)arg3 includePoint:(NSObject *)arg4;
- (char)needsSeparateHitTestingPaths;

@end
