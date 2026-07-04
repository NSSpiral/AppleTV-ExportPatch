/* Runtime dump - TSCHTrendLineData
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHTrendLineData : NSObject <TSCHUnretainedParent>
{
    TSCHChartSeries * mSeries;
    int mLineType;
    char mShowTrendLine;
    TSURegressionModel * mRegression;
    double mMaxYValue;
    double mMinYValue;
    double mMaxXValue;
    double mMinXValue;
    int mInputAxisType;
    int mOutputAxisType;
    char mTrendLineInvalid;
    TSUBezierPath * mCachedTrendLinePath;
    struct CGRect mCachedChartFrame;
    double mOffsetInBody;
    char mCachedChartVertical;
}

@property (readonly, nonatomic) char showTrendLine;
@property (readonly, nonatomic) char showTrendLineLegendText;
@property (readonly, nonatomic) char showEquation;
@property (readonly, nonatomic) char showRSquared;
@property (readonly, nonatomic) NSString * trendLineLegendText;
@property (readonly, nonatomic) NSString * rSquaredText;
@property (readonly, nonatomic) float equationTextOpacity;
@property (readonly, nonatomic) float rSquaredTextOpacity;

- (void)clearParent;
- (TSCHTrendLineData *)initWithSeries:(CHDPieSeries *)arg0;
- (char)showTrendLineLegendText;
- (NSString *)trendLineLegendText;
- (void)invalidateData;
- (char)showTrendLineForAxisID:(NSObject *)arg0;
- (double)minValueForAxisID:(NSObject *)arg0;
- (double)maxValueForAxisID:(NSObject *)arg0;
- (void)p_releaseCache;
- (void)p_updateTrendLineData;
- (id)p_linePathFromPoints:(struct ? *)arg0 count:(unsigned int)arg1;
- (void)trendLineUnitSpacePoints:(struct ? * *)arg0 count:(struct ?)arg1 drawCurve:(unsigned int *)arg2 maxPoints:(char *)arg3;
- (struct ?)p_unitPoint:(struct ?)arg0 toScreenFrame:(struct CGRect)arg1 offset:(struct CGSize)arg2 vertical:(char)arg3;
- (void)p_addPathToTrendLinePathWithPoints:(struct ? *)arg0 count:(unsigned int)arg1 curved:(char)arg2 curveFitter:(TSDCurveFitter *)arg3;
- (NSArray *)p_dataPointValues;
- (unsigned int)p_fillArrayX:(NSArray *)arg0 andY:(id)arg1 fromPoints:(GEOTimeCheckpoints *)arg2;
- (void)p_calcMARegression:(unsigned int)arg0 xData:(NSData *)arg1 yData:(NSData *)arg2;
- (void)p_calcBoundsForMovingAverage;
- (unsigned int)p_fillArrayX:(double *)arg0 andY:(double *)arg1 fromPoints:(GEOTimeCheckpoints *)arg2 hasNegativeX:(char *)arg3;
- (void)p_calcRegression:(unsigned int)arg0 xData:(double *)arg1 yData:(double *)arg2;
- (void)p_calcBounds;
- (int)p_getTrendLineType;
- (void)p_generateRegression;
- (char)showEquation;
- (char)showRSquared;
- (NSString *)rSquaredText;
- (float)equationTextOpacity;
- (float)rSquaredTextOpacity;
- (struct __CFAttributedString *)newEquationAttributedString;
- (NSObject *)trendLinePathForChartRect:(struct CGRect)arg0 offsetInBody:(struct CGSize)arg1 vertical:(char)arg2;
- (char)showTrendLine;
- (void)dealloc;
- (void)updateIfNeeded;

@end
