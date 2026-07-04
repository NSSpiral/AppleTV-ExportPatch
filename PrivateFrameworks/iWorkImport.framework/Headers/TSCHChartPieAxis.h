/* Runtime dump - TSCHChartPieAxis
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartPieAxis : TSCHChartStackedPercentValueAxis

- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg0;
- (id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)arg0;
- (id)formattedStringForSeries:(id)arg0 index:(unsigned int)arg1;
- (char)supportsFormattedStringForInvalidValue;
- (char)supportsAxisValueLabels;
- (char)usesPercentNumberFormatPropertyForSeriesDataFormatting;

@end
