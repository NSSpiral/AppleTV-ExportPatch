/* Runtime dump - TSCHLegendGenericPropertyMap
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendGenericPropertyMap : TSSPropertyMap

+ (void)savePropertyMap:(NSObject *)arg0 toArchive:(struct LegendGenericPropertyMapArchive *)arg1 archiver:(NSObject *)arg2;
+ (NSDictionary *)imageFillProperties;
+ (NSDictionary *)properties;

- (void)saveToArchive:(struct LegendGenericPropertyMapArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCHLegendGenericPropertyMap *)initWithArchive:(struct LegendGenericPropertyMapArchive *)arg0 unarchiver:(struct LegendGenericPropertyMapArchive)arg1;

@end
