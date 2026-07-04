/* Runtime dump - OAXScene3D
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXScene3D : NSObject

+ (NSObject *)readScene3DFromXmlNode:(struct _xmlNode *)arg0 packagePart:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (NSObject *)cameraTypeEnumMap;
+ (NSObject *)lightRigTypeEnumMap;
+ (NSObject *)lightRigDirectionEnumMap;
+ (NSObject *)readCameraFromXmlNode:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (NSObject *)readLightRigFromXmlNode:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (NSObject *)readBackdropFromXmlNode:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (void)writeBackdrop:(id)arg0 to:(NSObject *)arg1;
+ (void)writeCamera:(id)arg0 to:(NSObject *)arg1;
+ (void)writeLightRig:(id)arg0 to:(NSObject *)arg1;
+ (void)writeScene3D:(id)arg0 to:(NSObject *)arg1;
+ (char)isEmpty:(char)arg0;
+ (void)writeRotation3D:(id)arg0 to:(NSObject *)arg1;

@end
