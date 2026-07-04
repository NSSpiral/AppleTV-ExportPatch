/* Runtime dump - EXPivotTable
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXPivotTable : NSObject

+ (void)readLocationFrom:(struct _xmlNode *)arg0 toPivotTable:(struct _xmlNode *)arg1;
+ (void)readStyleInfoFrom:(struct _xmlNode *)arg0 toPivotTable:(struct _xmlNode *)arg1;
+ (void)readPivotFieldsFrom:(struct _xmlNode *)arg0 toCollection:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)readFieldsFrom:(struct _xmlNode *)arg0 toCollection:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)readItemsFrom:(struct _xmlNode *)arg0 toCollection:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)readPageFieldsFrom:(struct _xmlNode *)arg0 toCollection:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)readDataFieldsFrom:(struct _xmlNode *)arg0 toCollection:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)readConditionalFormatsFrom:(struct _xmlNode *)arg0 toCollection:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)readPivotAreasFrom:(struct _xmlNode *)arg0 toCollection:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (NSObject *)edPivotTableFromXmlPivotTableElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (int)edPivotItemTypeFrom:(NSObject *)arg0;
+ (int)edPivotFieldAxisFrom:(NSObject *)arg0;
+ (void)readFieldItemsFrom:(struct _xmlNode *)arg0 toCollection:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (int)edPivotDatFieldFormatFrom:(NSObject *)arg0;
+ (int)edPivotConditionalFormatTypeFrom:(NSObject *)arg0;
+ (int)edPivotConditionalFormatScopeFrom:(NSObject *)arg0;
+ (int)edPivotAreaTypeFrom:(NSObject *)arg0;
+ (void)readPivotAreaReferencesFrom:(struct _xmlNode *)arg0 toCollection:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;

@end
