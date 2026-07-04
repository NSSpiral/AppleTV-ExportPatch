/* Runtime dump - TSCHChartValueAxis
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartValueAxis : TSCHChartAxis

@property (readonly, nonatomic) NSNumber * userMin;
@property (readonly, nonatomic) NSNumber * userMax;

+ (NSDictionary *)axisForInfo:(NSDictionary *)arg0;
+ (unsigned char)styleOwnerPathType;

- (int)specificPropertyForGeneric:(int)arg0;
- (char)supportsReferenceLines;
- (void)updateModelAxisAnalysis:(id)arg0;
- (void)adjustMinMaxForDataRangeInAnalysis:(id)arg0;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg0;
- (char)editableFormatForValueStrings;
- (NSDictionary *)g_genericToSpecificPropertyMap;
- (char)supportsAxisValueLabels;
- (void)updateModelMinMaxForTrendLineOnSeries:(id)arg0 axisID:(TSCHChartAxisID *)arg1 analysis:(NSDictionary *)arg2;
- (void)updateModelMinMaxForErrorBarsOnSeries:(id)arg0 axisID:(TSCHChartAxisID *)arg1 analysis:(NSDictionary *)arg2;
- (NSNumber *)userMin;
- (NSNumber *)userMax;
- (id)p_computeMajorGridlines:(int)arg0 analysis:(NSDictionary *)arg1;
- (id)p_computeMajorGridlinesAutomaticallyInAnalysis:(id)arg0 forHorizChart:(char)arg1;
- (double)p_calculateAxisDeltaFromSpread:(double)arg0 spreadRanges:(struct ? *)arg1;
- (struct ?)p_axisDescFromPositiveMinValue:(double)arg0 positiveMaxValue:(double)arg1 spreadRanges:(struct ? *)arg2;
- (struct ?)p_axisDescFromNegativeMinValue:(double)arg0 positiveMaxValue:(double)arg1 spreadRanges:(struct ? *)arg2;
- (struct ?)p_axisDescFromFixedPositiveMinValue:(double)arg0 positiveMaxValue:(double)arg1 spreadRanges:(struct ? *)arg2;
- (struct ?)p_axisDescFromFixedNegativeMinValue:(double)arg0 positiveMaxValue:(double)arg1 spreadRanges:(struct ? *)arg2;
- (struct ?)p_axisDescFromPositiveMinValue:(double)arg0 fixedPositiveMaxValue:(double)arg1 spreadRanges:(struct ? *)arg2;
- (struct ?)p_axisDescFromNegativeMinValue:(double)arg0 fixedPositiveMaxValue:(double)arg1 spreadRanges:(struct ? *)arg2;
- (struct ?)p_axisDescFromFixedMinValue:(double)arg0 fixedMaxValue:(double)arg1 spreadRanges:(struct ? *)arg2;
- (struct ?)p_axisDescFromMinValue:(double)arg0 maxValue:(double)arg1 userValues:(int)arg2;
- (struct ?)p_calculateAxisDescFromMinValue:(double)arg0 maxValue:(double)arg1 userValues:(int)arg2;
- (void)p_includeZeroWithMinValue:(double *)arg0 maxValue:(double *)arg1 userValues:(int)arg2;
- (NSObject *)p_GetGenericToValuePropertyMap;
- (double)validateUserMinForDouble:(double)arg0;
- (double)validateUserMaxForDouble:(double)arg0;
- (struct pair<TSCH3DAxisLabelEnumerator *, TSCH3DAxisLabelEnumerator *>)labelEnumeratorPair;
- (void)dealloc;
- (NSDictionary *)defaultProperties;

@end
