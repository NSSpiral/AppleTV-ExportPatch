/* Runtime dump - EXChartsheet
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXChartsheet : NSObject

+ (NSObject *)edSheetWithState:(NSObject *)arg0;
+ (void)setupProcessors:(id)arg0;
+ (BOOL)readDistinctSheetElementsFrom:(struct _xmlTextReader *)arg0 state:(NSObject *)arg1;
+ (void)readOtherSheetComponentsWithState:(NSObject *)arg0;
+ (void)readTables:(id)arg0;

@end
