/* Runtime dump - CHBErrorBar
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHBErrorBar : NSObject

+ (void)readFrom:(struct XlChartErrorBar *)arg0 toSeries:(unsigned short)arg1 state:(unsigned short)arg2;
+ (int)edErrorBarDirectionFrom:(int)arg0;
+ (int)edErrorBarTypeFrom:(int)arg0;
+ (NSDictionary *)readErrorBarGraphicProperties:(struct XlChartSeriesFormat *)arg0 forStyleIndex:(struct XlChartSeriesFormat)arg1 state:(struct XlChartFillStyle *)arg2;
+ (int)xlErrorBarTypeFrom:(int)arg0 direction:(int)arg1;
+ (int)xlErrorBarSourceFrom:(int)arg0;

@end
