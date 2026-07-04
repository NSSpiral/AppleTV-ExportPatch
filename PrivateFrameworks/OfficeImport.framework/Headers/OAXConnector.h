/* Runtime dump - OAXConnector
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXConnector : NSObject

+ (void)readConnectionFromParent:(struct _xmlNode *)arg0 nodeName:(struct _xmlNode *)arg1 connection:(struct _xmlNode *)arg2 drawingState:(struct _xmlNode *)arg3;
+ (void)readNonVisualConnectorProperties:(struct _xmlNode *)arg0 inNamespace:(struct _xmlNode *)arg1 connectorProperties:(struct _xmlNode *)arg2 drawingState:(struct _xmlNode *)arg3;
+ (NSObject *)readFromXmlNode:(struct _xmlNode *)arg0 inNamespace:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;

@end
