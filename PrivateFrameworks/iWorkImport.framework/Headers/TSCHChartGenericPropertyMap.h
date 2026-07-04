/* Runtime dump - TSCHChartGenericPropertyMap
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartGenericPropertyMap : TSSPropertyMap

+ (void)savePropertyMap:(NSObject *)arg0 toArchive:(struct ChartGenericPropertyMapArchive *)arg1 archiver:(NSObject *)arg2;
+ (NSDictionary *)imageFillProperties;
+ (NSDictionary *)properties;

- (void)saveToArchive:(struct ChartGenericPropertyMapArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCHChartGenericPropertyMap *)initWithArchive:(struct ChartGenericPropertyMapArchive *)arg0 unarchiver:(struct ChartGenericPropertyMapArchive)arg1;

@end
