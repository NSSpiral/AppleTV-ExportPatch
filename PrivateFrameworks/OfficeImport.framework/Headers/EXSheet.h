/* Runtime dump - EXSheet
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXSheet : NSObject

+ (void)readFrom:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (Class)exSheetClassFromXmlSheetType:(NSObject *)arg0 location:(struct CGPoint)arg1;
+ (void)readCommonSheetElementsFrom:(struct _xmlTextReader *)arg0 state:(NSObject *)arg1;
+ (void)readAllDrawablesWithState:(NSObject *)arg0;
+ (void)readDelayedSheeWithLocation:(NSObject *)arg0 sheetXmlType:(NSObject *)arg1 state:(NSObject *)arg2;
+ (void)readSheetProperties:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (void)readLegacyDrawablesWithState:(NSObject *)arg0;
+ (void)readDrawablesWithState:(NSObject *)arg0;

@end
