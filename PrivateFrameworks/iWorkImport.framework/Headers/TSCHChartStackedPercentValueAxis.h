/* Runtime dump - TSCHChartStackedPercentValueAxis
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartStackedPercentValueAxis : TSCHChartValueAxis
{
    TSCHChartAxisAnalysis * mInProgressAnalysisForErrorBarData;
}

- (id)formattedStringForAxisValue:(id)arg0;
- (double)doubleModelToAxisValue:(double)arg0 forSeries:(CHDPieSeries *)arg1;
- (char)supportsReferenceLines;
- (void)updateGridValueTypeInterceptInAnalysis:(id)arg0;
- (void)updateMultiDataModelAxisAnalysis:(id)arg0;
- (double)doubleAxisToModelValue:(double)arg0;
- (void)updateModelAxisAnalysis:(id)arg0;
- (void)adjustMinMaxForDataRangeInAnalysis:(id)arg0;
- (double)unitSpaceValueForSeries:(id)arg0 index:(unsigned int)arg1 min:(double)arg2 max:(double)arg3;
- (double *)unitSpaceValuesForSeries:(id)arg0 indexes:(struct _NSRange)arg1 min:(double)arg2 max:(double)arg3;
- (NSObject *)dataFormatter;
- (NSData *)dataFormatterForSeries:(id)arg0 index:(unsigned int)arg1;
- (id)formattedStringForSeries:(id)arg0 index:(unsigned int)arg1;
- (double)interceptForAxis:(id)arg0;
- (double)unitSpaceValueForDataSpaceValue:(double)arg0 series:(struct Transform * *)arg1 index:(unsigned int)arg2;
- (char)editableFormatForValueStrings;
- (NSString *)valueForFormattedString:(NSString *)arg0;
- (double)totalForGroup:(unsigned int)arg0;
- (char)usesPercentNumberFormatPropertyForSeriesDataFormatting;
- (void)updateModelMinMaxForErrorBarsOnSeries:(id)arg0 axisID:(TSCHChartAxisID *)arg1 analysis:(NSDictionary *)arg2;
- (NSNumber *)userMin;
- (NSNumber *)userMax;

@end
