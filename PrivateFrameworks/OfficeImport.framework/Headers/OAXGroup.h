/* Runtime dump - OAXGroup
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXGroup : NSObject

+ (NSObject *)readFromXmlNode:(struct _xmlNode *)arg0 inNamespace:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readPropertiesFromXmlNode:(struct _xmlNode *)arg0 properties:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)applyGroupFill:(id)arg0 toChildrenOfGroup:(NSObject *)arg1;

@end
