/* Runtime dump - OAXEffect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXEffect : NSObject

+ (void)readOuterShadow:(id)arg0 fromXmlNode:(struct _xmlNode *)arg1;
+ (void)readPresetShadow:(id)arg0 fromXmlNode:(struct _xmlNode *)arg1;
+ (void)readReflection:(id)arg0 fromXmlNode:(struct _xmlNode *)arg1;
+ (void)readGlow:(id)arg0 fromXmlNode:(struct _xmlNode *)arg1;
+ (void)readShadow:(id)arg0 fromXmlNode:(struct _xmlNode *)arg1;
+ (void)writeShadowBase:(id)arg0 to:(NSObject *)arg1;
+ (NSObject *)presetShadowTypeEnumMap;
+ (void)writeOuterShadow:(id)arg0 includeRotateWithShape:(char)arg1 to:(NSObject *)arg2;
+ (void)writePresetShadow:(id)arg0 to:(NSObject *)arg1;
+ (void)writeReflection:(id)arg0 to:(NSObject *)arg1;
+ (void)writeGlow:(id)arg0 to:(NSObject *)arg1;
+ (NSObject *)readEffectsFromXmlNode:(struct _xmlNode *)arg0 packagePart:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (char)isEmpty:(char)arg0;

@end
