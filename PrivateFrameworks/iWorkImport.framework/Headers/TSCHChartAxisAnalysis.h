/* Runtime dump - TSCHChartAxisAnalysis
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisAnalysis : NSObject
{
    long long _retainCount;
    NSArray * _majorGridLocations;
    NSArray * _minorGridLocations;
    NSArray * _totals;
    double _min;
    double _max;
    double _modelMin;
    double _modelMax;
    double _dataSetModelMin;
    double _dataSetModelMax;
    double _modelAverage;
    double _modelMedian;
}

@property (nonatomic) double min;
@property (nonatomic) double max;
@property (nonatomic) double modelMin;
@property (nonatomic) double modelMax;
@property (nonatomic) double dataSetModelMin;
@property (nonatomic) double dataSetModelMax;
@property (nonatomic) double modelAverage;
@property (nonatomic) double modelMedian;
@property (copy, nonatomic) NSArray * majorGridLocations;
@property (copy, nonatomic) NSArray * minorGridLocations;
@property (copy, nonatomic) NSArray * totals;

+ (TSCHChartAxisAnalysis *)allocWithZone:(struct _NSZone *)arg0;

- (NSArray *)majorGridLocations;
- (NSArray *)minorGridLocations;
- (void)setDataSetModelMin:(double)arg0;
- (void)setModelMin:(double)arg0;
- (void)setDataSetModelMax:(double)arg0;
- (void)setModelMax:(double)arg0;
- (void)setModelAverage:(double)arg0;
- (void)setModelMedian:(double)arg0;
- (double)modelMin;
- (double)modelMax;
- (double)dataSetModelMin;
- (double)dataSetModelMax;
- (double)modelAverage;
- (double)modelMedian;
- (void)setMajorGridLocations:(NSArray *)arg0;
- (void)setMinorGridLocations:(NSArray *)arg0;
- (NSArray *)totals;
- (void)setTotals:(NSArray *)arg0;
- (TSCHChartAxisAnalysis *)retain;
- (void)release;
- (void)dealloc;
- (unsigned int)retainCount;
- (double)max;
- (void)setMax:(double)arg0;
- (double)min;
- (void)setMin:(double)arg0;

@end
