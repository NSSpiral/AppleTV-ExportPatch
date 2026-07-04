/* Runtime dump - CHBState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHBState : NSObject
{
    CHDChart * mChart;
    struct __CFArray * mXlChartDataSeriesCollection;
    int mXlSeriesCount;
    int mXlCurrentSeriesIndex;
    BOOL mHasPrimaryMixedArea;
    BOOL mHasPrimaryMixedColumn;
    BOOL mHasPrimaryMixedLine;
    BOOL mHasSecondaryMixedArea;
    BOOL mHasSecondaryMixedColumn;
    BOOL mHasSecondaryMixedLine;
}

- (void)dealloc;
- (CHBState *)init;
- (EDWorkbook *)workbook;
- (void)setChart:(GQHChart *)arg0;
- (BOOL)chart;
- (int)xlSeriesCount;
- (struct XlChartDataSeries *)xlChartDataSeriesAtIndex:(unsigned short)arg0;
- (void)setXlCurrentSeriesIndex:(int)arg0;
- (void)deleteXlChartDataSeriesCollection;
- (void)readAndCacheXlChartDataSeries;
- (BOOL)hasPrimaryMixedArea;
- (BOOL)hasSecondaryMixedArea;
- (BOOL)hasPrimaryMixedColumn;
- (BOOL)hasSecondaryMixedColumn;
- (BOOL)hasPrimaryMixedLine;
- (struct XlChartDataSeries *)xlCurrentChartDataSeries;
- (int)xlCurrentChartDataSeriesIndex;
- (void)setHasPrimaryMixedArea:(BOOL)arg0;
- (void)setHasPrimaryMixedColumn:(BOOL)arg0;
- (void)setHasPrimaryMixedLine:(BOOL)arg0;
- (void)setHasSecondaryMixedArea:(BOOL)arg0;
- (void)setHasSecondaryMixedColumn:(BOOL)arg0;
- (BOOL)hasSecondaryMixedLine;
- (void)setHasSecondaryMixedLine:(BOOL)arg0;
- (unsigned int)chartGroupIndexForType:(int)arg0 isForPrimary:(BOOL)arg1;
- (NSArray *)resources;

@end
