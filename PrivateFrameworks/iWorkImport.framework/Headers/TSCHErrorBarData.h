/* Runtime dump - TSCHErrorBarData
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHErrorBarData : NSObject <TSCHUnretainedParent>
{
    TSCHChartSeries * mSeries;
    char mSupportsXAxisBars;
    double mMaxValue;
    double mMinValue;
    int mMaxValueGroupIndex;
    int mMinValueGroupIndex;
    double mMaxValueScatterX;
    double mMinValueScatterX;
    double mStandardError;
    double mStandardDeviation;
    double mStandardDeviationMean;
    double mStandardErrorScatterX;
    double mStandardDeviationScatterX;
    double mStandardDeviationMeanScatterX;
    char mErrorBarsInvalid;
}

@property (readonly, nonatomic) int maxValueGroupIndex;
@property (readonly, nonatomic) int minValueGroupIndex;

+ (char)hasErrorBarsForSeries:(id)arg0;
+ (int)p_errorBarSettingForSeries:(id)arg0 useXAxis:(char)arg1 axisID:(TSCHChartAxisID *)arg2;

- (void)clearParent;
- (TSCHErrorBarData *)initWithSeries:(CHDPieSeries *)arg0;
- (void)invalidateData;
- (double)minValueForAxisID:(NSObject *)arg0;
- (double)maxValueForAxisID:(NSObject *)arg0;
- (char)showErrorBarsForAxisID:(NSObject *)arg0;
- (int)minValueGroupIndex;
- (int)maxValueGroupIndex;
- (float)opacityForAxisID:(NSObject *)arg0;
- (NSObject *)shadowForAxisID:(NSObject *)arg0;
- (NSObject *)strokeForAxisID:(NSObject *)arg0;
- (int)p_errorBarTypeForAxisID:(NSObject *)arg0;
- (char)p_errorBarIsVerticalForAxisID:(NSObject *)arg0 chartVertical:(char)arg1;
- (struct CGPoint)p_getValuePointForGroup:(unsigned int)arg0 inputAxisID:(NSObject *)arg1 outputAxisID:(NSObject *)arg2 barVertical:(char)arg3;
- (int)p_errorBarSettingForAxisID:(NSObject *)arg0 value:(double)arg1 barType:(int)arg2;
- (double)p_positiveErrorForValue:(double *)arg0 onAxisID:(NSObject *)arg1 groupIndex:(unsigned int)arg2;
- (double)p_negativeErrorForValue:(double *)arg0 onAxisID:(NSObject *)arg1 groupIndex:(unsigned int)arg2;
- (void)p_clearData;
- (void)p_updateDataForAxisID:(NSObject *)arg0;
- (unsigned int)p_stripBadValuesInArray:(double *)arg0 numValues:(unsigned int)arg1;
- (double)p_stdDevFactorForAxisID:(NSObject *)arg0;
- (double)p_fixedErrorForAxisID:(NSObject *)arg0;
- (double)p_percentageErrorForAxisID:(NSObject *)arg0;
- (double)p_stdErrorErrorForAxisID:(NSObject *)arg0;
- (double)p_stdDevErrorForAxisID:(NSObject *)arg0;
- (double)p_stdDevMeanForAxisID:(NSObject *)arg0;
- (double)p_customErrorForAxisID:(NSObject *)arg0 groupIndex:(unsigned int)arg1 positive:(char)arg2;
- (double)p_errorForValue:(double *)arg0 onAxisID:(NSObject *)arg1 groupIndex:(unsigned int)arg2 positive:(char)arg3;
- (double *)p_createArrayOfSeriesValuesForAxisID:(NSObject *)arg0 count:(unsigned int)arg1;
- (double *)p_createArrayOfSeriesOffsetsForAxisID:(NSObject *)arg0 count:(unsigned int)arg1;
- (void)p_updateStdErrorForAxisID:(NSObject *)arg0 forValues:(double *)arg1 withOffsets:(double *)arg2 numValues:(unsigned int)arg3;
- (void)p_updateMinMaxForAxisID:(NSObject *)arg0 forValues:(double *)arg1 withOffsets:(double *)arg2 numValues:(unsigned int)arg3;
- (void)p_updateStdDeviationForAxisID:(NSObject *)arg0 forValues:(double *)arg1 withOffsets:(double *)arg2 numValues:(unsigned int)arg3;
- (void)p_updateMinMaxForStackedPercentageAxis:(id)arg0 forValues:(double *)arg1 withOffsets:(double *)arg2 numValues:(unsigned int)arg3;
- (NSObject *)lineEndForAxisID:(NSObject *)arg0;
- (char)hasErrorDataForAxisID:(NSObject *)arg0 valueIndex:(unsigned int)arg1 chartVertical:(char)arg2 barVertical:(char *)arg3 unitValue:(struct CGPoint *)arg4 unitPositive:(struct CGPoint *)arg5 unitNegative:(struct CGPoint *)arg6;
- (void)updateIfNeeded;

@end
