/* Runtime dump - OAXDrawable
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXDrawable : NSObject

+ (NSObject *)readDrawableFromXmlNode:(struct _xmlNode *)arg0 inNamespace:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readNonVisualPropertiesFromDrawableXmlNode:(struct _xmlNode *)arg0 inNamespace:(struct _xmlNode *)arg1 visualNodeName:(struct _xmlNode *)arg2 toDrawable:(struct _xmlNode *)arg3 drawingState:(struct _xmlNode *)arg4;
+ (NSObject *)readDrawablesFromXmlNode:(struct _xmlNode *)arg0 inNamespace:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;

@end
