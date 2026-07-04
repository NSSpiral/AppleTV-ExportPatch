/* Runtime dump - OAXGeometry
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXGeometry : NSObject

+ (NSObject *)readPresetGeometryFromXmlNode:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (NSObject *)readCustomGeometryFromXmlNode:(struct _xmlNode *)arg0 hasImplicitFormulas:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readAdjustValuesFromCustomGeometryXmlNode:(struct _xmlNode *)arg0 toCustomGeometry:(struct _xmlNode *)arg1 adjustValueNameToIndexMap:(struct _xmlNode *)arg2 drawingState:(struct _xmlNode *)arg3;
+ (void)addFormulasFromFile:(NSString *)arg0 toCustomGeometry:(struct _xmlNode *)arg1 formulaNameToIndexMap:(struct _xmlNode *)arg2 drawingState:(struct _xmlNode *)arg3;
+ (void)readFormulasFromCustomGeometryXmlNode:(struct _xmlNode *)arg0 toCustomGeometry:(struct _xmlNode *)arg1 adjustValueNameToIndexMap:(struct _xmlNode *)arg2 formulaNameToIndexMap:(struct _xmlNode *)arg3 drawingState:(struct _xmlNode *)arg4;
+ (void)readTextRectFromCustomGeometryXmlNode:(struct _xmlNode *)arg0 toCustomGeometry:(struct _xmlNode *)arg1 formulaNameToIndexMap:(struct _xmlNode *)arg2 drawingState:(struct _xmlNode *)arg3;
+ (void)readPathsFromCustomGeometryXmlNode:(struct _xmlNode *)arg0 toCustomGeometry:(struct _xmlNode *)arg1 formulaNameToIndexMap:(struct _xmlNode *)arg2 drawingState:(struct _xmlNode *)arg3;
+ (NSObject *)shapeTypeEnumMap;
+ (void)writePath:(NSString *)arg0 coordSpace:(struct CsRect<int>)arg1 to:(NSObject *)arg2;
+ (NSObject *)stringWritingShapeType:(int)arg0;
+ (int)adjustValueWithGuideXmlNode:(struct _xmlNode *)arg0;
+ (NSObject *)stringForShapeType:(int)arg0;
+ (NSObject *)readFromParentXmlNode:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (int)shapeTypeForString:(NSString *)arg0;
+ (void)write:(char *)arg0 to:(NSObject *)arg1;
+ (NSObject *)formulaTypeEnumMap;
+ (NSObject *)formulaKeywordEnumMap;
+ (struct OADAdjustCoord)readAdjustCoordFromXmlNode:(struct _xmlNode *)arg0 name:(struct _xmlNode *)arg1 formulaNameToIndexMap:(struct _xmlNode *)arg2;
+ (NSObject *)pathFillModeEnumMap;
+ (void)writeShapePathPoint:(struct OADAdjustPoint)arg0 origin:(struct OADAdjustCoord)arg1 to:(NSObject *)arg2;

@end
