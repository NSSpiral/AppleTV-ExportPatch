/* Runtime dump - TSCHChartAxisGenericPropertyMap
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisGenericPropertyMap : TSSPropertyMap

+ (void)savePropertyMap:(NSObject *)arg0 toArchive:(struct ChartAxisGenericPropertyMapArchive *)arg1 archiver:(NSObject *)arg2;
+ (NSDictionary *)imageFillProperties;
+ (NSDictionary *)properties;

- (void)saveToArchive:(struct ChartAxisGenericPropertyMapArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCHChartAxisGenericPropertyMap *)initWithArchive:(struct ChartAxisGenericPropertyMapArchive *)arg0 unarchiver:(struct ChartAxisGenericPropertyMapArchive)arg1;

@end
