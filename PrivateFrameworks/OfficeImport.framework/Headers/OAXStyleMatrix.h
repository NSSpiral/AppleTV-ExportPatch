/* Runtime dump - OAXStyleMatrix
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXStyleMatrix : NSObject

+ (void)readFromNode:(struct _xmlNode *)arg0 toStyleMatrix:(struct _xmlNode *)arg1 packagePart:(struct _xmlNode *)arg2 drawingState:(struct _xmlNode *)arg3;
+ (NSObject *)readReferenceFromNode:(struct _xmlNode *)arg0;
+ (char)readReferenceFromParentNode:(struct _xmlNode *)arg0 name:(struct _xmlNode *)arg1 inNamespace:(struct _xmlNode *)arg2 color:(struct _xmlNode *)arg3 index:(struct _xmlNode *)arg4;

@end
