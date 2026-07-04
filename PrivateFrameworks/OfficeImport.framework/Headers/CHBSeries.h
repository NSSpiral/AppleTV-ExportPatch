/* Runtime dump - CHBSeries
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHBSeries : NSObject

+ (NSObject *)readFrom:(struct XlChartDataSeries *)arg0 state:(unsigned short)arg1;
+ (NSObject *)chdSeriesWithState:(NSObject *)arg0;
+ (Class)chdSeriesClassWithState:(NSObject *)arg0;
+ (void)readXlChartSeriesFormat:(struct XlChartDataSeries *)arg0 chdSeries:(unsigned short)arg1 state:(unsigned short)arg2;
+ (void)resolveSeriesStyle:(NSObject *)arg0 state:(NSObject *)arg1;

@end
