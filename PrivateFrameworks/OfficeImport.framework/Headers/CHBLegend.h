/* Runtime dump - CHBLegend
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHBLegend : NSObject

+ (NSObject *)readFrom:(struct XlChartLegendFrame *)arg0 state:(struct XlChartFillStyle *)arg1;
+ (int)chdLegendPositionEnumFromXlLegendPosition:(int)arg0;
+ (NSObject *)readCHDLegendEntryFrom:(struct XlChartCustomLegend *)arg0 state:(struct XlChartCustomLegend)arg1;
+ (int)xlLegendPositionEnumFromCHDLegendPosition:(int)arg0;

@end
