/* Runtime dump - TSCH3DChartModelEnumerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartModelEnumerator : NSObject
{
    TSCHChartModel * mModel;
    NSArray * mSeriesList;
    unsigned int mNumberOfValues;
    TSCH3DChartType * mChartType;
    TSCHChartSeriesType * mSeriesType;
    TSCHChartAxis * mCoordinateAxis;
    TSCHChartAxis * mValueAxis;
    double mIntercept;
    double mUnitSpaceIntercept;
    struct ValueEnumerator mSeries;
    struct ValueEnumerator mCoordinate;
    struct vector<double, std::__1::allocator<double> > mSeriesValues;
    struct vector<double, std::__1::allocator<double> > mCoordinateValues;
}

@property (readonly, nonatomic) struct tvec2<int> size;
@property (readonly, nonatomic) TSCHChartModel * model;
@property (readonly, nonatomic) TSCHChartInfo * info;
@property (readonly, nonatomic) TSCH3DChartType * chartType;
@property (readonly, nonatomic) TSCHChartSeriesType * seriesType;
@property (readonly, nonatomic) TSCHChartSeries * series;

+ (NSObject *)enumeratorWithModel:(TSCHChartModel *)arg0 chartType:(TSCH3DChartType *)arg1 seriesType:(TSCHChartSeriesType *)arg2;

- (unsigned int)numberOfSeries;
- (TSCHChartSeriesType *)seriesType;
- (double)unitSpaceIntercept;
- (NSEnumerator *)seriesEnumerator;
- (id)nextSeries;
- (NSEnumerator *)elementEnumerator;
- (unsigned int)nextElement;
- (NSEnumerator *)reverseSeriesEnumerator;
- (unsigned int)valueLabelPositionForAxisValue:(double)arg0;
- (char)isValidNonZero;
- (TSCH3DChartModelEnumerator *)initWithModel:(TSCHChartModel *)arg0 chartType:(TSCH3DChartType *)arg1 seriesType:(TSCHChartSeriesType *)arg2;
- (void)resetForReverseSeriesEnumeration:(char)arg0;
- (id)p_resetCoordinateEnumeration;
- (unsigned int)countSeries;
- (void)updateAxes;
- (double)axisSpaceValue;
- (unsigned int)elementIndex;
- (double)intercept;
- (id)nextSeries:(unsigned int)arg0;
- (NSObject *)nextElement:(unsigned int)arg0;
- (double)groupValue;
- (double)unitSpaceValue;
- (char)isStackedPercentageThatRoundsDownToZero;
- (double)unitSpaceValueForAxisValue:(double)arg0;
- (NSArray *)valueStringForLabelResources:(NSArray *)arg0;
- (char)showValueLabels;
- (char)showSeriesName;
- (TSDFill *)seriesFill;
- (UIColor *)seriesFillOrStrokeColor;
- (char)skipZeroValues;
- (NSString *)valueString;
- (void)dealloc;
- (struct tvec2<int>)size;
- (char)isValid;
- (struct tvec2<int>)position;
- (TSCHChartModel *)model;
- (TSCHChartInfo *)info;
- (unsigned int)index;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)updateValue;
- (TSCHChartSeries *)series;
- (NSString *)seriesName;
- (TSCH3DChartType *)chartType;

@end
