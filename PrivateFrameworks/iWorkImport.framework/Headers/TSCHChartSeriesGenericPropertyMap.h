/* Runtime dump - TSCHChartSeriesGenericPropertyMap
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartSeriesGenericPropertyMap : TSSPropertyMap

+ (void)savePropertyMap:(NSObject *)arg0 toArchive:(struct ChartSeriesGenericPropertyMapArchive *)arg1 archiver:(NSObject *)arg2;
+ (NSDictionary *)imageFillProperties;
+ (NSDictionary *)properties;

- (void)saveToArchive:(struct ChartSeriesGenericPropertyMapArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCHChartSeriesGenericPropertyMap *)initWithArchive:(struct ChartSeriesGenericPropertyMapArchive *)arg0 unarchiver:(struct ChartSeriesGenericPropertyMapArchive)arg1;

@end
