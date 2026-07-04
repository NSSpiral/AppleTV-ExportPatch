/* Runtime dump - CHBReaderState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHBReaderState : CHBState
{
    EBReaderSheetState * mEBReaderSheetState;
    struct XlChartBinaryReader * mXlReader;
    <CHAutoStyling> * mAutoStyling;
    int mAxisGroup;
    struct XlChartPlot * mXlCurrentPlot;
    int mXlCurrentPlotIndex;
}

@property (readonly, nonatomic) OADColorScheme * colorScheme;

- (void)dealloc;
- (OADColorScheme *)colorScheme;
- (EDWorkbook *)workbook;
- (void)setChart:(GQHChart *)arg0;
- (struct XlChartPlot *)xlCurrentPlot;
- (int)axisGroup;
- (struct XlChartBinaryReader *)xlReader;
- (id)autoStyling;
- (struct XlChartSeriesFormat *)xlCurrentDefaultSeriesFormat;
- (int)xlCurrentPlotIndex;
- (NSObject *)ebReaderSheetState;
- (struct XlChartSeriesFormat *)defaultFormatForXlSeries:(struct XlChartMarkerStyle *)arg0;
- (void)setAxisGroup:(int)arg0;
- (int)xlPlotCount;
- (void)setXlCurrentPlotIndex:(int)arg0;
- (void)setXlCurrentPlot:(struct XlChartPlot *)arg0;
- (CHBReaderState *)initWithEBReaderSheetState:(NSObject *)arg0;
- (void)readAndCacheXlChartDataSeries;
- (NSArray *)resources;

@end
