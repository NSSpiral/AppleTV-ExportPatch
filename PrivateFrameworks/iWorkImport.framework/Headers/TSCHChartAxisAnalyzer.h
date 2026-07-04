/* Runtime dump - TSCHChartAxisAnalyzer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisAnalyzer : NSObject
{
    TSCHChartAxis * mAxis;
    char mShouldCalculateMedian;
    double mMin;
    double mMax;
    double mMedian;
    unsigned int mNumValues;
    double mSumOfValues;
    char mFirstValue;
    char mDidCalculateMedian;
    NSMutableArray * mValues;
}

+ (TSCHChartAxisAnalyzer *)analyzerForAxis:(id)arg0 needsMedian:(char)arg1;

- (TSCHChartAxisAnalyzer *)initForAxis:(id)arg0 needsMedian:(char)arg1;
- (char)p_hasMedianReferenceLine;
- (void)addGridValue:(TSCHChartGridValue *)arg0 forSeries:(CHDPieSeries *)arg1;
- (double)median;
- (void)dealloc;
- (double)average;
- (double)max;
- (double)min;

@end
