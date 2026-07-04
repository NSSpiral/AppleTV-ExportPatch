/* Runtime dump - OAXShape3D
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXShape3D : NSObject

+ (NSObject *)readShape3DFromXmlNode:(struct _xmlNode *)arg0 packagePart:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (char)isEmpty:(char)arg0;
+ (NSObject *)bevelTypeEnumMap;
+ (NSObject *)readBevelFromXmlNode:(struct _xmlNode *)arg0;
+ (NSObject *)materialEnumMap;
+ (void)writeBevel:(id)arg0 to:(NSObject *)arg1;
+ (void)writeShape3D:(id)arg0 to:(NSObject *)arg1;

@end
