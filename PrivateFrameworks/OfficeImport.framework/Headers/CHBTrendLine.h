/* Runtime dump - CHBTrendLine
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHBTrendLine : NSObject

+ (void)readFrom:(struct XlChartTrendLine *)arg0 toSeries:(unsigned short)arg1 state:(unsigned short)arg2;
+ (int)edTrendLineTypeFrom:(int)arg0 order:(int)arg1;
+ (NSDictionary *)readTrendlineGraphicProperties:(struct XlChartSeriesFormat *)arg0 forStyleIndex:(struct XlChartSeriesFormat)arg1 state:(struct XlChartFillStyle *)arg2;
+ (int)xlTrendLineRegressionTypeFrom:(int)arg0;

@end
