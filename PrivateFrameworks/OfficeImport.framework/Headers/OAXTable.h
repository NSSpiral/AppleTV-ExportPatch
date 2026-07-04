/* Runtime dump - OAXTable
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXTable : NSObject

+ (NSObject *)readFromXmlNode:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (NSObject *)readThemableFillFromParent:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (NSObject *)readThemableEffectsFromParent:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (NSObject *)readPartStyle:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (void)readPropertiesFromXmlNode:(struct _xmlNode *)arg0 toProperties:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readGridFromXmlNode:(struct _xmlNode *)arg0 toGrid:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readRowsFromTableXmlNode:(struct _xmlNode *)arg0 toTable:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (NSObject *)readTableStyle:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (void)cacheTableStylesInPart:(id)arg0 cache:(NSObject *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (NSObject *)readDefaultTableStyleWithDrawingState:(NSObject *)arg0;
+ (NSObject *)readThemableStrokeFromParent:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (NSObject *)readCellBorderStyle:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (int)readOnOffFlag:(id)arg0;
+ (NSObject *)readCellStyle:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (NSObject *)readTextStyle:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (NSObject *)readCellPropertiesFromXmlNode:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (void)readCellFromXmlNode:(struct _xmlNode *)arg0 toCell:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readRowFromXmlNode:(struct _xmlNode *)arg0 toRow:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;

@end
