/* Runtime dump - OAXShape
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXShape : NSObject

+ (NSObject *)readFromXmlNode:(struct _xmlNode *)arg0 inNamespace:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readNonVisualShapeProperties:(struct _xmlNode *)arg0 nodeName:(struct _xmlNode *)arg1 inNamespace:(struct _xmlNode *)arg2 shapeProperties:(struct _xmlNode *)arg3;
+ (void)readCoreFromXmlNode:(struct _xmlNode *)arg0 inNamespace:(struct _xmlNode *)arg1 toShape:(struct _xmlNode *)arg2 drawingState:(struct _xmlNode *)arg3;
+ (char)isWritable:(char)arg0;

@end
