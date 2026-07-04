/* Runtime dump - TSCHAreaElementBuilder
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHAreaElementBuilder : TSCHLineElementBuilder

- (struct ? *)p_createPointArrayForSeries:(unsigned int)arg0 inAreaFrame:(NSObject *)arg1 valueStart:(id)arg2 valueEnd:(SEL)arg3 outCount:(NSObject *)arg4;
- (void)p_addTopStroke:(struct ? *)arg0 toPath:(struct CGSize)arg1 withPointsArray:(NSArray *)arg2 withCount:(struct CGPath *)arg3 lineType:(int)arg4;
- (char)p_addBottomStroke:(struct ? *)arg0 toPath:(struct CGSize)arg1 seriesIndex:(unsigned int)arg2 valuesStart:(id)arg3 valuesEnd:(id)arg4 withPointsArray:(NSArray *)arg5 withCount:(struct CGPath *)arg6;
- (char)needsSeparateHitTestingPaths;

@end
