/* Runtime dump - OAXFill
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXFill : NSObject

+ (NSObject *)readNullFillFromXmlNode:(struct _xmlNode *)arg0;
+ (NSObject *)readSolidFillFromXmlNode:(struct _xmlNode *)arg0;
+ (NSObject *)readGradientFillFromXmlNode:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (NSObject *)readImageFillFromXmlNode:(struct _xmlNode *)arg0 packagePart:(struct _xmlNode *)arg1 forDrawable:(struct _xmlNode *)arg2 drawingState:(struct _xmlNode *)arg3;
+ (NSObject *)readPresetPatternFillFromXmlNode:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (NSObject *)readGroupFillFromXmlNode:(struct _xmlNode *)arg0;
+ (void)readStretch:(struct _xmlNode *)arg0 stretch:(struct _xmlNode *)arg1;
+ (void)readTile:(struct _xmlNode *)arg0 tile:(struct _xmlNode *)arg1;
+ (NSObject *)readBlipRefFromXmlNode:(struct _xmlNode *)arg0 packagePart:(struct _xmlNode *)arg1 forDrawable:(struct _xmlNode *)arg2 drawingState:(struct _xmlNode *)arg3 forBullet:(struct _xmlNode *)arg4;
+ (NSObject *)readFillFromXmlNode:(struct _xmlNode *)arg0 packagePart:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (NSObject *)tileFlipModeEnumMap;
+ (void)readGradientFillFromXmlNode:(struct _xmlNode *)arg0 toGradientFill:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (NSObject *)pathGradientFillTypeEnumMap;
+ (NSObject *)readPathGradientFillFromXmlNode:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (NSObject *)readLinearGradientFillFromXmlNode:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (NSObject *)presetPatternFillTypeEnumMap;

@end
