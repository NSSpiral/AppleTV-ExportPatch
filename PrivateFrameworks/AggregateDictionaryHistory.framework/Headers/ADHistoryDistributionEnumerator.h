/* Runtime dump - ADHistoryDistributionEnumerator
 * Image: /System/Library/PrivateFrameworks/AggregateDictionaryHistory.framework/AggregateDictionaryHistory
 */

@interface ADHistoryDistributionEnumerator : NSObject
{
    void * _iterator;
}

- (char)getNextValue:(double *)arg0 secondsInDayOffset:(int *)arg1;
- (ADHistoryDistributionEnumerator *)initWithIterator:(void *)arg0;

@end
