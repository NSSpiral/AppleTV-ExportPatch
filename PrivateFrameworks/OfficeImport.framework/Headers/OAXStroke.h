/* Runtime dump - OAXStroke
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXStroke : NSObject

+ (NSObject *)readStrokeFromXmlNode:(struct _xmlNode *)arg0 packagePart:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (NSObject *)lineCapEnumMap;
+ (NSObject *)compoundLineEnumMap;
+ (NSObject *)penAlignmentEnumMap;
+ (NSObject *)readPresetDashFromXmlNode:(struct _xmlNode *)arg0;
+ (NSObject *)readCustomDashFromXmlNode:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (void)readLineEnd:(id)arg0 fromXmlNode:(struct _xmlNode *)arg1;
+ (NSObject *)lineEndTypeEnumMap;
+ (NSObject *)lineEndWidthEnumMap;
+ (NSObject *)lineEndLengthEnumMap;
+ (NSObject *)presetDashEnumMap;

@end
