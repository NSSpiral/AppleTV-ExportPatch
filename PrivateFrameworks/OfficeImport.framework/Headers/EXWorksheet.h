/* Runtime dump - EXWorksheet
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXWorksheet : NSObject

+ (NSObject *)edSheetWithState:(NSObject *)arg0;
+ (void)setupProcessors:(id)arg0;
+ (BOOL)readDistinctSheetElementsFrom:(struct _xmlTextReader *)arg0 state:(NSObject *)arg1;
+ (void)readOtherSheetComponentsWithState:(NSObject *)arg0;
+ (void)readTables:(id)arg0;
+ (void)readWorksheetViewsFrom:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (void)readWorksheetFormatPropertiesFrom:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (void)readColumnInfosFrom:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (void)readHyperlinksFrom:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (void)readOleObjectsFrom:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (void)readSheetExtensions:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (void)readCommentTextFrom:(NSObject *)arg0;
+ (void)readPivotTables:(id)arg0;
+ (void)readSheetExtension:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;

@end
