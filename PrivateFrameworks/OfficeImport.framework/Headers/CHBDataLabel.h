/* Runtime dump - CHBDataLabel
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHBDataLabel : NSObject

+ (NSString *)chdDataLabelFromXlChartSeriesFormat:(struct XlChartSeriesFormat *)arg0 state:(struct XlChartSeriesFormat)arg1;
+ (int)chdLabelPositionEnumFromXlLabelPosition:(int)arg0;
+ (NSString *)chdDataLabelFromXlChartCustomLabelText:(struct XlChartCustomLabelText *)arg0 state:(struct XlChartFillStyle *)arg1;
+ (int)xlLabelPositionEnumFromCHDDataLabelPosition:(int)arg0;

@end
