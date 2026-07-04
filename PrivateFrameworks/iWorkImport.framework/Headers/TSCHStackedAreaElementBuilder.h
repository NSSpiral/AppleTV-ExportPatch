/* Runtime dump - TSCHStackedAreaElementBuilder
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStackedAreaElementBuilder : TSCHAreaElementBuilder

- (struct ? *)p_centerPointsForSeries:(id)arg0 forGroupIndexes:(SEL)arg1 xAxis:(CHXAxis *)arg2 yAxis:(struct _NSRange)arg3 plotAreaFrame:(NSObject *)arg4;
- (struct ? *)p_createPointArrayForSeries:(unsigned int)arg0 inAreaFrame:(NSObject *)arg1 valueStart:(id)arg2 valueEnd:(SEL)arg3 outCount:(NSObject *)arg4;
- (char)p_addBottomStroke:(struct ? *)arg0 toPath:(struct CGSize)arg1 seriesIndex:(unsigned int)arg2 valuesStart:(id)arg3 valuesEnd:(id)arg4 withPointsArray:(NSArray *)arg5 withCount:(struct CGPath *)arg6;

@end
